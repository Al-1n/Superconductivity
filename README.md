# Superconductivity

## Testing Niobium Josephson Junctions

---

**About the project**

![](/img/python_icon.png) ![](/img/jupyter_icon.png)

This repository contains Python code for analyzing data from a real-world quantum mechanics experiment. The experiment involved using liquid helium to reduce the temperature of the test probe to a level where Cooper pairs propagate with zero resistance. 

**Requirements**
* JupyterLab
* Pandas
* NumPy
* lmfit

**How to use this project**

The code in these files can be adapted and used as a guidline for analyzing measurements of the properties predicted by the BCS theory of superconductivity using low-temperature methods and Josephson Junctions in a lab setting. 

**Contributors**

The experiment was performed under the guidance of Dr. Mengkun Liu and Gleb Aminov.

The data collection team included Zachary Kluger, Justin Ao, Jeremy Schleiffer and Alin Airinei. 

---

<br/>

# Background
<br/>  

Most commonly, Josephson junctions are constructed of three layers: two superconducting layers with a verry thin barrier layer in between.   

![](/img/junction.png)

<div class='col two caption'>
    Conceptual representation of the cross-section of a NbAl<sub>2</sub>O<sub>3</sub>Nb tunneling junction.
</div>
<br/>      

This project focuses on testing some of the key predictions of one of the most succsessful  theories in physics: the BCS theory of superconductivity. The theory is named after John Bardeen, Leon Cooper and J. Robert Schrieffer who shared the 1972 NObel Proze in Physics for the discovery of the BCS theory. John Bardeen also shared the 1956 Nobel Prize in Physics for his contribution in the development of the first transistors at Bell Labs.   

![](/img/BCS.png)

<div class='col two caption'>
   John Bardeen, Leon Cooper and Robert Schrieffer. Image credit <a href='https://physics.illinois.edu/people/nobel-laureates'>University of Illinois Nobel Laureats</a>. 
</div>
<br/>      

One year after Bardeen, Cooper and Schriffer received the Nobel prize for the BCS theory, Brian Josephson received the 1973 Nobel Prize in physics "for his theoretical predictions of the properties of a supercurrent through a tunnel barrier, in particular those phenomena which are generally known as the Josephson effects". Below there is a summary of the key principles of superconductivity including the BCS theory. 

**<ins>General characteristics of superconductivity</ins>**
* **Critical Temperature**: The transition to the superconducting state occurs below a critical temperature, Tc, characteristic to each superconductor.
* **Zero electrical resistance**: Superconductors will have zero electrical resistance below their critical temperature (Tc). This means that electric current can flow through a superconductor without any loss of energy.
* **The Meissner effect**: Superconductors will expel magnetic fields from their interiors. This is known as the Meissner effect.
* **The isotope effect**: The critical temperature of a superconductor is inversely proportional to the square root of the mass of its isotopes. This means that heavier isotopes will have lower critical temperatures. 

With respect to the current project the **isotope effect** is particularly significant as we tested a Niobium based junction. Among the pure superconducting elements, Niobium has the highest Tc of 9.25K, as was first measured by Meissner in 1930.

### <ins>BCS Theory</ins>

* **Formation of Cooper Pairs**: BCS theory predicts the existence of Cooper pairs, where electrons with opposite spins form pairs due to electron-phonon interactions.
* **Flux quantization**: The magnetic flux through a superconducting loop must be quantized in units of the flux quantum, which is defined as hc/2e, where h is Planck's constant, c is the speed of light, and e is the elementary charge.
* **Energy gap**: There will be an energy gap between the ground state of a superconductor and the excited states. This means that it takes a certain amount of energy to excite an electron from the ground state to an excited state.



## Josephson Junctions as candidates for Quantum Qubits

<br/>
 
Josephson junctions offer several advantages for quantum computing applications. Their compact size and scalability enable the fabrication of densely packed qubit arrays, while their inherent coherence and low decoherence rates ensure that quantum information can be maintained for extended periods. Additionally, Josephson junctions can be precisely controlled and coupled using external magnetic fields, facilitating the manipulation and entanglement of qubits.

Through the phenomenon of superposition, these qubits can exist in multiple states simultaneously, exponentially expanding computational possibilities.


![](/img/temp_circ.png)

<div class='col two caption'>
    The diagram shows the temperature measuring part of the experimental setup. The Cryogenic Probe Vacuum Can (CPVC) contains enclosed the test circuitry including the germanium thermometer and the Josephson junctions. 
</div>
<br/>       

## Advantages of Quantum Computers and Superconducting Qubits

<br/>

Quantum computers have several advantages over classical computers. They can solve certain problems that are intractable for classical computers, such as factoring large numbers. They can also be used to simulate complex systems, such as molecules and materials.

Superconducting qubits have several advantages over other qubit candidates. They are relatively easy to fabricate, and they have long coherence times, which means that they can maintain their quantum states for extended periods of time. Additionally, superconducting qubits can be coupled together using external magnetic fields, which facilitates the manipulation and entanglement of qubits.

<br/><br/><br/>



