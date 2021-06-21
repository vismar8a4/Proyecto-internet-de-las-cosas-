Imports System.IO
Imports System.IO.Ports
Imports System.Threading
Public Class Form1
    Private Sub Form1_Disposed(ByVal sender As Object, ByVal e As System.EventArgs)
        SerialPort1.Close()
    End Sub
    Private Sub PictureBox1_Click(sender As Object, e As EventArgs)

    End Sub
    Shared _continue As Boolean
    Shared _serialPort As SerialPort
    Dim cambio12 As Boolean = True
    Dim cambio13 As Boolean = True
    Dim cambio14 As Boolean = True
    Dim cambio15 As Boolean = True
    Dim cambio16 As Boolean = True
    Dim cambio17 As Boolean = True
    Dim cambio18 As Boolean = True
    Dim cambio19 As Boolean = True
    Dim cambio20 As Boolean = True
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        SerialPort1.Close()
        SerialPort1.Open()
        If cambio19 = True Then
            Button1.BackColor = Color.OrangeRed

            SerialPort1.Write("m")
            Label1.Text = "CERRADO"
            Label2.Text = "CERRADO"
            Label3.Text = "CERRADO"
            Label4.Text = "CERRADO"
            Label5.Text = "CERRADO"
            Label6.Text = "CERRADO"
            Label7.Text = "CERRADO"
            TextBox1.BackColor = Color.Red
            TextBox2.BackColor = Color.Red
            TextBox3.BackColor = Color.Red
            TextBox4.BackColor = Color.Red
            TextBox5.BackColor = Color.Red
            TextBox6.BackColor = Color.Red
            TextBox7.BackColor = Color.Red


        Else
            Button1.BackColor = Color.WhiteSmoke

        End If
        cambio19 = Not (cambio19)
        SerialPort1.Close()
    End Sub

    Private Sub Button10_Click(sender As Object, e As EventArgs) Handles Button10.Click
        SerialPort1.Close()
        SerialPort1.Open()
        Button10.Enabled = False
    End Sub

    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click
        SerialPort1.Close()
        SerialPort1.Open()
        If cambio13 = True Then
            Button3.BackColor = Color.GreenYellow
            SerialPort1.Write("a")
            Label1.Text = "ABIERTO"
            TextBox1.BackColor = Color.GreenYellow
        Else
            Button3.BackColor = Color.OrangeRed
            SerialPort1.Write("e")
            Label1.Text = "CERRADO"
            TextBox1.BackColor = Color.OrangeRed

        End If
        cambio13 = Not (cambio13)
        SerialPort1.Close()
    End Sub

    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        SerialPort1.Close()
        SerialPort1.PortName = "COM5" 'CAMBIA EL PUERTO COM
        SerialPort1.BaudRate = 9600
        SerialPort1.DataBits = 8
        SerialPort1.Parity = Parity.None
        SerialPort1.StopBits = StopBits.One
        SerialPort1.Handshake = Handshake.None
        SerialPort1.Encoding = System.Text.Encoding.Default
    End Sub

    Private Sub Button4_Click(sender As Object, e As EventArgs) Handles Button4.Click
        SerialPort1.Close()
        SerialPort1.Open()
        If cambio12 = True Then
            Button4.BackColor = Color.GreenYellow
            SerialPort1.Write("i")
            Label2.Text = "ABIERTO"
            TextBox5.BackColor = Color.GreenYellow

        Else
            Button4.BackColor = Color.OrangeRed
            SerialPort1.Write("o")
            Label2.Text = "CERRADO"
            TextBox5.BackColor = Color.OrangeRed

        End If
        cambio12 = Not (cambio12)
        SerialPort1.Close()
    End Sub

    Private Sub Button5_Click(sender As Object, e As EventArgs) Handles Button5.Click
        SerialPort1.Close()
        SerialPort1.Open()
        If cambio14 = True Then
            Button5.BackColor = Color.GreenYellow
            SerialPort1.Write("u")
            Label3.Text = "ABIERTO"
            TextBox2.BackColor = Color.GreenYellow
        Else
            Button5.BackColor = Color.OrangeRed
            SerialPort1.Write("b")
            Label3.Text = "CERRADO"
            TextBox2.BackColor = Color.OrangeRed
        End If
        cambio14 = Not (cambio14)
        SerialPort1.Close()
    End Sub

    Private Sub Button6_Click(sender As Object, e As EventArgs) Handles Button6.Click
        SerialPort1.Close()
        SerialPort1.Open()
        If cambio15 = True Then
            Button6.BackColor = Color.GreenYellow
            SerialPort1.Write("c")
            Label4.Text = "ABIERTO"
            TextBox7.BackColor = Color.GreenYellow
        Else
            Button6.BackColor = Color.OrangeRed
            SerialPort1.Write("d")
            Label4.Text = "CERRADO"
            TextBox7.BackColor = Color.OrangeRed

        End If
        cambio15 = Not (cambio15)
        SerialPort1.Close()
    End Sub

    Private Sub Button7_Click(sender As Object, e As EventArgs) Handles Button7.Click
        SerialPort1.Close()
        SerialPort1.Open()
        If cambio16 = True Then
            Button7.BackColor = Color.GreenYellow
            SerialPort1.Write("g")
            Label5.Text = "ABIERTO"
            TextBox4.BackColor = Color.GreenYellow
        Else
            Button7.BackColor = Color.OrangeRed
            SerialPort1.Write("f")
            Label5.Text = "CERRADO"
            TextBox4.BackColor = Color.OrangeRed

        End If
        cambio16 = Not (cambio16)
        SerialPort1.Close()
    End Sub

    Private Sub Button8_Click(sender As Object, e As EventArgs) Handles Button8.Click
        SerialPort1.Close()
        SerialPort1.Open()
        If cambio17 = True Then
            Button8.BackColor = Color.GreenYellow
            SerialPort1.Write("h")
            Label6.Text = "ABIERTO"
            TextBox6.BackColor = Color.GreenYellow
        Else
            Button8.BackColor = Color.OrangeRed
            SerialPort1.Write("j")
            Label6.Text = "CERRADO"
            TextBox6.BackColor = Color.OrangeRed

        End If
        cambio17 = Not (cambio17)
        SerialPort1.Close()
    End Sub

    Private Sub Button9_Click(sender As Object, e As EventArgs) Handles Button9.Click
        SerialPort1.Close()
        SerialPort1.Open()
        If cambio18 = True Then
            Button9.BackColor = Color.GreenYellow
            SerialPort1.Write("k")
            Label7.Text = "ABIERTO"
            TextBox3.BackColor = Color.GreenYellow
        Else
            Button9.BackColor = Color.OrangeRed
            SerialPort1.Write("l")
            Label7.Text = "CERRADO"
            TextBox3.BackColor = Color.OrangeRed

        End If
        cambio18 = Not (cambio18)
        SerialPort1.Close()
    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        SerialPort1.Close()
        SerialPort1.Open()
        If cambio20 = True Then
            Button2.BackColor = Color.YellowGreen
            SerialPort1.Write("n")
            Label1.Text = "ABIERTO"
            Label2.Text = "ABIERTO"
            Label3.Text = "ABIERTO"
            Label4.Text = "ABIERTO"
            Label5.Text = "ABIERTO"
            Label6.Text = "ABIERTO"
            Label7.Text = "ABIERTO"
            TextBox1.BackColor = Color.GreenYellow
            TextBox2.BackColor = Color.GreenYellow
            TextBox3.BackColor = Color.GreenYellow
            TextBox4.BackColor = Color.GreenYellow
            TextBox5.BackColor = Color.GreenYellow
            TextBox6.BackColor = Color.GreenYellow
            TextBox7.BackColor = Color.GreenYellow

        Else
            Button2.BackColor = Color.WhiteSmoke

        End If
        cambio20 = Not (cambio20)
        SerialPort1.Close()
    End Sub
End Class
