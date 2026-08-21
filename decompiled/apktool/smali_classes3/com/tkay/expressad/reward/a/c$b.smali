.class final Lcom/tkay/expressad/reward/a/c$b;
.super Lcom/tkay/expressad/atsignalcommon/a/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/reward/a/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "b"
.end annotation


# instance fields
.field private final b:Landroid/os/Handler;

.field private final c:Ljava/lang/Runnable;

.field private final d:Z

.field private final e:Z

.field private f:I

.field private g:Ljava/lang/String;

.field private h:Ljava/lang/String;

.field private i:Ljava/lang/String;

.field private j:Ljava/lang/String;

.field private k:Lcom/tkay/expressad/videocommon/a$a;

.field private l:Lcom/tkay/expressad/foundation/d/c;

.field private m:Ljava/util/concurrent/CopyOnWriteArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation
.end field

.field private n:Lcom/tkay/expressad/videocommon/e/d;

.field private final o:Lcom/tkay/expressad/reward/a/c$j;

.field private p:Z

.field private q:Z

.field private r:Z

.field private s:I

.field private t:Z

.field private u:J


# direct methods
.method public constructor <init>(ZLandroid/os/Handler;Ljava/lang/Runnable;ZZILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/videocommon/a$a;Lcom/tkay/expressad/foundation/d/c;Ljava/util/concurrent/CopyOnWriteArrayList;Lcom/tkay/expressad/videocommon/e/d;Lcom/tkay/expressad/reward/a/c$j;J)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(Z",
            "Landroid/os/Handler;",
            "Ljava/lang/Runnable;",
            "ZZI",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Lcom/tkay/expressad/videocommon/a$a;",
            "Lcom/tkay/expressad/foundation/d/c;",
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;",
            "Lcom/tkay/expressad/videocommon/e/d;",
            "Lcom/tkay/expressad/reward/a/c$j;",
            "J)V"
        }
    .end annotation

    move-object v0, p0

    .line 1864
    invoke-direct {p0}, Lcom/tkay/expressad/atsignalcommon/a/a;-><init>()V

    const/4 v1, 0x0

    .line 1859
    iput v1, v0, Lcom/tkay/expressad/reward/a/c$b;->s:I

    move-object v2, p2

    .line 1865
    iput-object v2, v0, Lcom/tkay/expressad/reward/a/c$b;->b:Landroid/os/Handler;

    move-object v2, p3

    .line 1866
    iput-object v2, v0, Lcom/tkay/expressad/reward/a/c$b;->c:Ljava/lang/Runnable;

    move v2, p4

    .line 1867
    iput-boolean v2, v0, Lcom/tkay/expressad/reward/a/c$b;->d:Z

    move v2, p5

    .line 1868
    iput-boolean v2, v0, Lcom/tkay/expressad/reward/a/c$b;->e:Z

    move v2, p6

    .line 1869
    iput v2, v0, Lcom/tkay/expressad/reward/a/c$b;->f:I

    move-object v2, p7

    .line 1870
    iput-object v2, v0, Lcom/tkay/expressad/reward/a/c$b;->g:Ljava/lang/String;

    move-object v2, p8

    .line 1871
    iput-object v2, v0, Lcom/tkay/expressad/reward/a/c$b;->i:Ljava/lang/String;

    move-object v2, p9

    .line 1872
    iput-object v2, v0, Lcom/tkay/expressad/reward/a/c$b;->h:Ljava/lang/String;

    move-object v2, p10

    .line 1873
    iput-object v2, v0, Lcom/tkay/expressad/reward/a/c$b;->j:Ljava/lang/String;

    move-object v2, p11

    .line 1874
    iput-object v2, v0, Lcom/tkay/expressad/reward/a/c$b;->k:Lcom/tkay/expressad/videocommon/a$a;

    move-object v2, p12

    .line 1876
    iput-object v2, v0, Lcom/tkay/expressad/reward/a/c$b;->l:Lcom/tkay/expressad/foundation/d/c;

    move-object/from16 v2, p13

    .line 1877
    iput-object v2, v0, Lcom/tkay/expressad/reward/a/c$b;->m:Ljava/util/concurrent/CopyOnWriteArrayList;

    move-object/from16 v2, p14

    .line 1878
    iput-object v2, v0, Lcom/tkay/expressad/reward/a/c$b;->n:Lcom/tkay/expressad/videocommon/e/d;

    move-object/from16 v2, p15

    .line 1879
    iput-object v2, v0, Lcom/tkay/expressad/reward/a/c$b;->o:Lcom/tkay/expressad/reward/a/c$j;

    .line 1880
    iput-boolean v1, v0, Lcom/tkay/expressad/reward/a/c$b;->p:Z

    move v1, p1

    .line 1881
    iput-boolean v1, v0, Lcom/tkay/expressad/reward/a/c$b;->t:Z

    move-wide/from16 v1, p16

    .line 1882
    iput-wide v1, v0, Lcom/tkay/expressad/reward/a/c$b;->u:J

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 1957
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/videocommon/b/g;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public final a(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 17

    move-object/from16 v1, p0

    move-object/from16 v0, p1

    const-string v2, "id"

    if-eqz v0, :cond_6

    .line 1964
    :try_start_0
    invoke-static/range {p2 .. p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_6

    .line 1965
    new-instance v3, Lorg/json/JSONObject;

    move-object/from16 v4, p2

    invoke-direct {v3, v4}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 1966
    invoke-virtual {v3, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v12

    .line 1967
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    invoke-static {v0, v12}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1968
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    invoke-static {v12}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    .line 1969
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    invoke-static {v12}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/String;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object v8

    .line 1970
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    invoke-static {v12}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;)Lcom/tkay/expressad/videocommon/e/d;

    move-result-object v11

    .line 1972
    new-instance v9, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v9}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    .line 1973
    invoke-virtual {v9, v8}, Ljava/util/concurrent/CopyOnWriteArrayList;->add(Ljava/lang/Object;)Z

    .line 1974
    check-cast v0, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 1975
    iget-object v3, v0, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    instance-of v3, v3, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v3, :cond_6

    .line 1977
    iget-object v7, v0, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 3076
    invoke-static {}, Lcom/tkay/expressad/reward/a/c$m;->a()Lcom/tkay/expressad/reward/a/c;

    move-result-object v5

    .line 1978
    iget-boolean v6, v1, Lcom/tkay/expressad/reward/a/c$b;->t:Z

    iget v0, v1, Lcom/tkay/expressad/reward/a/c$b;->s:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-nez v0, :cond_0

    const/4 v0, 0x3

    goto :goto_0

    :cond_0
    const/4 v0, 0x6

    :goto_0
    if-eqz v7, :cond_5

    const-string v4, "onSubPlayTemplateViewLoad"

    const-string v13, "data"

    const-string v14, "data is null"

    const-string v15, "error"

    const-string v3, "result"

    const/4 v1, 0x2

    if-eqz v8, :cond_4

    if-eqz v11, :cond_4

    .line 5050
    :try_start_1
    invoke-virtual {v8}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v16

    if-eqz v16, :cond_4

    invoke-static {v10}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v16

    if-eqz v16, :cond_1

    goto/16 :goto_1

    .line 5066
    :cond_1
    invoke-virtual {v8}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v16

    invoke-virtual/range {v16 .. v16}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v16

    invoke-static/range {v16 .. v16}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v16

    if-eqz v16, :cond_2

    .line 5067
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 5069
    :try_start_2
    invoke-virtual {v0, v2, v12}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 5070
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    const/4 v5, 0x1

    .line 5071
    invoke-virtual {v2, v3, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 5072
    invoke-virtual {v2, v15, v14}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 5073
    invoke-virtual {v0, v13, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 5074
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    invoke-static {v0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    invoke-static {v7, v4, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto/16 :goto_2

    :catch_0
    move-exception v0

    .line 5076
    :try_start_3
    sget-boolean v1, Lcom/tkay/expressad/b;->a:Z

    if-eqz v1, :cond_5

    .line 5077
    invoke-virtual {v0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    goto :goto_2

    .line 5081
    :cond_2
    invoke-virtual {v8}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    invoke-virtual {v8}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v1

    const-string v2, "cmpt=1"

    invoke-virtual {v1, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_5

    .line 5085
    :cond_3
    new-instance v1, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v2

    invoke-direct {v1, v2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    .line 5086
    new-instance v2, Lcom/tkay/expressad/reward/a/c$3;

    move-object v4, v2

    invoke-direct/range {v4 .. v12}, Lcom/tkay/expressad/reward/a/c$3;-><init>(Lcom/tkay/expressad/reward/a/c;ZLcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;Lcom/tkay/expressad/foundation/d/c;Ljava/util/List;Ljava/lang/String;Lcom/tkay/expressad/videocommon/e/d;Ljava/lang/String;)V

    mul-int/lit16 v0, v0, 0x3e8

    int-to-long v3, v0

    invoke-virtual {v1, v2, v3, v4}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    goto :goto_2

    .line 5051
    :cond_4
    :goto_1
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 5053
    :try_start_4
    invoke-virtual {v0, v2, v12}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 5054
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    .line 5055
    invoke-virtual {v2, v3, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 5056
    invoke-virtual {v2, v15, v14}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 5057
    invoke-virtual {v0, v13, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 5058
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    invoke-static {v0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    invoke-static {v7, v4, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_1
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    goto :goto_2

    :catch_1
    move-exception v0

    .line 5060
    :try_start_5
    sget-boolean v1, Lcom/tkay/expressad/b;->a:Z

    if-eqz v1, :cond_5

    .line 5061
    invoke-virtual {v0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception v0

    move-object/from16 v1, p0

    goto :goto_3

    :cond_5
    :goto_2
    move-object/from16 v1, p0

    .line 1979
    :try_start_6
    iget v0, v1, Lcom/tkay/expressad/reward/a/c$b;->s:I

    const/4 v2, 0x1

    add-int/2addr v0, v2

    iput v0, v1, Lcom/tkay/expressad/reward/a/c$b;->s:I
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_1

    goto :goto_4

    :catchall_1
    move-exception v0

    .line 1987
    :goto_3
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    :cond_6
    :goto_4
    return-void
.end method

.method public final a(Ljava/lang/String;II)V
    .locals 2

    .line 1939
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "loadAds: unitID "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " type "

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, " adType "

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final onPageFinished(Landroid/webkit/WebView;Ljava/lang/String;)V
    .locals 4

    .line 1993
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/a/a;->onPageFinished(Landroid/webkit/WebView;Ljava/lang/String;)V

    .line 1995
    iget-boolean v0, p0, Lcom/tkay/expressad/reward/a/c$b;->q:Z

    if-nez v0, :cond_3

    .line 2001
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/c$b;->h:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "_"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/tkay/expressad/reward/a/c$b;->g:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "wfr=1"

    .line 2002
    invoke-virtual {p2, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p2

    const/4 v0, 0x1

    if-nez p2, :cond_2

    .line 2004
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/j;->a()Lcom/tkay/expressad/videocommon/b/j;

    move-result-object p2

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/tkay/expressad/reward/a/c$b;->h:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/tkay/expressad/reward/a/c$b;->j:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/c$b;->g:Ljava/lang/String;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, v1, v0}, Lcom/tkay/expressad/videocommon/b/j;->c(Ljava/lang/String;Z)V

    .line 2005
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/c$b;->b:Landroid/os/Handler;

    if-eqz p2, :cond_0

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/c$b;->c:Ljava/lang/Runnable;

    if-eqz v1, :cond_0

    .line 2006
    invoke-virtual {p2, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 2009
    :cond_0
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/c$b;->k:Lcom/tkay/expressad/videocommon/a$a;

    if-eqz p2, :cond_1

    .line 2010
    invoke-virtual {p2, v0}, Lcom/tkay/expressad/videocommon/a$a;->a(Z)V

    .line 2018
    :cond_1
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/c$b;->o:Lcom/tkay/expressad/reward/a/c$j;

    if-eqz p2, :cond_2

    .line 2020
    invoke-interface {p2}, Lcom/tkay/expressad/reward/a/c$j;->a()V

    .line 2023
    :cond_2
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    invoke-static {p1}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->b(Landroid/webkit/WebView;)V

    .line 2024
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/a/c$b;->q:Z

    :cond_3
    return-void
.end method

.method public final onReceivedError(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 2030
    invoke-super {p0, p1, p2, p3, p4}, Lcom/tkay/expressad/atsignalcommon/a/a;->onReceivedError(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V

    .line 2031
    new-instance p1, Ljava/lang/StringBuilder;

    const-string p4, "onReceivedError: "

    invoke-direct {p1, p4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, "  "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 2032
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/j;->a()Lcom/tkay/expressad/videocommon/b/j;

    move-result-object p1

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object p4, p0, Lcom/tkay/expressad/reward/a/c$b;->h:Ljava/lang/String;

    invoke-virtual {p2, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p4, "_"

    invoke-virtual {p2, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/tkay/expressad/reward/a/c$b;->j:Ljava/lang/String;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/tkay/expressad/reward/a/c$b;->g:Ljava/lang/String;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    const/4 v0, 0x0

    invoke-virtual {p1, p2, v0}, Lcom/tkay/expressad/videocommon/b/j;->c(Ljava/lang/String;Z)V

    .line 2033
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/c$b;->o:Lcom/tkay/expressad/reward/a/c$j;

    if-eqz p1, :cond_1

    .line 2034
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object p2, p0, Lcom/tkay/expressad/reward/a/c$b;->h:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, p0, Lcom/tkay/expressad/reward/a/c$b;->g:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 2035
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/c$b;->k:Lcom/tkay/expressad/videocommon/a$a;

    if-eqz p1, :cond_0

    .line 2036
    invoke-virtual {p1, v0}, Lcom/tkay/expressad/videocommon/a$a;->a(Z)V

    .line 2038
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/c$b;->o:Lcom/tkay/expressad/reward/a/c$j;

    invoke-interface {p1, p3}, Lcom/tkay/expressad/reward/a/c$j;->a(Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method public final readyState(Landroid/webkit/WebView;I)V
    .locals 3

    .line 1890
    iget-boolean p1, p0, Lcom/tkay/expressad/reward/a/c$b;->r:Z

    if-nez p1, :cond_6

    .line 1896
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v0, p0, Lcom/tkay/expressad/reward/a/c$b;->h:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "_"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/c$b;->g:Ljava/lang/String;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1897
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v1, "CampaignTPLWindVaneWebviewClient start to preload bid temp resource readyState: "

    invoke-direct {p1, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " isCache: "

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/tkay/expressad/reward/a/c$b;->p:Z

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const/4 p1, 0x1

    if-ne p2, p1, :cond_3

    .line 1900
    iget-boolean p2, p0, Lcom/tkay/expressad/reward/a/c$b;->p:Z

    if-eqz p2, :cond_0

    .line 1901
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/c$b;->h:Ljava/lang/String;

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/c$b;->j:Ljava/lang/String;

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/tkay/expressad/videocommon/a;->e(Ljava/lang/String;)V

    goto :goto_0

    .line 1903
    :cond_0
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/c$b;->h:Ljava/lang/String;

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/c$b;->j:Ljava/lang/String;

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/tkay/expressad/videocommon/a;->d(Ljava/lang/String;)V

    .line 1905
    :goto_0
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v1, "add bid temp: "

    invoke-direct {p2, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/c$b;->h:Ljava/lang/String;

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/c$b;->j:Ljava/lang/String;

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/c$b;->g:Ljava/lang/String;

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1906
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/c$b;->h:Ljava/lang/String;

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/c$b;->j:Ljava/lang/String;

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/c$b;->g:Ljava/lang/String;

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/c$b;->k:Lcom/tkay/expressad/videocommon/a$a;

    iget-boolean v2, p0, Lcom/tkay/expressad/reward/a/c$b;->p:Z

    invoke-static {p2, v1, p1, v2}, Lcom/tkay/expressad/videocommon/a;->a(Ljava/lang/String;Lcom/tkay/expressad/videocommon/a$a;ZZ)V

    .line 1907
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/c$b;->b:Landroid/os/Handler;

    if-eqz p2, :cond_1

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/c$b;->c:Ljava/lang/Runnable;

    if-eqz v1, :cond_1

    .line 1908
    invoke-virtual {p2, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 1910
    :cond_1
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/j;->a()Lcom/tkay/expressad/videocommon/b/j;

    move-result-object p2

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/tkay/expressad/reward/a/c$b;->h:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/tkay/expressad/reward/a/c$b;->j:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/tkay/expressad/reward/a/c$b;->g:Ljava/lang/String;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0, p1}, Lcom/tkay/expressad/videocommon/b/j;->c(Ljava/lang/String;Z)V

    .line 1912
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/c$b;->k:Lcom/tkay/expressad/videocommon/a$a;

    if-eqz p2, :cond_2

    .line 1913
    invoke-virtual {p2, p1}, Lcom/tkay/expressad/videocommon/a$a;->a(Z)V

    .line 1919
    :cond_2
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/c$b;->o:Lcom/tkay/expressad/reward/a/c$j;

    if-eqz p2, :cond_5

    .line 1921
    invoke-interface {p2}, Lcom/tkay/expressad/reward/a/c$j;->a()V

    goto :goto_1

    .line 1925
    :cond_3
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/j;->a()Lcom/tkay/expressad/videocommon/b/j;

    move-result-object p2

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/tkay/expressad/reward/a/c$b;->h:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/tkay/expressad/reward/a/c$b;->j:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/tkay/expressad/reward/a/c$b;->g:Ljava/lang/String;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {p2, v0, v1}, Lcom/tkay/expressad/videocommon/b/j;->c(Ljava/lang/String;Z)V

    .line 1926
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/c$b;->k:Lcom/tkay/expressad/videocommon/a$a;

    if-eqz p2, :cond_4

    .line 1927
    invoke-virtual {p2, v1}, Lcom/tkay/expressad/videocommon/a$a;->a(Z)V

    .line 1929
    :cond_4
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/c$b;->o:Lcom/tkay/expressad/reward/a/c$j;

    if-eqz p2, :cond_5

    const-string v0, "state 2"

    .line 1930
    invoke-interface {p2, v0}, Lcom/tkay/expressad/reward/a/c$j;->a(Ljava/lang/String;)V

    .line 1933
    :cond_5
    :goto_1
    iput-boolean p1, p0, Lcom/tkay/expressad/reward/a/c$b;->r:Z

    :cond_6
    return-void
.end method
