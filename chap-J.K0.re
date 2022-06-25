= Agileとの出会いで変わったこと

//flushright{
J.K(@project_j_k)
//}

== ソフトウェアエンジニア期


新卒から10年ほど、とある製造業の会社にいました。
その時は業務時間外に仕事の考えるのは社畜のすることだと思っていたし、本は全く読んだことがない（本に1,000円以上払ったことがない）し、社外の人たちが集まるコミュニティの存在は知らない。完全に井の中の蛙でした。


さらに、社内にはソフトウェアエンジニアがほとんどいませんでした。
先輩がいないとまではいきませんが、上司はハードウェア出身。周りにスキルを教えてくれる人もおらず、要件定義、設計、コーディング、テスト。
なんでも自分でやるのが当たり前、の文化でした。
裏を返すと、誰にも頼らずに仕事をするのが当たり前、自力で解決できるまでいつまでも粘れる環境でした。

== アジャイルとの出会い


勤続10年くらいを過ぎたであろうある日、上司からとある1通のメールが転送されてきました。
研修センターで企画イベントがあるとのこと。
内容はよくわからなかったのですが、滅多にない外出する機会となりそうだと思い、足を運んでみることとしました。


そこで出会ったのが「Agile」でした。


くるくるとループした絵が並ぶ資料。
プロダクトオーナーはお金に権限があるから部長っぽい。
だったらスクラムマスターは課長かな？スクラムマスターって名前かっこいい！  


スクラムは当時の仕事と概念が異なりすぎていて、現場に持ち帰っても実現できるイメージは湧かず、フレームワークとしても全く理解はできなかったのですが、学生時代ラグビーをやっていた自分は、「スクラム」の単語そのものに、直感的に運命を感じていました。


誰も読まずメンテナンスもされないドキュメント、進捗をあげるための冗長なソースコード、たくさんの会議を経て仕様通り作ってリリースしたらお客様から突き返される製品。
伝言ゲームの末にお客様から「思っていたものと違う」と言われ続け、憧れて飛び込んだはずの日本の製造業に疑問を感じていた自分にとって、アジャイルマニフェスト@<fn>{アジャイルマニフェスト}には本能的にものすごい価値を感じたのでした。  

//footnote[アジャイルマニフェスト][@<href>{https://agilemanifesto.org/iso/ja/manifesto.html, https://agilemanifesto.org/iso/ja/manifesto.html}]


自分たちに圧倒的に足りていない価値観が目に飛び込んできた感覚を今でも覚えています。
こうしてアジャイルの世界へと急激に惹かれていくのでした。

== 何が変わった？

=== 本を読み始めた


アジャイルに新しい可能性を感じた自分はWebで情報収集をはじめてみました。
アジャイルで検索をしても、どのサイトを閲覧してもくるくるとループした絵が書いてある資料が出てくるばかりで、あまり参考になりませんでした。  


このままでは大した情報が得られないと考えた自分は、ついに本を探し始めました。
書籍レビューを複数サイトで読み漁り、一番評価が良さそうな印象を受けた『アジャイルサムライ』に狙いを定めました。
職場で書籍を購入してもらえる制度があるらしく、結果的に1,000円を超える本を買う経験は先送りとなりましたが、無事、3,000円近い本を読む機会を得ることができました。  


マスターセンセイ（書籍内に出てくる架空のキャラクター）の語り口調がどんどんワクワクを与えてくれるこの本は、自分をすぐにAgileの虜にしていきました。
全人類にトレードオフスライダーで会話をして欲しい！と願い始めるなど、これまで抱えていた現場の悩みに対し、人間として合理的かつ倫理的な生き方が解決策だと教えてくれました。


すっかり本を読むことに味を占めた自分は、『スクラム現場ガイド』、『Fearless Change』、『ユーザーストーリーマッピング』などを自分で購入して読むようになっていくのでした。  

=== TDDと出会った


本以外でも少しずつアジャイルやスクラムに関する情報を仕入れる習慣がついてきたある日、『テスト駆動開発』が改めて日本語で読めるようになる話題が舞い込んできました。
@t_wada さんはフォロワー数もすごいしとても注目度が高そうだと感じた自分は本を買ってみることとしました。
Red→Green→Refoctoringの黄金の回転を写経を通じて経験した自分は、製品開発でも取り入れてみたい気持ちが湧き上がってきました。


しかし、開発のターゲットはC言語。
書籍の環境はJavaとPython。
そのまま流用できる状態ではないことは考えるまでもありませんでした。  


そこで出会ったのが『テスト駆動開発による組み込みプログラミング』と言う本。
C言語環境でテスト駆動開発を実現できる可能性を見出した自分は、この本と共に環境構築を試みました。    


初めてテスト駆動開発で作った自分のソースコード。
からの初めてのリファクタリング。  


Greenの状態で冗長なコードを統合してビルドを実行。
ーー！！！
GreenがGreenのままでいた瞬間を迎えたその興奮は本当に忘れられませんし、今後テスト駆動開発なしでは生きられなくなるような、とても大きな感動となったのでした。  

=== 職場が変わった


