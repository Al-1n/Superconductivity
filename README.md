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


<div style='text-align: center;' class='img_row'>
    <img class='col two' src='{{ site.baseurl }}/img/junction.png' alt='' title='example image'/>
</div>

<div class='col two caption'>
    Conceptual representation of the cross-section of a NbAl<sub>2</sub>O<sub>3</sub>Nb tunneling junction.
</div>
<br/>      



<div style='text-align: center;' class='img_row'>
    <img class='col two' src='{{ site.baseurl }}/img/temp_circ.png' alt='' title='example image'/>
</div>

<div class='col two caption'>
    The diagram shows the temperature measuring part of the experimental setup. The Cryogenic Probe Vacuum Can (CPVC) contains enclosed the test circuitry including the germanium thermometer and the Josephson junctions. 
</div>
<br/>      

## Josephson Junctions as candidates for Quantum Qubits

<br/>
 
Josephson junctions offer several advantages for quantum computing applications. Their compact size and scalability enable the fabrication of densely packed qubit arrays, while their inherent coherence and low decoherence rates ensure that quantum information can be maintained for extended periods. Additionally, Josephson junctions can be precisely controlled and coupled using external magnetic fields, facilitating the manipulation and entanglement of qubits.

Through the phenomenon of superposition, these qubits can exist in multiple states simultaneously, exponentially expanding computational possibilities.


![](/img/temp_circ.png)

<div class='col two caption'>
    The diagram shows the temperature measuring part of the experimental setup. The Cryogenic Probe Vacuum Can (CPVC) contains enclosed the test circuitry including the germanium thermometer and the Josephson junctions. 
</div>
<br/>       




![](/img/fine_peaks.png)

<div class='col two caption'>
    The Gaussian fit to the Doppler broadened signal showing the frequency separation between the Rubidium-87 F=1 and F=2 levels. 
</div>
<br/>

## Advantages of Quantum Computers and Superconducting Qubits

<br/>

Quantum computers have several advantages over classical computers. They can solve certain problems that are intractable for classical computers, such as factoring large numbers. They can also be used to simulate complex systems, such as molecules and materials.

Superconducting qubits have several advantages over other qubit candidates. They are relatively easy to fabricate, and they have long coherence times, which means that they can maintain their quantum states for extended periods of time. Additionally, superconducting qubits can be coupled together using external magnetic fields, which facilitates the manipulation and entanglement of qubits.

<br/><br/><br/>



