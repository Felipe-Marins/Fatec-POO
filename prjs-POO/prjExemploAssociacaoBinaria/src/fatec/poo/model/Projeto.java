/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package fatec.poo.model;

/**
 *
 * @author 0030481921020
 */
public class Projeto {
    private int codigo;
    private String descricao;
    private String dtInicio;
    private String dtTermino;
    private Funcionario[] funcionarios;
    private int numFunc;

    public Projeto(int codigo, String descricao) {
        this.codigo = codigo;
        this.descricao = descricao;
        funcionarios = new Funcionario[10];
        numFunc = 0;
    }

    public void setDtInicio(String dtInicio) {
        this.dtInicio = dtInicio;
    }

    public void setDtTermino(String dtTermino) {
        this.dtTermino = dtTermino;
    }

    public int getCodigo() {
        return codigo;
    }

    public String getDescricao() {
        return descricao;
    }

    public String getDtInicio() {
        return dtInicio;
    }

    public String getDtTermino() {
        return dtTermino;
    }
    
    public void addFuncionario(Funcionario f){
        funcionarios[numFunc] = f;
        numFunc++;
    }
    
    public void listarFuncionarios(){
        System.out.println("\n\nCodigo: " + codigo);
        System.out.println("Descrição: " + descricao);
        System.out.println("Data de inicio: " + dtInicio);
        System.out.println("Data de termino: " + dtTermino);
        System.out.println("Quantidade de funcionarios: " + numFunc);
        System.out.println("\nRegistro\tNome\t\t\tCargo\t\tDepartamento");
        
        for(int i=0;i < numFunc; i++){   
        System.out.print(funcionarios[i].getRegistro() + "\t\t");
        System.out.print(funcionarios[i].getNome() + "\t\t");
        System.out.print(funcionarios[i].getCargo() + "\t\t");
        System.out.println(funcionarios[i].getDepartamento() + "\t\t");
        }
        
    }
    
}