テスト駆動開発を実践し始める頃、時折社外コミュニティに参加するようになっていました。
スクラムやチーム開発を実践してみたい自分の生々しい悩みを聞いてくれて、惜しみないアドバイスをくれる人たちがいました。
自分の環境で感じている違和感とは別の世界、アジャイルを実践している人たちはたくさんいる現実を知ることにもなりました。


先駆者さんたちに憧れながら、挑戦する機会をぼんやり探しながら参加したとあるカンファレンスで、いくつかの出会いがありました。


「4月からスクラム始めるから。」  


の一言と共に受け取った名刺。記載されている会社の概要を調べてみると、自分にとって魅力的なキーワードがたくさん、目に胸に刺さってくるのでした。
たまたま隣にいた人その人は、今の職場の社長さんでした。


同じ3年を費やすのなら、草の根活動で頑張るよりも、スクラムができる環境でスクラムを経験したかった自分は、この出会いから3ヶ月後に、新しい会社で新しい人生を歩み始めるのでした。

== 新天地編

=== スクラムチームの開発者を経験した


アジャイルコーチのいるスクラムチームの開発者として、新たなキャリアをスタートしました。　　　　
まずはC言語しかまともに書いたことのない脳味噌で、JavaのREST APIづくりなどに取り組んでいました。  


「わからなかったら聞いてね。」  


一人で何時間でも粘り続けるスタイルで仕事をしてきた自分は、困っていても人に聞くことができませんでした。
憧れのチーム開発には溶け込めず、寄せ集めのWeb記事でトライ＆エラーを繰り返す日々。
なんとか動くソフトウェアを完成させるも、そこに期待していた達成感はありませんでした。  


また、転職したてで何かしら成果を出したいという気持ちもあり、アジャイルとはほど遠い、スクラムチームにはふさわしくないような振る舞いしかできない日々を過ごしたのでした。  

=== スクラムマスターを経験した


駆け出しのスクラムチームも本格的なプロジェクト化するタイミングで、スクラムチームのスクラムマスターを担わせていただくことになりました。


本やコミュニティで得た知識で武装した自分は、どこかで見かけたアンチパターンに遭遇すると、スクラムの番人を履き違えてことごとく荒ぶっては、チームの和をみ出しました。
念願だったスクラムマスター研修を受講するのですが、スクラムを上手になりたい自分とプロダクトの成功を願うチームとの温度差が、より開くきっかけにもなってしまったのでした。
チームとコミュニケーションらしいコミュニケーションが取れない自分は、日毎にチームから信頼が失われていきました。
その結果、自分は半年ほどでチームを去ることになったのでした。  

== 何が変わった？

=== 井の中の蛙、大海を知った


知識は持っているだけでは役に立たない上に、人を攻撃してしまう凶器にもなってしまうことを知ったのは、チームを去った後でした。
当時はロールモデルがいなかったので、期待されている振る舞いがわからなかった、とも感じていましたが、今思うと、自分が期待した状態に周囲の人を巻き込めないだけだったのかもしれません。
この後、研修講師に挑戦することとなるのですが、知識、または伝えたいことを誰かに伝えるためには、どんな準備をして、どんな伝え方をしたらいいのかと真剣に向き合うこととなり、少しずつですが、誰かから「ありがとう」をいただくことに伴う自信を積み重ねられるようになっていくのでした。

=== 人生が変わった


行き詰まっていた日々を救ってくれたのは、参加し続けていたあちこちのコミュニティでした。
先述したように、一人一人が自身の経験を惜しみなく伝えてくれて、正面から自分の話を聞いてくれて、そこで得られた感謝は、今でも込み上げてくるものがあります。
コミュニティでの出会いと、そこでの経験が、今の自分を作ってくれました。
逆にコミュニティがなければ、今の自分は、どこにいたでしょう。全く想像ができないくらいには、切っても切れない存在であるこのは間違いありません。

== これからどうするの？


現在はたくさんのコミュニティさんにお世話になりながら、自分でもいくつかコミュニティを運営するようになりました。
研修講師や人事・組織開発、コーチングなどにも取り組みながら、自分の実現したい在り方を思い出したり立ち戻れたりするきっかけとできるようにと、そんな願いも込めながらScrumMasterを名乗っていたりします。


チームをいきいきを実現に貢献することは今でも難しいと感じるばかりの日々ですが、それでも向き合い続けられている、自分の大好きなAgileが、それぞれの人にとって楽しく広まることを夢見て、一つ一つの出会いを大切にしながら、日々の活動をしていきたいと思います。

　

//embed{
    \begin{minipage}{.1\linewidth}
        \centering
        \includegraphics[width=.75\linewidth]{images/chap-jk/iconjk.png}
    \end{minipage}
    \begin{minipage}{.89\linewidth}
        J.K @projecr\_J\_K https://twitter.com/project\_J\_K\\
        Agile Tech EXPO Organizar / Agile Japan実行委員
        \end{minipage}
    \hspace{1ex}
//}


アジャイルで日本から世界を楽しく！アジャイルコーチや組織開発に従事。カンファレンス運営などを通じ、Agileが楽しく広まることを夢見て日々活動中。
