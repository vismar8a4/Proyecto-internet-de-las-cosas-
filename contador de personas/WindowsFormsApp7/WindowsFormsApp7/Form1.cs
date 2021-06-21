using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO.Ports;

namespace WindowsFormsApp7
{
    public partial class Form1 : Form
    {
        string dato;
        string puertoseleccionado;

        public Form1()
        {
            InitializeComponent();
            string[] puertos = SerialPort.GetPortNames();
            foreach (string mostrar in puertos)
            {
                comboBox1.Items.Add(mostrar);
            }
                }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            serialPort1.Close();
            serialPort1.Dispose();
            puertoseleccionado = comboBox1.Text;
            serialPort1.PortName = puertoseleccionado;
            serialPort1.Open();
            CheckForIllegalCrossThreadCalls = false;
            if(serialPort1.IsOpen==true)
            {
                label3.Text = "CONECTADO";
            }
            else
            {
                label3.Text = "NO CONECTADO";
                return;
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            serialPort1.Close();
            serialPort1.Dispose();
            Close();
        }

        private void serialPort1_DataReceived(object sender, SerialDataReceivedEventArgs e)
        {
            dato = serialPort1.ReadLine();
            int numero = Convert.ToInt16(dato);
            label4.Text = numero.ToString();

        }

        private void label5_Click(object sender, EventArgs e)
        {

        }
    }
}
