
package fatec.poo.model;

/**
 *
 * @author Dimas
 */
public class Departamento {
    private String sigla;
    private String nome;
    private Funcionario[] funcionarios;
    private int numFunc;

    public Departamento(String sigla, String nome) {
        this.sigla = sigla;
        this.nome = nome;
        funcionarios = new Funcionario[10];
        numFunc = 0;
    }

    public String getSigla() {
        return sigla;
    }

    public String getNome() {
        return nome;
    }

    public void addFuncionario(Funcionario f){
        funcionarios[numFunc] = f;
        numFunc++;
    }
    
    public void listarFuncionarios(){
        System.out.println("\n\nSigla: " + sigla);
        System.out.println("Nome: " + nome);
        System.out.println("Quantidade de Funcionarios: " + numFunc);
        System.out.println("\nRegistro\tNome\t\t\tCargo");
        for(int i=0;i < numFunc; i++){
            
        System.out.print(funcionarios[i].getRegistro() + "\t\t");
        System.out.print(funcionarios[i].getNome() + "\t\t");
        System.out.println(funcionarios[i].getCargo() + "\t\t");
        }
        
    }
    
}
