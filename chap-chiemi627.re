= なぜ大学の授業でアジャイル開発をするのか

//flushright{
 chiemi(@chiemi_wtnb)
//}

== はじめに
アジャイル開発の話をする際、一般的にはウォーターフォールモデルと比較して話をすることが多いです。しかし、大学では、学生たち（教員たちも）はその時点で組織的な開発経験を経ていないことが多く、知識はもっていても実際の経験と結びつかないためあまりピンと来ません。

大学で授業として組織的にサービスを提供したりアプリを開発するなどの活動の多くは、いわゆる「Project Based Learning（プロジェクト型学習）」にて行われます。私は2013年からPBLの担当教員として長らく関わっており、担当した頃に遭遇した失敗・悩み・現状と、アジャイル開発を知って取り入れてきたという経験があります。その経験と知見をもとに、独断と偏見で、大学のPBLでアジャイル開発、特にスクラムフレームワークやXPなどを導入する意味と利点についてお話ししようと思います。

なお本稿で述べるPBLの現状などは私自身が複数の大学で経験したことなどに基づいています。日本あるいは世界全体の状況における統計的な調査に基づくものではありません。ご了承ください。

== Project Based Learning(PBL)
プロジェクト学習とは、講義や演習による授業とは対極的でプロジェクトから自分で学び取っていく方法です。哲学者 John Deweyが提唱した経験学習（学習者が主体的に経験を通して学ぶ）考え方をもとに、William Heard Kilpatrickがプロジェクトメソッドとして、学習者が計画し現実の世界で達成される目的を持った活動を授業に取り入れたのが始まりとされています。現在PBLはアクティブラーニングのアプローチの一つとして、小学校から高校まで「総合的な学習の時間」として導入されており、大学においてもほぼすべての大学においてPBLが科目の一つとして取り入れられています。はこだて未来大学では全学生への必修科目としてPBLが実施されています。

私は2013年から文部科学省補助金事業である「情報技術人材育成のための実践教育ネットワーク形成事業」（2012年〜2016年）、続いて「成長分野を支える情報技術人材の育成拠点の形成」（2017年〜2021年）の筑波大学拠点で専任教員としてPBLに携わってきました。以下のプロジェクトの名称をenPiTと略します。このプロジェクトは200を超える大学でPBLを実施しており、情報系学部でのPBLはこのenPiTを通じて多くの大学に浸透したといえるかもしれません。

== （私の知る限りでの）大学でのPBLのすすめかた
これは経験に基づく私見ですが、大学の、特に情報系学部のPBLに該当する科目はいわゆる「ミニ卒研」という位置付けになっていることが多いです。大学では一般的に４年生（大学や学部によっては１〜３年生）から研究室もしくはゼミに配属し、指導教員と共に共同研究をすることが多いのですが、ミニ卒研というのはその予行演習的な位置付けで、教員や学生の間で使われることが多い通称です。一般には指導教員の指導のもと、半年から一年のプロジェクトを実施します。（授業にもよりますがその多くは）新規性や独自性は厳しく問われることはなく、学生（あるいは指導教員の）興味の赴くままに探究活動や制作活動（いわゆる「やってみた」「作ってみた」系をイメージすると良いでしょう）を行い、指導教員が専門的なアドバイスや、活動の伴走をします。

基本的にミニ卒研は学生1人で行うことが基本だと思いますが、チームを結成して半年間・または一年間のプロジェクトを行う科目もあります。ただし、基本的な進め方（特に教員と学生との関係）は前述したミニ卒研と変わらないと思います。特に理工学系のPBLにおいて、チームビルディング、チームでの開発プロセスに関しては指導教員にとっては専門外であることが多く、学生チームに任されているのが現状かと思います。

