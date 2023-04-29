<h1><br>0x1B. C - Sorting algorithms &amp; Big O</h1>
<div>
    <div>CAlgorithmData structure</div>
</div>
<div>
    <ul>
        <li>&nbsp;By:&nbsp;Alexandre Gautier</li>
        <li>&nbsp;Weight:&nbsp;2</li>
        <li>&nbsp;Project to be done in teams of&nbsp;2&nbsp;people&nbsp;(your team:&nbsp;Julius Njeri)</li>
        <li>&nbsp;Ongoing second chance project - started&nbsp;<span title="">Apr 19, 2023 6:00 AM</span>, must end by&nbsp;<span title="">Apr 30, 2023 6:00 AM</span></li>
        <li>&nbsp;An auto review will be launched at the deadline</li>
    </ul>
</div>
<div>
    <h4>In a nutshell&hellip;</h4>
    <ul>
        <li><strong>Contribution:</strong> 100.0%</li>
        <li><strong>Auto QA review:</strong> 0.0/48 mandatory &amp; 0.0/100 optional</li>
        <li><strong>Altogether:</strong>&nbsp; <strong>0.0%</strong>
            <ul>
                <li>Mandatory: 0.0%</li>
                <li>Optional: 0.0%</li>
                <li>Contribution: 100.0%</li>
                <li>Calculation: &nbsp;100.0% * (0.0% + (0.0% * 0.0%) ) &nbsp;== <strong>0.0%</strong></li>
            </ul>
        </li>
    </ul>
</div>
<div>
    <div>
        <p><img src="https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/248/willy-wonka.png"><br><br></p>
        <h2>Background Context</h2>
        <p>This project is meant to be done by groups of two students. Each group of two should&nbsp;<a href="https://intranet.alxswe.com/rltoken/gIcHRL9I7i1lw2CTAll37A" title="pair program" target="_blank">pair program</a> for at least the mandatory part.</p>
        <h2>Resources</h2>
        <p><strong>Read or watch</strong>:</p>
        <ul>
            <li><a href="https://intranet.alxswe.com/rltoken/-j5MKLBlzZAC2RfJ5DTBIg" title="Sorting algorithm" target="_blank">Sorting algorithm</a></li>
            <li><a href="https://intranet.alxswe.com/rltoken/WRvrE2BaNVQFssHiUATTrw" title="Big O notation" target="_blank">Big O notation</a></li>
            <li><a href="https://intranet.alxswe.com/rltoken/ol0P7NbYVb5R31iOv4Q40A" title="Sorting algorithms animations" target="_blank">Sorting algorithms animations</a></li>
            <li><a href="https://intranet.alxswe.com/rltoken/_I0aEvhfJ66Xyob6dd9Utw" title="15 sorting algorithms in 6 minutes" target="_blank">15 sorting algorithms in 6 minutes</a> (<em><strong>WARNING</strong>: The following video can trigger seizure/epilepsy. It is not required for the project, as it is only a funny visualization of different sorting algorithms</em>)</li>
            <li><a href="https://intranet.alxswe.com/rltoken/Ea93HeEYuNkOL7sGb6zzGg" title="CS50 Algorithms explanation in detail by David Malan" target="_blank">CS50 Algorithms explanation in detail by David Malan</a></li>
            <li><a href="https://intranet.alxswe.com/rltoken/21X_eaj5RGcLIL9mZv2sqw" title="All about sorting algorithms" target="_blank">All about sorting algorithms</a></li>
        </ul>
        <h2>Learning Objectives</h2>
        <p>At the end of this project, you are expected to be able to&nbsp;<a href="https://intranet.alxswe.com/rltoken/b-QhraVUoSGmQ1C4QfNoFw" title="explain to anyone" target="_blank">explain to anyone</a>,&nbsp;<strong>without the help of Google</strong>:</p>
        <h3>General</h3>
        <ul>
            <li>At least four different sorting algorithms</li>
            <li>What is the Big O notation, and how to evaluate the time complexity of an algorithm</li>
            <li>How to select the best sorting algorithm for a given input</li>
            <li>What is a stable sorting algorithm</li>
        </ul>
        <h3>Copyright - Plagiarism</h3>
        <ul>
            <li>You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.</li>
            <li>You will not be able to meet the objectives of this or any following project by copying and pasting someone else&rsquo;s work.</li>
            <li>You are not allowed to publish any content of this project.</li>
            <li>Any form of plagiarism is strictly forbidden and will result in removal from the program.</li>
        </ul>
        <h2>Requirements</h2>
        <h3>General</h3>
        <ul>
            <li>Allowed editors:&nbsp;<code>vi</code>,&nbsp;<code>vim</code>,&nbsp;<code>emacs</code></li>
            <li>All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89</li>
            <li>All your files should end with a new line</li>
            <li>A&nbsp;<code>README.md</code> file, at the root of the folder of the project, is mandatory</li>
            <li>Your code should use the&nbsp;<code>Betty</code> style. It will be checked using&nbsp;<a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and&nbsp;<a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
            <li>You are not allowed to use global variables</li>
            <li>No more than 5 functions per file</li>
            <li>Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like&nbsp;<em>printf, puts, &hellip;</em> is totally forbidden.</li>
            <li>In the following examples, the&nbsp;<code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own&nbsp;<code>main.c</code> files at compilation. Our&nbsp;<code>main.c</code> files might be different from the one shown in the examples</li>
            <li>The prototypes of all your functions should be included in your header file called&nbsp;<code>sort.h</code></li>
            <li>Don&rsquo;t forget to push your header file</li>
            <li>All your header files should be include guarded</li>
            <li>A list/array does not need to be sorted if its size is less than 2.</li>
        </ul>
        <h3>GitHub</h3>
        <p><strong>There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.</strong></p>
        <h2>More Info</h2>
        <h3>Data Structure and Functions</h3>
        <ul>
            <li>For this project you are given the following&nbsp;<code>print_array</code>, and&nbsp;<code>print_list</code> functions:</li>
        </ul>
        <pre><code>#include &lt;stdlib.h&gt;
#include &lt;stdio.h&gt;

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array &amp;&amp; i &lt; size)
    {
        if (i &gt; 0)
            printf(&quot;, &quot;);
        printf(&quot;%d&quot;, array[i]);
        ++i;
    }
    printf(&quot;\n&quot;);
}
</code></pre>
        <pre><code>#include &lt;stdio.h&gt;
#include &quot;sort.h&quot;

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i &gt; 0)
            printf(&quot;, &quot;);
        printf(&quot;%d&quot;, list-&gt;n);
        ++i;
        list = list-&gt;next;
    }
    printf(&quot;\n&quot;);
}
</code></pre>
        <ul>
            <li>Our files&nbsp;<code>print_array.c</code> and&nbsp;<code>print_list.c</code> (containing the&nbsp;<code>print_array</code> and&nbsp;<code>print_list</code> functions) will be compiled with your functions during the correction.</li>
            <li>Please declare the prototype of the functions&nbsp;<code>print_array</code> and&nbsp;<code>print_list</code> in your&nbsp;<code>sort.h</code> header file</li>
            <li>Please use the following data structure for doubly linked list:</li>
        </ul>
        <pre><code>/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
</code></pre>
        <p>Please, note this format is used for Quiz and Task questions.</p>
        <ul>
            <li><code>O(1)</code></li>
            <li><code>O(n)</code></li>
            <li><code>O(n!)</code></li>
            <li>n square -&gt;&nbsp;<code>O(n^2)</code></li>
            <li>log(n) -&gt;&nbsp;<code>O(log(n))</code></li>
            <li>n * log(n) -&gt;&nbsp;<code>O(nlog(n))</code></li>
            <li>n + k -&gt;&nbsp;<code>O(n+k)</code></li>
            <li>&hellip;</li>
        </ul>
        <p>Please use the &ldquo;short&rdquo; notation (don&rsquo;t use constants). Example:&nbsp;<code>O(nk)</code> or&nbsp;<code>O(wn)</code> should be written&nbsp;<code>O(n)</code>. If an answer is required within a file, all your answers files must have a newline at the end.</p>
        <h3>Tests</h3>
        <p>Here is a quick tip to help you test your sorting algorithms with big sets of random integers:&nbsp;<a href="https://intranet.alxswe.com/rltoken/YR-VWQbICB59wZs1eAaI3w" title="Random.org" target="_blank">Random.org</a></p>
    </div>
