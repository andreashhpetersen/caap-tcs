# Code base for the paper "Minimizing State Space Partitionings using Decision Trees" for Theoretical Computer Science

_Andreas Holck Høeg-Petersen, Kim Guldstrand Andersen, Andrzej Wasowski, Peter Gjøl Jensen_

To run the experiments, clone this repository. From the root directory, run `pip install -r requirements.txt` and install the local packages `pip install ./uppaal-gym` and `pip install ./viper`. Then, you can do

```python

python run_my_experiments.py

```

Models to run, shields to use and number of iterations can be controlled by changing the file directly.

To run the experiments related to `dtControl`, run

```python

python dtcontrol_experiments.py
```

Again, additional settings can be specified in the file.