==  （主に情報系学部の）PBLでよく見かけること
というわけで私がこれまで関係していたりよく見聞きしていたPBLの活動でよくみられた困りごとはこんな感じです。

 * プロジェクトにおける教員と学生の役割が曖昧: 学生（学生チーム）と指導教員が共にプロジェクトを進めていくことになるのですが、その役割がプロジェクトによっても異なりますし、状況によっても変わります。またその役割に関して意識しないことが多く、それがトラブルの元となることがあります。プロジェクトのテーマは学生が提案することもありますが、目的が漠然としている場合などは教員が提案することもあります。その場合、教員がプロダクトオーナーとなり、本人の興味によっては開発に関わり、さらにプロセスの管理をしたりと、良かれと思って全てを兼任してしまう場合があります。大抵の場合、プロジェクトを進行していく上で教員と学生（学生チーム）の役割についての検討がない場合が多いです。
    
 * プロジェクトにおける学生チームの役割が曖昧: 学生チームの中での役割や共同作業についての指針をPBLにおいて特に受けていないため、試行錯誤の状態となります。よくあるケースとしては、一部の学生のみで開発を進めてしまい、ついていけなくなるメンバーが出たり、役割分担の結果属人化が進みタスクを柔軟に振り分けることができないという問題が発生することがあります。
   
 * 作ること自体が目的になることがある: これはPBLにおいては一概に悪いこととは言えませんが、プロダクトを作る、何かしら完成させることが目的となるケースがあります。PBLにおいて学生の興味を深掘りする、技術的な興味を満たすという観点においてはあながち問題とは言い切れません。しかし、開発したものに対して実際に動かして検証し、開発したプロダクトの動作確認や利用者による検証など、検証を何もできないまま、開発した満足感だけでプロダクトを終えるのはとても勿体無いといえます。

 * 問題とその解決が曖昧なまま終わる:私自身は「作ってみた」「やってみた」が目的で知的好奇心をエンジンに進めるPBLはとても素敵だと思います。ただ、PBLをProblem Based Learning（問題解決型学習）と混同し、何かの誰かの問題を必ず解決しなければならないと曖昧な問題や曖昧な解決方法を設定する場合があります。実際のプロジェクトでは開発に集中したままプロジェクト期間が終わり、問題の解決に関する検証が行われず、問題や解決法に関する深掘りがなされないまま、となるプロジェクトも少なくありません。そのような中途半端な状態で終わるのであれば、いっそのこと作ることをプロジェクトの目的にし、期間中ツールを使い倒して、それによって得られた開発の知見や経験則を成果物にすれば良いのに、と思うこともあります。
 * 学生症候群: この名前はあまり好ましい使いたくありませんね。学生だけではなく社会人も含め多くの人たちが締め切り駆動で集中力が上がる性質を持っていると思います。ただ、プロジェクトの進行における中途の検査とフィードバックが体系化されず、プロジェクト管理に関する知識や経験もないまま、自己管理において進めた上で着実にプロジェクトを進行させるのは相当な難易度です。その中で試行錯誤で進める学生チームの努力には本当に頭が上がりません。
 * プロダクトとチームに対する経験学習プロセスに対する知識や経験が不十分: 一般にPBLと呼ばれるプロジェクト活動では、指導教員がオーガナイズしていたり、学生チームが自発的に定期的な進捗共有をすることが多いです。進捗共有における指針（定期的に何を検査して、ゴールに対してどう調整していくのか）は自らの試行錯誤によります。ですので、基本的にはやったことの報告と、それに対して互いに思ったことの共有となり、最終的な締め切りが見えたところで本格的な調整とスピードアップが図られることも少なくありません。また、プロジェクト進行において、チーム間でのコミュニケーション不和やプロダクトに対する違和感が生じた場合に、それをチームメンバーや指導教員に対して口に出すというのはとても勇気のいることです。開発に集中しているメンバーにわざわざ時間をとってもらい、進んでいるものを止めてしまう、そんなことをするならそのままやり過ごすことを選択するのも無理からぬことです。

というわけで、ついつい今まで見てきたいろんなケースを書き連ねてしまいましたが、これらのほとんどは、プロジェクトのプロセスに関する基本的知識を学ぶ機会がなく、これらを自らの試行錯誤で進めていくことによって、どうしても生じてしまう問題であるように思います。

また、理工学系PBLにおいて私がもう一つ問題として感じるのは、このようなプロジェクトのプロセスに関する学びを体系的に学ぶ機会がなく、経験的に試行錯誤して得るべきだと思っている傾向があるということです。