</div>
<div>
    <div>
        <h3>Quiz questions</h3>
    </div>
    <div>
        <div><strong>Great!</strong> You&apos;ve completed the quiz successfully! Keep going!&nbsp;(Show quiz)</div>
    </div>
</div>
<h2>Tasks</h2>
<div>
    <div>
        <div>
            <h3>0. Bubble sort</h3>
            <div>mandatory</div>
        </div>
        <div>
            <div>
                <div>
                    <div><br></div>
                </div>
                <div>Score:&nbsp;0.0%&nbsp;(Checks completed: 0.0%)</div>
            </div>
            <p><iframe width="560" height="315" src="https://www.youtube.com/embed/lyZQPjUT5B4" frameborder="0" allowfullscreen=""></iframe><br><br></p>
            <p>Write a function that sorts an array of integers in ascending order using the&nbsp;<a href="https://intranet.alxswe.com/rltoken/awhP8BhtkGi-lwmMc2-KAw" title="Bubble sort" target="_blank">Bubble sort</a> algorithm</p>
            <ul>
                <li>Prototype:&nbsp;<code>void bubble_sort(int *array, size_t size);</code></li>
                <li>You&rsquo;re expected to print the&nbsp;<code>array</code> after each time you swap two elements (See example below)</li>
            </ul>
            <p>Write in the file&nbsp;<code>0-O</code>, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:</p>
            <ul>
                <li>in the best case</li>
                <li>in the average case</li>
                <li>in the worst case</li>
            </ul>
            <pre><code>alex@/tmp/sort$ cat 0-main.c 
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &quot;sort.h&quot;

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf(&quot;\n&quot;);
    bubble_sort(array, n);
    printf(&quot;\n&quot;);
    print_array(array, n);
    return (0);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 0-bubble_sort.c 0-main.c print_array.c -o bubble
alex@/tmp/sort$ ./bubble
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

19, 48, 71, 99, 13, 52, 96, 73, 86, 7
19, 48, 71, 13, 99, 52, 96, 73, 86, 7
19, 48, 71, 13, 52, 99, 96, 73, 86, 7
19, 48, 71, 13, 52, 96, 99, 73, 86, 7
19, 48, 71, 13, 52, 96, 73, 99, 86, 7
19, 48, 71, 13, 52, 96, 73, 86, 99, 7
19, 48, 71, 13, 52, 96, 73, 86, 7, 99
19, 48, 13, 71, 52, 96, 73, 86, 7, 99
19, 48, 13, 52, 71, 96, 73, 86, 7, 99
19, 48, 13, 52, 71, 73, 96, 86, 7, 99
19, 48, 13, 52, 71, 73, 86, 96, 7, 99
19, 48, 13, 52, 71, 73, 86, 7, 96, 99
19, 13, 48, 52, 71, 73, 86, 7, 96, 99
19, 13, 48, 52, 71, 73, 7, 86, 96, 99
13, 19, 48, 52, 71, 73, 7, 86, 96, 99
13, 19, 48, 52, 71, 7, 73, 86, 96, 99
13, 19, 48, 52, 7, 71, 73, 86, 96, 99
13, 19, 48, 7, 52, 71, 73, 86, 96, 99
13, 19, 7, 48, 52, 71, 73, 86, 96, 99
13, 7, 19, 48, 52, 71, 73, 86, 96, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
alex@/tmp/sort$ 
</code></pre>
        </div>
        <div>
            <div>
                <p><strong>Repo:</strong></p>
                <ul>
                    <li>GitHub repository:&nbsp;<code>sorting_algorithms</code></li>
                    <li>File:&nbsp;<code>0-bubble_sort.c, 0-O</code></li>
                </ul>
            </div>
        </div>
        <div>
            <div>
                <div><button>&nbsp;Done?</button> <button>Help</button> <button>Check your code</button> <button>QA Review</button></div>
                <div><br></div>
            </div>
        </div>
    </div>
</div>
<div>
    <div>
        <div>
            <h3>1. Insertion sort</h3>
            <div>mandatory</div>
        </div>
        <div>
            <div>
                <div>
                    <div><br></div>
                </div>
                <div>Score:&nbsp;0.0%&nbsp;(Checks completed: 0.0%)</div>
            </div>
            <p><iframe width="560" height="315" src="https://www.youtube.com/embed/ROalU379l3U" frameborder="0" allowfullscreen=""></iframe><br><br></p>
            <p>Write a function that sorts a doubly linked list of integers in ascending order using the&nbsp;<a href="https://intranet.alxswe.com/rltoken/GocxRKbPdsmERXeOHMCO2w" title="Insertion sort" target="_blank">Insertion sort</a> algorithm</p>
            <ul>
                <li>Prototype:&nbsp;<code>void insertion_sort_list(listint_t **list);</code></li>
                <li>You are not allowed to modify the integer&nbsp;<code>n</code> of a node. You have to swap the nodes themselves.</li>
                <li>You&rsquo;re expected to print the&nbsp;<code>list</code> after each time you swap two elements (See example below)</li>
            </ul>
            <p>Write in the file&nbsp;<code>1-O</code>, the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:</p>
            <ul>
                <li>in the best case</li>
                <li>in the average case</li>
                <li>in the worst case</li>
            </ul>
            <pre><code>alex@/tmp/sort$ cat 1-main.c
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &quot;sort.h&quot;

/**
 * create_listint - Creates a doubly linked list from an array of integers
 *
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 *
 * Return: Pointer to the first element of the created list. NULL on failure
 */
