= 請負契約ってアジャイルにできるの？

//flushright{
おやかた@oyakata2438
//}

請負契約という発注/業務委託形態がありますね。これって、アジャイルに進めることってできるんでしょうか？

本章は、こうすればよいよ、といった方針を示すものではありません。筆者の純粋な疑問を述べるものです。可能ならば、どなたかよい解決策を教えてください。


== 請負契約とは？

請負契約とは、仕事の完成に対して対価を支払う契約」(民法632条)です。したがって、報酬請求は仕事を完成させたときになりますし、発注者は請負者が仕事が完成させるまでやり直しをさせることができます。(あくまで法律上の話で、無理筋なやり直しや追加はご法度です。)

これに対し、「作業時間」に対して対価を支払うのが、委任契約/準委任契約です。正確には、法律的な業務(弁護士など)が委任契約、それ以外の委任契約の形態を取るものが準委任契約のようです。イメージ的には、コンビニのバイトのように時間で拘束されるものが準委任契約だと思ってよいのでしょうか。

さて、何かの開発を自分が所属するチームで行う場合ではなく、他の人/他のチームにお願いすることを考えてみてください。有り体に言えば、グループ会社、外注ソフトハウス、下請け業者、加工屋さん、などといった表現を使う場合もありますね。そういった相手に、「こういうものを作ってほしい」というお願いをし、発注する@<fn>{team}ときのことです。

//footnote[team][そういえば、アジャイルに関わる本で、発注する場合の記載ってあんまりない気がします。POとかPdMとかの立場の違いはあるにしても、役職や（会社間の）力関係に差がある、あるいは発注者と受注者という文脈で語られることが少ない気がしますね。そういう観点での疑問です。]

仕様をすり合わせ、工数および費用を見積もってもらい、それに基づき発注を出します。相見積もりやコンペをする場合もありますがいったんそれは置いておきましょう。

== 見積もり・発注・フィードバックむずかしくない？

さて、このプロジェクトはそれなりの規模の開発です。これを請負契約の形態でもって進めるとき、どうやったらアジャイルに進めることができるでしょうか？また、そもそも、これをアジャイルに進める必要があるのでしょうか？

よく言われることですが、ウォーターフォールにおいては、「前工程に間違いがない」という前提または期待があります。発注者の要求仕様が正しい、デザインが正しい、顧客ニーズやスケジュールが適切に設定されている、などが前提となります。もちろん、建前としてそれが理想であることは間違いありません。作るものが明確になっているなら、むしろどんな開発手法であってもスムーズにいくでしょう。

ところが、これまたよくある話で、ある程度具体化したからこそ見えてくる（当初の）要求仕様との齟齬や前工程への手戻りが生じます。

受注者の側からは、これをどう織り込むのか、どうマージンを作るのかといった部分に頭を悩ませます。

逆に発注者の側からは、発注者からの仕様が正しいことをどう担保するのか、変更が生じた場合にどうするのか、納期や工数（=費用）の削減と仕様変更のマージンのバランスをどうするのかなどが悩ましい問題となります。費用が確定しないことには発注できません。

「xxを作りますから発注します。決裁ください。費用も納期も、作ってみないとわかりませんけど！」なんて発注をしようものなら上司から殴り飛ばされますよね。

特に昨今の傾向として、発注時の「発注仕様書」が非常に厳格になっているように感じます。実装すべき仕様(機能、前提条件など)、納期/スケジュール、検収条件、などなど。発注仕様書に盛り込まれる内容が増えていると感じる方も多いのではないでしょうか？困った。

アジャイル開発においては、ユーザー、開発者、その他関係者(ステークホルダーっていうんでしたっけ？)との対話の中で、最終成果物をすり合わせていくプロセスを経ますが、それを「発注仕様書」にどう書けばよいのでしょうか？

== 仕様書に盛り込む

では、どうやって仕様書を書きましょうか。

1週間に1回のスプリントレビューをやりたい場合、@<strong>{週1回、進捗報告会を開催すること}とでも書けば、曲がりなりにもスプリントレビューはできるかもしれません。もちろん、スプリントレビューは進捗報告会ではない！というご指摘もあろうかと思います。とはいえ、実際に進捗報告会という名目で人を集めて、上手くスプリントレビューができるといいですね。

仕様書に、「週1回の進捗報告会を開催すること」と明記しておけば、受注者側もそのミーティング分の工数も算定することができるでしょう。後出しするよりよっぽど健全ですね。今時なら、オンラインミーティングが可能でしょうから移動の工数とかは発生しないで済むでしょう（対面・移動して開催するなら、その分は費用として見積もり時点で算定できますしね）

MVPはどうやって出してもらいましょうか？

これも、進捗報告会で、MVP、あるいは「できたところまで」のレビューをする、という内容を共有できればいいのかもしれません。

一番つらいのは、多重請け構造において、開発者と発注者が直接会話することが憚られる雰囲気がある場合かもしれません。あれ？こればっかりは詰んでない？

開発者と直接やり取りできないような開発環境だと、WFであろうと上手くいかないように思います。これは開発手法の問題ではないような気がしますね。この点、良いアイディアをお持ちの方はぜひ教えてください。

実際に、発注者の立場の方と話をしようとしたこともありますが、かたくなに直接連絡してくれなかったですね…これは、契約によるのかもしれません。困った…
元請けの人も伝書鳩になったり、やり取りに時間がかかったり、伝えたいことが劣化したり‥

最初の顔合わせの時に、契約的な部分を除いて、技術的な部分については直接聞いてほしい。と伝えたのですが…会社の文化によるのでしょうかね…

== 最後に
本章では、発注仕様書が細かく・厳しくなってる昨今、外注として出す開発にアジャイル手法を使うの難しくない？という観点で書き始めました。疑問点を並べてみると、あれ？案外行けるのか？という気になってきましたね…

本業にも使ってみよう。


　

//embed{
    \begin{minipage}{.1\linewidth}
        \centering
        \includegraphics[width=.75\linewidth]{images/chap-oyakata/oyakata400.jpg}
    \end{minipage}
    \begin{minipage}{.89\linewidth}
        親方 @oyakata2438 https://twitter.com/oyakata2438\\
        サークル名：親方Project
        \end{minipage}
    \hspace{1ex}
//}

ワンストップ本シリーズ企画・編集（一部執筆）してます。コミケと技術書典に出没。ついには技術書同人誌博覧会（技書博）のコアスタッフとして運営側に参加しています。