== enPiT筑波大で進めているPBLとは
当初は私自身も前述したような試行錯誤を学生と共に行い、多くの失敗を得てきました。その中でアジャイルコーチの永瀬美穂さん（当時産業技術大学院大学 enPiT教員、現株式会社アトラクタ）が担当する産技大enPiTでのプロジェクトが発表会にてダントツにプロダクトの品質が良いこと、そしてプロジェクトを通した学びを学生が積極的に獲得しているようすをみて「これはなんだ」と驚き、アジャイル開発に対する興味を持ったのがきっかけで、2016年ごろから永瀬さんとkyon_mmさん（現在デロイトトーマツコンサルティング）にアジャイルコーチを依頼し、アジャイル開発の考え方をもとにしたPBLを進めています。

== enPiTでやっていること
enPiTは筑波大学の情報学群の三年生、そして同学大学院システム情報工学研究群情報理工学位プログラム博士前期課程一年を対象としたPBL科目です。一年間のカリキュラムで、1学期はベースとなる知識を個別に学んだのち、7月末の1週間に夏合宿、そして10月から1月にかけて週2回の授業（それぞれ3時間）の中で開発を行います。夏合宿では、前述したお二人のアジャイルコーチの協力のもと、1日スプリントを4回繰り返し体感的に開発サイクルを身につけます。そして10月からは1回の授業（3時間）を1スプリントとし、短時間で多くのサイクルを回していく中で、顧客の本当の価値に向きあい、プロダクトを作り上げていきます。

== PBLでアジャイル開発を取り入れる中で注力していること
永瀬さんやkyon_mmさん、そしてenPiT教員としてのチームメンバー（嵯峨先生、川口先生、早瀬先生）と授業を改善していく中で、特に以下の3点を注力してきました。

 * 自分達が解決したいと思う身近な問題に徹底的に向き合う
enPiT筑波大のプロジェクトのテーマは常に「自分の身近な問題を解決する」です。前述したように、プロダクトにおいて「誰のどんな問題を解決するのか」enPiTではこれを徹底的に深掘りしていくことを重視しています。顧客は自分達です。もっと社会的な問題を対象にした方が良いとか、視野を広くと言われたこともありますが、期間を通して問題を一番解決したい人と常に共に問題に向き合うことを重視しています。

 * 主役は学生。担当教員は授業全体のサーバントに徹し、関係者のポジションを明確にする
以前の私もそうでしたが、それぞれのプロジェクトに対してメンバーの1人として一緒に考えたり開発に加わってしまいがちです。それを徹底的に抑えるようにしました。enPiT筑波大では2022年現在、教員3名がチームとして授業の設計と運用に当たっており、enPiT自体のスクラムマスターとしてサーバントに徹するようにしています。将来的には教員自身もチームを作ってプロジェクトを運営して、自分達自身が一番楽しんでしまおうと企んでいますが、まだまだそれは準備中です。
また、enPiTは産学連携のプロジェクトとしても進めていたため、多くの学外関係者が成果発表会を見にきたり、授業を見学したりします。ここで行われるさまざまな視点からのアドバイスに感謝しながらも、他者に振り回されず自分達の問題・自分達のプロジェクトに純粋に集中できるよう環境づくりをしています。

 * 問題解決の結果にも注目する一方、経験による学びを重視する
プロジェクトの目的は、自分達の問題を解決すること。そのためどんな問題に対してどんなアプローチで解決し、そのために何を検証して価値を見つけたか。そしてその成果物を皆が手に取って評価できること、をenPiT筑波大ではとても重視しています。その一方で成果物だけではなく、それを作る過程の名で学生達がチームでの活動に関して、そしてプロダクトの価値の追求に関して、そして開発技術の習得や活用に関して、期間を経て経験的に何を学び取ったのかを重視します。プロダクトはプロジェクトが終了してしまえば、そこで終わるもの。enPiT終了後に生かされるのは、そこの過程で自分達で編み出したさまざまな工夫や学びだと思うのです。

== 個人的に響いたこと
ああ、ここまで全然アジャイルの話をしてなかったです。でも、enPiT筑波大で注力していることのほとんどはアジャイル開発について学び、スクラムのフレームワークを適用してきた中でPBLの中で本当に大事なところってなんだろう、考え抜いた結果、何年も経ってこういう考えに辿り着きました。