listint_t *create_listint(const int *array, size_t size)
{
    listint_t *list;
    listint_t *node;
    int *tmp;

    list = NULL;
    while (size--)
    {
        node = malloc(sizeof(*node));
        if (!node)
            return (NULL);
        tmp = (int *)&amp;node-&gt;n;
        *tmp = array[size];
        node-&gt;next = list;
        node-&gt;prev = NULL;
        list = node;
        if (list-&gt;next)
            list-&gt;next-&gt;prev = list;
    }
    return (list);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    listint_t *list;
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    list = create_listint(array, n);
    if (!list)
        return (1);
    print_list(list);
    printf(&quot;\n&quot;);
    insertion_sort_list(&amp;list);
    printf(&quot;\n&quot;);
    print_list(list);
    return (0);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 1-main.c 1-insertion_sort_list.c print_list.c -o insertion
alex@/tmp/sort$ ./insertion
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

19, 48, 71, 99, 13, 52, 96, 73, 86, 7
19, 48, 71, 13, 99, 52, 96, 73, 86, 7
19, 48, 13, 71, 99, 52, 96, 73, 86, 7
19, 13, 48, 71, 99, 52, 96, 73, 86, 7
13, 19, 48, 71, 99, 52, 96, 73, 86, 7
13, 19, 48, 71, 52, 99, 96, 73, 86, 7
13, 19, 48, 52, 71, 99, 96, 73, 86, 7
13, 19, 48, 52, 71, 96, 99, 73, 86, 7
13, 19, 48, 52, 71, 96, 73, 99, 86, 7
13, 19, 48, 52, 71, 73, 96, 99, 86, 7
13, 19, 48, 52, 71, 73, 96, 86, 99, 7
13, 19, 48, 52, 71, 73, 86, 96, 99, 7
13, 19, 48, 52, 71, 73, 86, 96, 7, 99
13, 19, 48, 52, 71, 73, 86, 7, 96, 99
13, 19, 48, 52, 71, 73, 7, 86, 96, 99
13, 19, 48, 52, 71, 7, 73, 86, 96, 99
13, 19, 48, 52, 7, 71, 73, 86, 96, 99
13, 19, 48, 7, 52, 71, 73, 86, 96, 99
13, 19, 7, 48, 52, 71, 73, 86, 96, 99
13, 7, 19, 48, 52, 71, 73, 86, 96, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
alex@/tmp/sort$
</code></pre>
        </div>
        <div>
            <div>
                <p><strong>Repo:</strong></p>
                <ul>
                    <li>GitHub repository:&nbsp;<code>sorting_algorithms</code></li>
                    <li>File:&nbsp;<code>1-insertion_sort_list.c, 1-O</code></li>
                </ul>
            </div>
        </div>
        <div>
            <div>
                <div><button>&nbsp;Done?</button> <button>Help</button> <button>Check your code</button> <button>QA Review</button></div>
                <div><br></div>
            </div>
        </div>
    </div>
</div>
<div>
    <div>
        <div>
            <h3>2. Selection sort</h3>
            <div>mandatory</div>
        </div>
        <div>
            <div>
                <div>
                    <div><br></div>
                </div>
                <div>Score:&nbsp;0.0%&nbsp;(Checks completed: 0.0%)</div>
            </div>
            <p><iframe width="560" height="315" src="https://www.youtube.com/embed/Ns4TPTC8whw" frameborder="0" allowfullscreen=""></iframe><br><br></p>
            <p>Write a function that sorts an array of integers in ascending order using the&nbsp;<a href="https://intranet.alxswe.com/rltoken/SEbg0fBEraioQcl-igvUSw" title="Selection sort" target="_blank">Selection sort</a> algorithm</p>
            <ul>
                <li>Prototype:&nbsp;<code>void selection_sort(int *array, size_t size);</code></li>
                <li>You&rsquo;re expected to print the&nbsp;<code>array</code> after each time you swap two elements (See example below)</li>
            </ul>
            <p>Write in the file&nbsp;<code>2-O</code>, the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line:</p>
            <ul>
                <li>in the best case</li>
                <li>in the average case</li>
                <li>in the worst case</li>
            </ul>
            <pre><code>alex@/tmp/sort$ cat 2-main.c
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &quot;sort.h&quot;

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf(&quot;\n&quot;);
    selection_sort(array, n);
    printf(&quot;\n&quot;);
    print_array(array, n);
    return (0);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 
2-main.c 2-selection_sort.c print_array.c -o select
alex@/tmp/sort$ ./select
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

7, 48, 99, 71, 13, 52, 96, 73, 86, 19
7, 13, 99, 71, 48, 52, 96, 73, 86, 19
7, 13, 19, 71, 48, 52, 96, 73, 86, 99
7, 13, 19, 48, 71, 52, 96, 73, 86, 99
7, 13, 19, 48, 52, 71, 96, 73, 86, 99
7, 13, 19, 48, 52, 71, 73, 96, 86, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
alex@/tmp/sort$
</code></pre>
        </div>
        <div>
            <div>
                <p><strong>Repo:</strong></p>
                <ul>
                    <li>GitHub repository:&nbsp;<code>sorting_algorithms</code></li>
                    <li>File:&nbsp;<code>2-selection_sort.c, 2-O</code></li>
                </ul>
            </div>
        </div>
        <div>
            <div>
                <div><button>&nbsp;Done?</button> <button>Help</button> <button>Check your code</button> <button>QA Review</button></div>
                <div><br></div>
            </div>
        </div>
    </div>
</div>
<div>
    <div>
        <div>
            <h3>3. Quick sort</h3>
            <div>mandatory</div>
        </div>
        <div>
            <div>
                <div>
                    <div><br></div>
                </div>
                <div>Score:&nbsp;0.0%&nbsp;(Checks completed: 0.0%)</div>
            </div>
            <p><iframe width="560" height="315" src="https://www.youtube.com/embed/ywWBy6J5gz8" frameborder="0" allowfullscreen=""></iframe><br><br></p>
            <p>Write a function that sorts an array of integers in ascending order using the&nbsp;<a href="https://intranet.alxswe.com/rltoken/_pBTrH0Xyo4BRmQn4CtnMg" title="Quick sort" target="_blank">Quick sort</a> algorithm</p>
            <ul>
                <li>Prototype:&nbsp;<code>void quick_sort(int *array, size_t size);</code></li>
                <li>You must implement the&nbsp;<code>Lomuto</code> partition scheme.</li>
                <li>The pivot should always be the last element of the partition being sorted.</li>
                <li>You&rsquo;re expected to print the&nbsp;<code>array</code> after each time you swap two elements (See example below)</li>
            </ul>
            <p>Write in the file&nbsp;<code>3-O</code>, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:</p>
            <ul>
                <li>in the best case</li>
                <li>in the average case</li>
                <li>in the worst case</li>
            </ul>
            <pre><code>alex@/tmp/sort$ cat 3-main.c
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &quot;sort.h&quot;

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf(&quot;\n&quot;);
    quick_sort(array, n);
    printf(&quot;\n&quot;);
    print_array(array, n);
    return (0);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 3-main.c 3-quick_sort.c print_array.c -o quick
alex@/tmp/sort$ ./quick
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

7, 48, 99, 71, 13, 52, 96, 73, 86, 19
7, 13, 99, 71, 48, 52, 96, 73, 86, 19
7, 13, 19, 71, 48, 52, 96, 73, 86, 99
7, 13, 19, 71, 48, 52, 73, 96, 86, 99
7, 13, 19, 71, 48, 52, 73, 86, 96, 99
7, 13, 19, 48, 71, 52, 73, 86, 96, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
alex@/tmp/sort$
</code></pre>
        </div>
        <div>
            <div>
                <p><strong>Repo:</strong></p>
                <ul>
                    <li>GitHub repository:&nbsp;<code>sorting_algorithms</code></li>
                    <li>File:&nbsp;<code>3-quick_sort.c, 3-O</code></li>
                </ul>
            </div>
        </div>
        <div>
            <div>
                <div><button>&nbsp;Done?</button> <button>Help</button> <button>Check your code</button> <button>QA Review</button></div>
                <div><br></div>
            </div>
        </div>
    </div>
</div>
<div>
    <div>
        <div>
            <h3>4. Shell sort - Knuth Sequence</h3>
            <div>#advanced</div>
        </div>
        <div>
            <div>
                <div>
                    <div><br></div>
                </div>
                <div>Score:&nbsp;0.0%&nbsp;(Checks completed: 0.0%)</div>
            </div>
            <p>Write a function that sorts an array of integers in ascending order using the&nbsp;<a href="https://intranet.alxswe.com/rltoken/FdpP4Qin3iDAaz1kuPD2Kg" title="Shell sort" target="_blank">Shell sort</a> algorithm, using the&nbsp;<code>Knuth sequence</code></p>
            <ul>
                <li>Prototype:&nbsp;<code>void shell_sort(int *array, size_t size);</code></li>
                <li>You must use the following sequence of intervals (a.k.a the Knuth sequence):<ul>
                        <li><code>n+1 = n * 3 + 1</code></li>
                        <li><code>1, 4, 13, 40, 121, ...</code></li>
                    </ul>
                </li>
                <li>You&rsquo;re expected to print the&nbsp;<code>array</code> each time you decrease the interval (See example below).</li>
            </ul>
            <p><strong>No big O notations of the time complexity of the Shell sort (Knuth sequence) algorithm needed - as the complexity is dependent on the size of array and gap</strong></p>
            <pre><code>alex@/tmp/sort$ cat 100-main.c
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &quot;sort.h&quot;

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf(&quot;\n&quot;);
    shell_sort(array, n);
    printf(&quot;\n&quot;);
    print_array(array, n);
    return (0);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 100-main.c 100-shell_sort.c print_array.c -o shell
alex@/tmp/sort$ ./shell
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

13, 7, 96, 71, 19, 48, 99, 73, 86, 52
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
alex@/tmp/sort$
</code></pre>
        </div>
        <div>
            <div>
                <p><strong>Repo:</strong></p>
                <ul>
                    <li>GitHub repository:&nbsp;<code>sorting_algorithms</code></li>
                    <li>File:&nbsp;<code>100-shell_sort.c</code></li>
                </ul>
            </div>
        </div>
        <div>
            <div>
                <div><button>&nbsp;Done?</button> <button>Help</button> <button>Check your code</button> <button>QA Review</button></div>
                <div><br></div>
            </div>
        </div>
    </div>
</div>
<div>
    <div>
        <div>
            <h3>5. Cocktail shaker sort</h3>
            <div>#advanced</div>
        </div>
        <div>
            <div>
                <div>
                    <div><br></div>
                </div>
                <div>Score:&nbsp;0.0%&nbsp;(Checks completed: 0.0%)</div>
            </div>
            <p>Write a function that sorts a doubly linked list of integers in ascending order using the&nbsp;<a href="https://intranet.alxswe.com/rltoken/bwa4mHfUbbWTB8J2OIHvpA" title="Cocktail shaker sort" target="_blank">Cocktail shaker sort</a> algorithm</p>
            <ul>
                <li>Prototype:&nbsp;<code>void cocktail_sort_list(listint_t **list);</code></li>
                <li>You are not allowed to modify the integer&nbsp;<code>n</code> of a node. You have to swap the nodes themselves.</li>
                <li>You&rsquo;re expected to print the&nbsp;<code>list</code> after each time you swap two elements (See example below)</li>
            </ul>
            <p>Write in the file&nbsp;<code>101-O</code>, the big O notations of the time complexity of the Cocktail shaker sort algorithm, with 1 notation per line:</p>
            <ul>
                <li>in the best case</li>
                <li>in the average case</li>
                <li>in the worst case</li>
            </ul>
            <pre><code>alex@/tmp/sort$ cat 101-main.c
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &quot;sort.h&quot;

/**
 * create_listint - Creates a doubly linked list from an array of integers
 *
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 *
 * Return: Pointer to the first element of the created list. NULL on failure
 */
listint_t *create_listint(const int *array, size_t size)
{
    listint_t *list;
    listint_t *node;
    int *tmp;

    list = NULL;
    while (size--)
    {
        node = malloc(sizeof(*node));
        if (!node)
            return (NULL);
        tmp = (int *)&amp;node-&gt;n;
        *tmp = array[size];
        node-&gt;next = list;
        node-&gt;prev = NULL;
        list = node;
        if (list-&gt;next)
            list-&gt;next-&gt;prev = list;
    }
    return (list);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    listint_t *list;
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    list = create_listint(array, n);
    if (!list)
        return (1);
    print_list(list);
    printf(&quot;\n&quot;);
    cocktail_sort_list(&amp;list);
    printf(&quot;\n&quot;);
    print_list(list);
    return (0);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 101-main.c 101-cocktail_sort_list.c print_list.c -o cocktail
alex@/tmp/sort$ ./cocktail
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

19, 48, 71, 99, 13, 52, 96, 73, 86, 7
19, 48, 71, 13, 99, 52, 96, 73, 86, 7
19, 48, 71, 13, 52, 99, 96, 73, 86, 7
19, 48, 71, 13, 52, 96, 99, 73, 86, 7
19, 48, 71, 13, 52, 96, 73, 99, 86, 7
19, 48, 71, 13, 52, 96, 73, 86, 99, 7
19, 48, 71, 13, 52, 96, 73, 86, 7, 99
19, 48, 71, 13, 52, 96, 73, 7, 86, 99
19, 48, 71, 13, 52, 96, 7, 73, 86, 99
19, 48, 71, 13, 52, 7, 96, 73, 86, 99
19, 48, 71, 13, 7, 52, 96, 73, 86, 99
19, 48, 71, 7, 13, 52, 96, 73, 86, 99
19, 48, 7, 71, 13, 52, 96, 73, 86, 99
19, 7, 48, 71, 13, 52, 96, 73, 86, 99
7, 19, 48, 71, 13, 52, 96, 73, 86, 99
7, 19, 48, 13, 71, 52, 96, 73, 86, 99
7, 19, 48, 13, 52, 71, 96, 73, 86, 99
7, 19, 48, 13, 52, 71, 73, 96, 86, 99
7, 19, 48, 13, 52, 71, 73, 86, 96, 99
7, 19, 13, 48, 52, 71, 73, 86, 96, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
alex@/tmp/sort$
</code></pre>
        </div>
        <div>
            <div>
                <p><strong>Repo:</strong></p>
                <ul>
                    <li>GitHub repository:&nbsp;<code>sorting_algorithms</code></li>
                    <li>File:&nbsp;<code>101-cocktail_sort_list.c, 101-O</code></li>
                </ul>
            </div>
        </div>
        <div>
            <div>
                <div><button>&nbsp;Done?</button> <button>Help</button> <button>Check your code</button> <button>QA Review</button></div>
                <div><br></div>
            </div>
        </div>
    </div>
</div>
<div>
    <div>
        <div>
            <h3>6. Counting sort</h3>
            <div>#advanced</div>
        </div>
        <div>
            <div>
                <div>
                    <div><br></div>
                </div>
                <div>Score:&nbsp;0.0%&nbsp;(Checks completed: 0.0%)</div>
            </div>
            <p>Write a function that sorts an array of integers in ascending order using the&nbsp;<a href="https://intranet.alxswe.com/rltoken/ChcoDSCqnJHGC-qrSPEGHQ" title="Counting sort" target="_blank">Counting sort</a> algorithm</p>
            <ul>
                <li>Prototype:&nbsp;<code>void counting_sort(int *array, size_t size);</code></li>
                <li>You can assume that&nbsp;<code>array</code> will contain only numbers&nbsp;<code>&gt;= 0</code></li>
                <li>You are allowed to use&nbsp;<code>malloc</code> and&nbsp;<code>free</code> for this task</li>
                <li>You&rsquo;re expected to print your counting array once it is set up (See example below)<ul>
                        <li>This array is of size&nbsp;<code>k + 1</code> where&nbsp;<code>k</code> is the largest number in&nbsp;<code>array</code></li>
                    </ul>
                </li>
            </ul>
            <p>Write in the file&nbsp;<code>102-O</code>, the big O notations of the time complexity of the Counting sort algorithm, with 1 notation per line:</p>
            <ul>
                <li>in the best case</li>
                <li>in the average case</li>
                <li>in the worst case</li>
            </ul>
            <pre><code>alex@/tmp/sort$ cat 102-main.c
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &quot;sort.h&quot;

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf(&quot;\n&quot;);
    counting_sort(array, n);
    printf(&quot;\n&quot;);
    print_array(array, n);
    return (0);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 102-main.c 102-counting_sort.c print_array.c -o counting
alex@/tmp/sort$ ./counting
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 9, 9, 9, 10

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
alex@/tmp/sort$
</code></pre>
        </div>
        <div>
            <div>
                <p><strong>Repo:</strong></p>
                <ul>
                    <li>GitHub repository:&nbsp;<code>sorting_algorithms</code></li>
                    <li>File:&nbsp;<code>102-counting_sort.c, 102-O</code></li>
                </ul>
            </div>
        </div>
        <div>
            <div>
                <div><button>&nbsp;Done?</button> <button>Help</button> <button>Check your code</button> <button>QA Review</button></div>
                <div><br></div>
            </div>
        </div>
    </div>
</div>
<div>
    <div>
        <div>
            <h3>7. Merge sort</h3>
            <div>#advanced</div>
        </div>
        <div>
            <div>
                <div>
                    <div><br></div>
                </div>
                <div>Score:&nbsp;0.0%&nbsp;(Checks completed: 0.0%)</div>
            </div>
            <p>Write a function that sorts an array of integers in ascending order using the&nbsp;<a href="https://intranet.alxswe.com/rltoken/8sZ3nAhd_YLNzHCgNbbf8A" title="Merge sort" target="_blank">Merge sort</a> algorithm</p>
            <ul>
                <li>Prototype:&nbsp;<code>void merge_sort(int *array, size_t size);</code></li>
                <li>You must implement the&nbsp;<code>top-down</code> merge sort algorithm<ul>
                        <li>When you divide an array into two sub-arrays, the size of the left array should always be &lt;= the size of the right array. i.e.&nbsp;<code>{1, 2, 3, 4, 5}</code> -&gt;&nbsp;<code>{1, 2}, {3, 4, 5}</code></li>
                        <li>Sort the left array before the right array</li>
                    </ul>
                </li>
                <li>You are allowed to use&nbsp;<code>printf</code></li>
                <li>You are allowed to use&nbsp;<code>malloc</code> and&nbsp;<code>free</code> only once (only one&nbsp;<strong>call</strong>)</li>
                <li>Output: see example</li>
            </ul>
            <p>Write in the file&nbsp;<code>103-O</code>, the big O notations of the time complexity of the Merge sort algorithm, with 1 notation per line:</p>
            <ul>
                <li>in the best case</li>
                <li>in the average case</li>
                <li>in the worst case</li>
            </ul>
            <pre><code>alex@/tmp/sort$ cat 103-main.c
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &quot;sort.h&quot;

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf(&quot;\n&quot;);
    merge_sort(array, n);
    printf(&quot;\n&quot;);
    print_array(array, n);
    return (0);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 103-main.c 103-merge_sort.c print_array.c -o merge
alex@/tmp/sort$ ./merge
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

Merging...
[left]: 19
[right]: 48
[Done]: 19, 48
Merging...
[left]: 71
[right]: 13
[Done]: 13, 71
Merging...
[left]: 99
[right]: 13, 71
[Done]: 13, 71, 99
Merging...
[left]: 19, 48
[right]: 13, 71, 99
[Done]: 13, 19, 48, 71, 99
Merging...
[left]: 52
[right]: 96
[Done]: 52, 96
Merging...
[left]: 86
[right]: 7
[Done]: 7, 86
Merging...
[left]: 73
[right]: 7, 86
[Done]: 7, 73, 86
Merging...
[left]: 52, 96
[right]: 7, 73, 86
[Done]: 7, 52, 73, 86, 96
Merging...
[left]: 13, 19, 48, 71, 99
[right]: 7, 52, 73, 86, 96
[Done]: 7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
alex@/tmp/sort$
</code></pre>
        </div>
        <div>
            <div>
                <p><strong>Repo:</strong></p>
                <ul>
                    <li>GitHub repository:&nbsp;<code>sorting_algorithms</code></li>
                    <li>File:&nbsp;<code>103-merge_sort.c, 103-O</code></li>
                </ul>
            </div>
        </div>
        <div>
            <div>
                <div><button>&nbsp;Done?</button> <button>Help</button> <button>Check your code</button> <button>QA Review</button></div>
                <div><br></div>
            </div>
        </div>
    </div>
</div>
<div>
    <div>
        <div>
            <h3>8. Heap sort</h3>
            <div>#advanced</div>
        </div>
        <div>
            <div>
                <div>
                    <div><br></div>
                </div>
                <div>Score:&nbsp;0.0%&nbsp;(Checks completed: 0.0%)</div>
            </div>
            <p>Write a function that sorts an array of integers in ascending order using the&nbsp;<a href="https://intranet.alxswe.com/rltoken/YKYRdSdomaVkNrtNv1KS6Q" title="Heap sort" target="_blank">Heap sort</a> algorithm</p>
            <ul>
                <li>Prototype:&nbsp;<code>void heap_sort(int *array, size_t size);</code></li>
                <li>You must implement the&nbsp;<code>sift-down</code> heap sort algorithm</li>
                <li>You&rsquo;re expected to print the&nbsp;<code>array</code> after each time you swap two elements (See example below)</li>
            </ul>
            <p>Write in the file&nbsp;<code>104-O</code>, the big O notations of the time complexity of the Heap sort algorithm, with 1 notation per line:</p>
            <ul>
                <li>in the best case</li>
                <li>in the average case</li>
                <li>in the worst case</li>
            </ul>
            <pre><code>alex@/tmp/sort$ cat 104-main.c
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &quot;sort.h&quot;

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf(&quot;\n&quot;);
    heap_sort(array, n);
    printf(&quot;\n&quot;);
    print_array(array, n);
    return (0);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 104-main.c 104-heap_sort.c print_array.c -o heap
alex@/tmp/sort$ ./heap
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

19, 48, 99, 86, 13, 52, 96, 73, 71, 7
19, 86, 99, 48, 13, 52, 96, 73, 71, 7
19, 86, 99, 73, 13, 52, 96, 48, 71, 7
99, 86, 19, 73, 13, 52, 96, 48, 71, 7
99, 86, 96, 73, 13, 52, 19, 48, 71, 7
7, 86, 96, 73, 13, 52, 19, 48, 71, 99
96, 86, 7, 73, 13, 52, 19, 48, 71, 99
96, 86, 52, 73, 13, 7, 19, 48, 71, 99
71, 86, 52, 73, 13, 7, 19, 48, 96, 99
86, 71, 52, 73, 13, 7, 19, 48, 96, 99
86, 73, 52, 71, 13, 7, 19, 48, 96, 99
48, 73, 52, 71, 13, 7, 19, 86, 96, 99
73, 48, 52, 71, 13, 7, 19, 86, 96, 99
73, 71, 52, 48, 13, 7, 19, 86, 96, 99
19, 71, 52, 48, 13, 7, 73, 86, 96, 99
71, 19, 52, 48, 13, 7, 73, 86, 96, 99
71, 48, 52, 19, 13, 7, 73, 86, 96, 99
7, 48, 52, 19, 13, 71, 73, 86, 96, 99
52, 48, 7, 19, 13, 71, 73, 86, 96, 99
13, 48, 7, 19, 52, 71, 73, 86, 96, 99
48, 13, 7, 19, 52, 71, 73, 86, 96, 99
48, 19, 7, 13, 52, 71, 73, 86, 96, 99
13, 19, 7, 48, 52, 71, 73, 86, 96, 99
19, 13, 7, 48, 52, 71, 73, 86, 96, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99
13, 7, 19, 48, 52, 71, 73, 86, 96, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
alex@/tmp/sort$
</code></pre>
        </div>
        <div>
            <div>
                <p><strong>Repo:</strong></p>
                <ul>
                    <li>GitHub repository:&nbsp;<code>sorting_algorithms</code></li>
                    <li>File:&nbsp;<code>104-heap_sort.c, 104-O</code></li>
                </ul>
            </div>
        </div>
        <div>
            <div>
                <div><button>&nbsp;Done?</button> <button>Help</button> <button>Check your code</button> <button>QA Review</button></div>
                <div><br></div>
            </div>
        </div>
    </div>
</div>
<div>
    <div>
        <div>
            <h3>9. Radix sort</h3>
            <div>#advanced</div>
        </div>
        <div>
            <div>
                <div>
                    <div><br></div>
                </div>
                <div>Score:&nbsp;0.0%&nbsp;(Checks completed: 0.0%)</div>
            </div>
            <p>Write a function that sorts an array of integers in ascending order using the&nbsp;<a href="https://intranet.alxswe.com/rltoken/pBsj4j_AF_mJAgNZWmX3VQ" title="Radix sort" target="_blank">Radix sort</a> algorithm</p>
            <ul>
                <li>Prototype:&nbsp;<code>void radix_sort(int *array, size_t size);</code></li>
                <li>You must implement the&nbsp;<code>LSD</code> radix sort algorithm</li>
                <li>You can assume that&nbsp;<code>array</code> will contain only numbers&nbsp;<code>&gt;= 0</code></li>
                <li>You are allowed to use&nbsp;<code>malloc</code> and&nbsp;<code>free</code> for this task</li>
                <li>You&rsquo;re expected to print the&nbsp;<code>array</code> each time you increase your&nbsp;<code>significant digit</code> (See example below)</li>
            </ul>
            <pre><code>alex@/tmp/sort$ cat 105-main.c
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &quot;sort.h&quot;

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf(&quot;\n&quot;);
    radix_sort(array, n);
    printf(&quot;\n&quot;);
    print_array(array, n);
    return (0);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 105-main.c 105-radix_sort.c print_array.c -o radix
alex@/tmp/sort$ ./radix
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

71, 52, 13, 73, 96, 86, 7, 48, 19, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
alex@/tmp/sort$
</code></pre>
        </div>
        <div>
            <div>
                <p><strong>Repo:</strong></p>
                <ul>
                    <li>GitHub repository:&nbsp;<code>sorting_algorithms</code></li>
                    <li>File:&nbsp;<code>105-radix_sort.c</code></li>
                </ul>
            </div>
        </div>
        <div>
            <div>
                <div><button>&nbsp;Done?</button> <button>Help</button> <button>Check your code</button> <button>QA Review</button></div>
                <div><br></div>
            </div>
        </div>
    </div>
</div>
<div>
    <div>
        <div>
            <h3>10. Bitonic sort</h3>
            <div>#advanced</div>
        </div>
        <div>
            <div>
                <div>
                    <div><br></div>
                </div>
                <div>Score:&nbsp;0.0%&nbsp;(Checks completed: 0.0%)</div>
            </div>
            <p>Write a function that sorts an array of integers in ascending order using the&nbsp;<a href="https://intranet.alxswe.com/rltoken/N-bjAbxm5yr4DoeIDz5lLw" title="Bitonic sort" target="_blank">Bitonic sort</a> algorithm</p>
            <ul>
                <li>Prototype:&nbsp;<code>void bitonic_sort(int *array, size_t size);</code></li>
                <li>You can assume that&nbsp;<code>size</code> will be equal to&nbsp;<code>2^k</code>, where&nbsp;<code>k &gt;= 0</code> (when&nbsp;<code>array</code> is not&nbsp;<code>NULL</code> &hellip;)</li>
                <li>You are allowed to use&nbsp;<code>printf</code></li>
                <li>You&rsquo;re expected to print the&nbsp;<code>array</code> each time you swap two elements (See example below)</li>
                <li>Output: see example</li>
            </ul>
            <p>Write in the file&nbsp;<code>106-O</code>, the big O notations of the time complexity of the Bitonic sort algorithm, with 1 notation per line:</p>
            <ul>
                <li>in the best case</li>
                <li>in the average case</li>
                <li>in the worst case</li>
            </ul>
            <pre><code>alex@/tmp/sort$ cat 106-main.c
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &quot;sort.h&quot;

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {100, 93, 40, 57, 14, 58, 85, 54, 31, 56, 46, 39, 15, 26, 78, 13};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf(&quot;\n&quot;);
    bitonic_sort(array, n);
    printf(&quot;\n&quot;);
    print_array(array, n);
    return (0);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 106-main.c 106-bitonic_sort.c print_array.c -o bitonic
alex@/tmp/sort$ ./bitonic
100, 93, 40, 57, 14, 58, 85, 54, 31, 56, 46, 39, 15, 26, 78, 13

Merging [16/16] (UP):
100, 93, 40, 57, 14, 58, 85, 54, 31, 56, 46, 39, 15, 26, 78, 13
Merging [8/16] (UP):
100, 93, 40, 57, 14, 58, 85, 54
Merging [4/16] (UP):
100, 93, 40, 57
Merging [2/16] (UP):
100, 93
Result [2/16] (UP):
93, 100
Merging [2/16] (DOWN):
40, 57
Result [2/16] (DOWN):
57, 40
Result [4/16] (UP):
40, 57, 93, 100
Merging [4/16] (DOWN):
14, 58, 85, 54
Merging [2/16] (UP):
14, 58
Result [2/16] (UP):
14, 58
Merging [2/16] (DOWN):
85, 54
Result [2/16] (DOWN):
85, 54
Result [4/16] (DOWN):
85, 58, 54, 14
Result [8/16] (UP):
14, 40, 54, 57, 58, 85, 93, 100
Merging [8/16] (DOWN):
31, 56, 46, 39, 15, 26, 78, 13
Merging [4/16] (UP):
31, 56, 46, 39
Merging [2/16] (UP):
31, 56
Result [2/16] (UP):
31, 56
Merging [2/16] (DOWN):
46, 39
Result [2/16] (DOWN):
46, 39
Result [4/16] (UP):
31, 39, 46, 56
Merging [4/16] (DOWN):
15, 26, 78, 13
Merging [2/16] (UP):
15, 26
Result [2/16] (UP):
15, 26
Merging [2/16] (DOWN):
78, 13
Result [2/16] (DOWN):
78, 13
Result [4/16] (DOWN):
78, 26, 15, 13
Result [8/16] (DOWN):
78, 56, 46, 39, 31, 26, 15, 13
Result [16/16] (UP):
13, 14, 15, 26, 31, 39, 40, 46, 54, 56, 57, 58, 78, 85, 93, 100

13, 14, 15, 26, 31, 39, 40, 46, 54, 56, 57, 58, 78, 85, 93, 100
alex@/tmp/sort$
</code></pre>
        </div>
        <div>
            <div>
                <p><strong>Repo:</strong></p>
                <ul>
                    <li>GitHub repository:&nbsp;<code>sorting_algorithms</code></li>
                    <li>File:&nbsp;<code>106-bitonic_sort.c, 106-O</code></li>
                </ul>
            </div>
        </div>
        <div>
            <div>
                <div><button>&nbsp;Done?</button> <button>Help</button> <button>Check your code</button> <button>QA Review</button></div>
                <div><br></div>
            </div>
        </div>
    </div>
</div>
<div>
    <div>
        <div>
            <h3>11. Quick Sort - Hoare Partition scheme</h3>
            <div>#advanced</div>
        </div>
        <div>
            <div>
                <div>
                    <div><br></div>
                </div>
                <div>Score:&nbsp;0.0%&nbsp;(Checks completed: 0.0%)</div>
            </div>
            <p>Write a function that sorts an array of integers in ascending order using the&nbsp;<a href="https://intranet.alxswe.com/rltoken/_pBTrH0Xyo4BRmQn4CtnMg" title="Quick sort" target="_blank">Quick sort</a> algorithm</p>
            <ul>
                <li>Prototype:&nbsp;<code>void quick_sort_hoare(int *array, size_t size);</code></li>
                <li>You must implement the&nbsp;<code>Hoare</code> partition scheme.</li>
                <li>The pivot should always be the last element of the partition being sorted.</li>
                <li>You&rsquo;re expected to print the&nbsp;<code>array</code> after each time you swap two elements (See example below)</li>
            </ul>
            <p>Write in the file&nbsp;<code>107-O</code>, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:</p>
            <ul>
                <li>in the best case</li>
                <li>in the average case</li>
                <li>in the worst case</li>
            </ul>
            <pre><code>alex@/tmp/sort$ cat 107-main.c
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &quot;sort.h&quot;

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf(&quot;\n&quot;);
    quick_sort_hoare(array, n);
    printf(&quot;\n&quot;);
    print_array(array, n);
    return (0);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 107-main.c 107-quick_sort_hoare.c print_array.c -o quick
alex@/tmp/sort$ ./quick
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

7, 48, 99, 71, 13, 52, 96, 73, 86, 19
7, 19, 99, 71, 13, 52, 96, 73, 86, 48
7, 19, 13, 71, 99, 52, 96, 73, 86, 48
7, 13, 19, 71, 99, 52, 96, 73, 86, 48
7, 13, 19, 48, 99, 52, 96, 73, 86, 71
7, 13, 19, 48, 71, 52, 96, 73, 86, 99
7, 13, 19, 48, 52, 71, 96, 73, 86, 99
7, 13, 19, 48, 52, 71, 86, 73, 96, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
alex@/tmp/sort$
</code></pre>
            <p>Another example of output:</p>
            <pre><code>alex@/tmp/sort$ ./quick_2
87, 65, 28, 63, 93, 52, 39, 59, 27, 30, 24, 83, 69, 62, 13, 6, 88, 58, 92, 26, 42, 11, 16, 21, 75, 36, 71, 8, 45, 38

38, 65, 28, 63, 93, 52, 39, 59, 27, 30, 24, 83, 69, 62, 13, 6, 88, 58, 92, 26, 42, 11, 16, 21, 75, 36, 71, 8, 45, 87
38, 8, 28, 63, 93, 52, 39, 59, 27, 30, 24, 83, 69, 62, 13, 6, 88, 58, 92, 26, 42, 11, 16, 21, 75, 36, 71, 65, 45, 87
38, 8, 28, 36, 93, 52, 39, 59, 27, 30, 24, 83, 69, 62, 13, 6, 88, 58, 92, 26, 42, 11, 16, 21, 75, 63, 71, 65, 45, 87
38, 8, 28, 36, 21, 52, 39, 59, 27, 30, 24, 83, 69, 62, 13, 6, 88, 58, 92, 26, 42, 11, 16, 93, 75, 63, 71, 65, 45, 87
38, 8, 28, 36, 21, 16, 39, 59, 27, 30, 24, 83, 69, 62, 13, 6, 88, 58, 92, 26, 42, 11, 52, 93, 75, 63, 71, 65, 45, 87
38, 8, 28, 36, 21, 16, 11, 59, 27, 30, 24, 83, 69, 62, 13, 6, 88, 58, 92, 26, 42, 39, 52, 93, 75, 63, 71, 65, 45, 87
38, 8, 28, 36, 21, 16, 11, 26, 27, 30, 24, 83, 69, 62, 13, 6, 88, 58, 92, 59, 42, 39, 52, 93, 75, 63, 71, 65, 45, 87
38, 8, 28, 36, 21, 16, 11, 26, 27, 30, 24, 6, 69, 62, 13, 83, 88, 58, 92, 59, 42, 39, 52, 93, 75, 63, 71, 65, 45, 87
38, 8, 28, 36, 21, 16, 11, 26, 27, 30, 24, 6, 13, 62, 69, 83, 88, 58, 92, 59, 42, 39, 52, 93, 75, 63, 71, 65, 45, 87
13, 8, 28, 36, 21, 16, 11, 26, 27, 30, 24, 6, 38, 62, 69, 83, 88, 58, 92, 59, 42, 39, 52, 93, 75, 63, 71, 65, 45, 87
13, 8, 6, 36, 21, 16, 11, 26, 27, 30, 24, 28, 38, 62, 69, 83, 88, 58, 92, 59, 42, 39, 52, 93, 75, 63, 71, 65, 45, 87
13, 8, 6, 11, 21, 16, 36, 26, 27, 30, 24, 28, 38, 62, 69, 83, 88, 58, 92, 59, 42, 39, 52, 93, 75, 63, 71, 65, 45, 87
11, 8, 6, 13, 21, 16, 36, 26, 27, 30, 24, 28, 38, 62, 69, 83, 88, 58, 92, 59, 42, 39, 52, 93, 75, 63, 71, 65, 45, 87
6, 8, 11, 13, 21, 16, 36, 26, 27, 30, 24, 28, 38, 62, 69, 83, 88, 58, 92, 59, 42, 39, 52, 93, 75, 63, 71, 65, 45, 87
6, 8, 11, 13, 21, 16, 28, 26, 27, 30, 24, 36, 38, 62, 69, 83, 88, 58, 92, 59, 42, 39, 52, 93, 75, 63, 71, 65, 45, 87
6, 8, 11, 13, 21, 16, 28, 26, 27, 24, 30, 36, 38, 62, 69, 83, 88, 58, 92, 59, 42, 39, 52, 93, 75, 63, 71, 65, 45, 87
6, 8, 11, 13, 21, 16, 24, 26, 27, 28, 30, 36, 38, 62, 69, 83, 88, 58, 92, 59, 42, 39, 52, 93, 75, 63, 71, 65, 45, 87
6, 8, 11, 13, 16, 21, 24, 26, 27, 28, 30, 36, 38, 62, 69, 83, 88, 58, 92, 59, 42, 39, 52, 93, 75, 63, 71, 65, 45, 87
6, 8, 11, 13, 16, 21, 24, 26, 27, 28, 30, 36, 38, 62, 69, 83, 87, 58, 92, 59, 42, 39, 52, 93, 75, 63, 71, 65, 45, 88
6, 8, 11, 13, 16, 21, 24, 26, 27, 28, 30, 36, 38, 62, 69, 83, 87, 58, 45, 59, 42, 39, 52, 93, 75, 63, 71, 65, 92, 88
6, 8, 11, 13, 16, 21, 24, 26, 27, 28, 30, 36, 38, 62, 69, 83, 87, 58, 45, 59, 42, 39, 52, 65, 75, 63, 71, 93, 92, 88
6, 8, 11, 13, 16, 21, 24, 26, 27, 28, 30, 36, 38, 62, 69, 71, 87, 58, 45, 59, 42, 39, 52, 65, 75, 63, 83, 93, 92, 88
6, 8, 11, 13, 16, 21, 24, 26, 27, 28, 30, 36, 38, 62, 69, 71, 63, 58, 45, 59, 42, 39, 52, 65, 75, 87, 83, 93, 92, 88
6, 8, 11, 13, 16, 21, 24, 26, 27, 28, 30, 36, 38, 62, 65, 71, 63, 58, 45, 59, 42, 39, 52, 69, 75, 87, 83, 93, 92, 88
6, 8, 11, 13, 16, 21, 24, 26, 27, 28, 30, 36, 38, 62, 65, 52, 63, 58, 45, 59, 42, 39, 71, 69, 75, 87, 83, 93, 92, 88
6, 8, 11, 13, 16, 21, 24, 26, 27, 28, 30, 36, 38, 39, 65, 52, 63, 58, 45, 59, 42, 62, 71, 69, 75, 87, 83, 93, 92, 88
6, 8, 11, 13, 16, 21, 24, 26, 27, 28, 30, 36, 38, 39, 62, 52, 63, 58, 45, 59, 42, 65, 71, 69, 75, 87, 83, 93, 92, 88
6, 8, 11, 13, 16, 21, 24, 26, 27, 28, 30, 36, 38, 39, 62, 52, 42, 58, 45, 59, 63, 65, 71, 69, 75, 87, 83, 93, 92, 88
6, 8, 11, 13, 16, 21, 24, 26, 27, 28, 30, 36, 38, 39, 59, 52, 42, 58, 45, 62, 63, 65, 71, 69, 75, 87, 83, 93, 92, 88
6, 8, 11, 13, 16, 21, 24, 26, 27, 28, 30, 36, 38, 39, 45, 52, 42, 58, 59, 62, 63, 65, 71, 69, 75, 87, 83, 93, 92, 88
6, 8, 11, 13, 16, 21, 24, 26, 27, 28, 30, 36, 38, 39, 45, 42, 52, 58, 59, 62, 63, 65, 71, 69, 75, 87, 83, 93, 92, 88
6, 8, 11, 13, 16, 21, 24, 26, 27, 28, 30, 36, 38, 39, 42, 45, 52, 58, 59, 62, 63, 65, 71, 69, 75, 87, 83, 93, 92, 88
6, 8, 11, 13, 16, 21, 24, 26, 27, 28, 30, 36, 38, 39, 42, 45, 52, 58, 59, 62, 63, 65, 69, 71, 75, 87, 83, 93, 92, 88
6, 8, 11, 13, 16, 21, 24, 26, 27, 28, 30, 36, 38, 39, 42, 45, 52, 58, 59, 62, 63, 65, 69, 71, 75, 83, 87, 93, 92, 88
6, 8, 11, 13, 16, 21, 24, 26, 27, 28, 30, 36, 38, 39, 42, 45, 52, 58, 59, 62, 63, 65, 69, 71, 75, 83, 87, 88, 92, 93

6, 8, 11, 13, 16, 21, 24, 26, 27, 28, 30, 36, 38, 39, 42, 45, 52, 58, 59, 62, 63, 65, 69, 71, 75, 83, 87, 88, 92, 93
alex@/tmp/sort$ 
</code></pre>
        </div>
        <div>
            <div>
                <p><strong>Repo:</strong></p>
                <ul>
                    <li>GitHub repository:&nbsp;<code>sorting_algorithms</code></li>
                    <li>File:&nbsp;<code>107-quick_sort_hoare.c, 107-O</code></li>
                </ul>
            </div>
        </div>
        <div>
            <div>
                <div><button>&nbsp;Done?</button> <button>Help</button> <button>Check your code</button> <button>QA Review</button></div>
                <div><br></div>
            </div>
        </div>
    </div>
</div>
<div>
    <div>
        <div>
            <h3>12. Dealer</h3>
            <div>#advanced</div>
        </div>
        <div>
            <div>
                <div>
                    <div><br></div>
                </div>
                <div>Score:&nbsp;0.0%&nbsp;(Checks completed: 0.0%)</div>
            </div>
            <p><iframe width="560" height="315" src="https://www.youtube.com/embed/_HJlGWXzlLA" frameborder="0" allowfullscreen=""></iframe><br><br></p>
            <p>Write a function that sorts a deck of cards.</p>
            <ul>
                <li>Prototype:&nbsp;<code>void sort_deck(deck_node_t **deck);</code></li>
                <li>You are allowed to use the C standard library function&nbsp;<code>qsort</code></li>
                <li>Please use the following data structures:</li>
            </ul>
            <pre><code>typedef enum kind_e
{
    SPADE = 0,
    HEART,
    CLUB,
    DIAMOND
} kind_t;

/**
 * struct card_s - Playing card
 *
 * @value: Value of the card
 * From &quot;Ace&quot; to &quot;King&quot;
 * @kind: Kind of the card
 */
typedef struct card_s
{
    const char *value;
    const kind_t kind;
} card_t;

/**
 * struct deck_node_s - Deck of card
 *
 * @card: Pointer to the card of the node
 * @prev: Pointer to the previous node of the list
 * @next: Pointer to the next node of the list
 */
typedef struct deck_node_s
{
    const card_t *card;
    struct deck_node_s *prev;
    struct deck_node_s *next;
} deck_node_t;
</code></pre>
            <ul>
                <li>You have to push you&nbsp;<code>deck.h</code> header file, containing the previous data structures definition</li>
                <li>Each node of the doubly linked list contains a card that you cannot modify. You have to swap the nodes.</li>
                <li>You can assume there is exactly&nbsp;<code>52</code> elements in the doubly linked list.</li>
                <li>You are free to use the sorting algorithm of your choice</li>
                <li>The deck must be ordered:<ul>
                        <li>From&nbsp;<code>Ace</code> to&nbsp;<code>King</code></li>
                        <li>From Spades to Diamonds</li>
                        <li>See example below</li>
                    </ul>
                </li>
            </ul>
            <pre><code>alex@/tmp/sort$ cat 1000-main.c
#include &lt;stdlib.h&gt;
#include &lt;stdio.h&gt;
#include &quot;deck.h&quot;

void print_deck(const deck_node_t *deck)
{
    size_t i;
    char kinds[4] = {&apos;S&apos;, &apos;H&apos;, &apos;C&apos;, &apos;D&apos;};

    i = 0;
    while (deck)
    {
        if (i)
            printf(&quot;, &quot;);
        printf(&quot;{%s, %c}&quot;, deck-&gt;card-&gt;value, kinds[deck-&gt;card-&gt;kind]);
        if (i == 12)
            printf(&quot;\n&quot;);
        i = (i + 1) % 13;
        deck = deck-&gt;next;
    }
}

deck_node_t *init_deck(const card_t cards[52])
{
    deck_node_t *deck;
    deck_node_t *node;
    size_t i;

    i = 52;
    deck = NULL;
    while (i--)
    {
        node = malloc(sizeof(*node));
        if (!node)
            return (NULL);
        node-&gt;card = &amp;cards[i];
        node-&gt;next = deck;
        node-&gt;prev = NULL;
        if (deck)
            deck-&gt;prev = node;
        deck = node;
    }
    return (deck);
}

int main(void)
{
    card_t cards[52] = {
        {&quot;Jack&quot;, CLUB}, {&quot;4&quot;, HEART}, {&quot;3&quot;, HEART}, {&quot;3&quot;, DIAMOND}, {&quot;Queen&quot;, HEART}, {&quot;5&quot;, HEART}, {&quot;5&quot;, SPADE}, {&quot;10&quot;, HEART}, {&quot;6&quot;, HEART}, {&quot;5&quot;, DIAMOND}, {&quot;6&quot;, SPADE}, {&quot;9&quot;, HEART}, {&quot;7&quot;, DIAMOND}, {&quot;Jack&quot;, SPADE}, {&quot;Ace&quot;, DIAMOND}, {&quot;9&quot;, CLUB}, {&quot;Jack&quot;, DIAMOND}, {&quot;7&quot;, SPADE}, {&quot;King&quot;, DIAMOND}, {&quot;10&quot;, CLUB}, {&quot;King&quot;, SPADE}, {&quot;8&quot;, CLUB}, {&quot;9&quot;, SPADE}, {&quot;6&quot;, CLUB}, {&quot;Ace&quot;, CLUB}, {&quot;3&quot;, SPADE}, {&quot;8&quot;, SPADE}, {&quot;9&quot;, DIAMOND}, {&quot;2&quot;, HEART}, {&quot;4&quot;, DIAMOND}, {&quot;6&quot;, DIAMOND}, {&quot;3&quot;, CLUB}, {&quot;Queen&quot;, CLUB}, {&quot;10&quot;, SPADE}, {&quot;8&quot;, DIAMOND}, {&quot;8&quot;, HEART}, {&quot;Ace&quot;, SPADE}, {&quot;Jack&quot;, HEART}, {&quot;2&quot;, CLUB}, {&quot;4&quot;, SPADE}, {&quot;2&quot;, SPADE}, {&quot;2&quot;, DIAMOND}, {&quot;King&quot;, CLUB}, {&quot;Queen&quot;, SPADE}, {&quot;Queen&quot;, DIAMOND}, {&quot;7&quot;, CLUB}, {&quot;7&quot;, HEART}, {&quot;5&quot;, CLUB}, {&quot;10&quot;, DIAMOND}, {&quot;4&quot;, CLUB}, {&quot;King&quot;, HEART}, {&quot;Ace&quot;, HEART},
    };
    deck_node_t *deck;

    deck = init_deck(cards);
    print_deck(deck);
    printf(&quot;\n&quot;);
    sort_deck(&amp;deck);
    printf(&quot;\n&quot;);
    print_deck(deck);
    return (0);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 1000-main.c 1000-sort_deck.c -o deck
alex@/tmp/sort$ ./deck
{Jack, C}, {4, H}, {3, H}, {3, D}, {Queen, H}, {5, H}, {5, S}, {10, H}, {6, H}, {5, D}, {6, S}, {9, H}, {7, D}
{Jack, S}, {Ace, D}, {9, C}, {Jack, D}, {7, S}, {King, D}, {10, C}, {King, S}, {8, C}, {9, S}, {6, C}, {Ace, C}, {3, S}
{8, S}, {9, D}, {2, H}, {4, D}, {6, D}, {3, C}, {Queen, C}, {10, S}, {8, D}, {8, H}, {Ace, S}, {Jack, H}, {2, C}
{4, S}, {2, S}, {2, D}, {King, C}, {Queen, S}, {Queen, D}, {7, C}, {7, H}, {5, C}, {10, D}, {4, C}, {King, H}, {Ace, H}


{Ace, S}, {2, S}, {3, S}, {4, S}, {5, S}, {6, S}, {7, S}, {8, S}, {9, S}, {10, S}, {Jack, S}, {Queen, S}, {King, S}
{Ace, H}, {2, H}, {3, H}, {4, H}, {5, H}, {6, H}, {7, H}, {8, H}, {9, H}, {10, H}, {Jack, H}, {Queen, H}, {King, H}
{Ace, C}, {2, C}, {3, C}, {4, C}, {5, C}, {6, C}, {7, C}, {8, C}, {9, C}, {10, C}, {Jack, C}, {Queen, C}, {King, C}
{Ace, D}, {2, D}, {3, D}, {4, D}, {5, D}, {6, D}, {7, D}, {8, D}, {9, D}, {10, D}, {Jack, D}, {Queen, D}, {King, D}
alex@/tmp/sort$
</code></pre>
        </div>
        <div>
            <div>
                <p><strong>Repo:</strong></p>
                <ul>
                    <li>GitHub repository:&nbsp;<code>sorting_algorithms</code></li>
                    <li>File:&nbsp;<code>1000-sort_deck.c, deck.h</code></li>
                </ul>
            </div>
        </div>
        <div>
            <div>
                <div><button>&nbsp;Done?</button> <button>Help</button> <button>Check your code</button>&nbsp;</div>
            </div>
        </div>
    </div>
</div>