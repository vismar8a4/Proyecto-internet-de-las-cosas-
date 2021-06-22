Imports System.IO
Imports System.IO.Ports
Imports System.Threading
Public Class Form1
    Private Sub Form1_Disposed(ByVal sender As Object, ByVal e As System.EventArgs)
        SerialPort1.Close()
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




    Private Sub Button1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button1.Click
        SerialPort1.Close()
        SerialPort1.Open()
        If cambio13 = True Then
            Button1.BackColor = Color.GreenYellow
            SerialPort1.Write("a")
            Label2.Text = "ENCENDIDO"
            TextBox7.BackColor = Color.Yellow

        Else
            Button1.BackColor = Color.OrangeRed
            SerialPort1.Write("z")
            Label2.Text = "APAGADO"
            TextBox7.BackColor = Color.White
        End If
        cambio13 = Not (cambio13)
        SerialPort1.Close()
    End Sub
    Private Sub Button3_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button3.Click
        SerialPort1.Close()
        SerialPort1.Open()
        Button3.Enabled = False
    End Sub
    Private Sub Button4_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button4.Click
        SerialPort1.Close()
        Button3.Enabled = True
    End Sub

    Private Sub Form1_load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        SerialPort1.Close()
        SerialPort1.PortName = "COM9" 'CAMBIA EL PUERTO COM
        SerialPort1.BaudRate = 9600
        SerialPort1.DataBits = 8
        SerialPort1.Parity = Parity.None
        SerialPort1.StopBits = StopBits.One
        SerialPort1.Handshake = Handshake.None
        SerialPort1.Encoding = System.Text.Encoding.Default
    End Sub

    Private Sub Label1_Click(sender As Object, e As EventArgs)

    End Sub

    Private Sub Button2_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button2.Click
        SerialPort1.Close()
        SerialPort1.Close()
        SerialPort1.Open()
        If cambio12 = True Then
            Button2.BackColor = Color.GreenYellow
            SerialPort1.Write("c")
            Label3.Text = "ENCENDIDO"
            TextBox1.BackColor = Color.Yellow
        Else
            Button2.BackColor = Color.OrangeRed
            SerialPort1.Write("d")
            Label3.Text = "APAGADO"
            TextBox1.BackColor = Color.White

        End If
        cambio12 = Not (cambio12)
        SerialPort1.Close()
    End Sub
    Private Sub Button5_Click(ByVal sender As System.Object, ByVal e As System.EventArgs)

    End Sub

    Private Sub Label3_Click(sender As Object, e As EventArgs) Handles Label3.Click

    End Sub

    Private Sub Label2_Click(sender As Object, e As EventArgs) Handles Label2.Click

    End Sub

    Private Sub Button6_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button6.Click
        SerialPort1.Close()
        SerialPort1.Open()
        If cambio14 = True Then
            Button6.BackColor = Color.GreenYellow
            SerialPort1.Write("q")
            Label4.Text = "ENCENDIDO"
            TextBox2.BackColor = Color.Yellow
        Else
            Button6.BackColor = Color.OrangeRed
            SerialPort1.Write("w")
            Label4.Text = "APAGADO"
            TextBox2.BackColor = Color.White
        End If
        cambio14 = Not (cambio14)
        SerialPort1.Close()

    End Sub

    Private Sub Button5_Click_1(sender As Object, e As EventArgs)

    End Sub



    Private Sub Button7_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button7.Click
        SerialPort1.Close()
        SerialPort1.Open()
        If cambio15 = True Then
            Button7.BackColor = Color.GreenYellow
            SerialPort1.Write("x")
            Label5.Text = "ENCENDIDO"
            TextBox3.BackColor = Color.Yellow
        Else
            Button7.BackColor = Color.OrangeRed
            SerialPort1.Write("y")
            Label5.Text = "APAGADO"
            TextBox3.BackColor = Color.White
        End If
        cambio15 = Not (cambio15)
        SerialPort1.Close()
    End Sub

    Private Sub Button5_Click_2(sender As Object, e As EventArgs) Handles Button5.Click
        SerialPort1.Close()
        SerialPort1.Open()
        If cambio16 = True Then
            Button5.BackColor = Color.GreenYellow
            SerialPort1.Write("n")
            Label1.Text = "ENCENDIDO"
            TextBox4.BackColor = Color.Yellow
        Else
            Button5.BackColor = Color.OrangeRed
            SerialPort1.Write("m")
            Label1.Text = "APAGADO"
            TextBox4.BackColor = Color.White
        End If
        cambio16 = Not (cambio16)
        SerialPort1.Close()
    End Sub

    Private Sub Button8_Click(sender As Object, e As EventArgs) Handles Button8.Click
        SerialPort1.Close()
        SerialPort1.Open()
        If cambio17 = True Then
            Button8.BackColor = Color.GreenYellow
            SerialPort1.Write("j")
            Label6.Text = "ENCENDIDO"
            TextBox5.BackColor = Color.Yellow
        Else
            Button8.BackColor = Color.OrangeRed
            SerialPort1.Write("k")
            Label6.Text = "APAGADO"
            TextBox5.BackColor = Color.White
        End If
        cambio17 = Not (cambio17)
        SerialPort1.Close()
    End Sub

    Private Sub Button9_Click(sender As Object, e As EventArgs) Handles Button9.Click
        SerialPort1.Close()
        SerialPort1.Open()
        If cambio18 = True Then
            Button9.BackColor = Color.GreenYellow
            SerialPort1.Write("v")
            Label7.Text = "ENCENDIDO"
            TextBox6.BackColor = Color.Yellow
        Else
            Button9.BackColor = Color.OrangeRed
            SerialPort1.Write("b")
            Label7.Text = "APAGADO"
            TextBox6.BackColor = Color.White
        End If
        cambio18 = Not (cambio18)
        SerialPort1.Close()
    End Sub
End Class