具体的にPBLの中でアジャイル開発の考え方やスクラム、XPなどの原則・価値・プラクティスのどの辺がとても個人的には響いたのか、というのを挙げていこうと思います。

 * スクラムマスターのサーバントリーダーという役割
私はサーバントリーダーの例えとして「部活のマネージャー」というのにとても腹落ちしました。監督でもキャプテンでもなくてマネージャー、お母さんなのか、と。主役はあくまでプレイヤー（開発チーム）で、開発チームが価値創造に注力できるように下支えをする。教員と学生との関係性の問題に悩んだときヒントになったのがこの考え方でした。

 * 包括的なドキュメントより動くソフトウエア
アジャイルマニフェストの4つの価値の一つ、ですね。手に持って経験しないと人は本気で考えない、なるほどなと思いました。また、スプリント内でインクリメントを提供するためのアプローチとして「頑張って作る」とか「生産性を上げる」ではなく、プロダクトバックログアイテムの粒度をできるだけ小さく砕くというアプローチ、膝を打ちました。「複雑なものをいかにシンプルなものに分解して優先順位をつけるか」という考え方、とても汎用的、かつ訓練が必要だけどちゃんと習っていない。これは汎用的スキルとして持つべきと思いました。

 * ゴールを調整し、ゴールから逆算する
定期的に進捗を確認するのではなく、まずゴールを見てゴールから逆に見直して調整する。そのために適切な（本気になれる）検査方法は何よりも動くソフトウエア。問題点でも挙げたように、開発プロセスの体系的な知見を身につけることが大事ではあるんですが、「こういうプロセスでやると良い」ではなく、基本的な考え方として、ゴールからの逆算、そしてそのための明確な検査方法がとても合理的。しかもこれも身につけるにはトレーニングが必要で、その割にはちゃんと習ったことがない。使えるじゃん！と思いました。

 * 確約・集中・公開・尊敬・勇気
スクラムの価値基準の5つです。特に尊敬と勇気。チームメンバーが互いに能力のある独立した個人として尊敬の念を持つと共に、教員も受講生に敬意を持ち信頼する。そして正しいことをする勇気や困難な問題に取り組む勇気が持てるように、つまりあまり耳障りの良くないことでも発言できたり、それを受け入れたりすることができるような、そんな環境を、各チームの努力だけではなく、enPiT筑波大全体の中でも作っていけるようにしよう。そう思ってやっています。また、スクラムのイベントはそういう意味ではとてもよくできていて、デイリースクラムやレトロスペクティブなど、自分で他のメンバーへ相談や進言をする準備をしなくても定期的にチャンスが巡ってくるように設計されている。これは優しい仕組み！と思っています。

== 強引にまとめ
というわけで、思っていることをつらつらと書いているだけになってしまいましたがまとめます。
私がPBLに関わる中で見てきた多くの問題は、教員と学生のポジションと役割、そしてプロセスに関する知識、もっといえば経験学習の学び方について、全部が試行錯誤になっていて、体系的に身につけないまま進めていることに起因していました。PBLにおける経験的な学習の仕方の体系としてアジャイル開発やスクラム・XPなどの考え方やプラクティスはとても相性が良いと感じて、だから私たちはアジャイル開発を大学のPBLで積極的に導入して今に至るのだという話でした。もちろんはじめからこんなことを考えていたわけではなく、初めは直感から入り、プラクティスから入って失敗した中で、いろんな方の話を聞いてやっと今回言語化できた感じです。良い機会をいただいてありがとうございました！



//embed{
    \begin{minipage}{.1\linewidth}
        \centering
        \includegraphics[width=.75\linewidth]{images/chap-chiemi627/chiemi2021.png}
    \end{minipage}
    \begin{minipage}{.89\linewidth}
        ちえみ @chiemi\_wtnb https://twitter.com/chiemi\_wtnb\\
        \end{minipage}
    \hspace{1ex}
//}


筑波大学で非常勤講師としてPBLに関わると共に、
現在は筑波技術大学で聴覚障害者と対象に情報科学を教えています。
最近は5歳の息子（けんご）と一緒にマイクラをやっています。
