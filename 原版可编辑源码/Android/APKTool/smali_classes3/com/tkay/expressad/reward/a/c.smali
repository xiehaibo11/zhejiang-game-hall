.class public final Lcom/tkay/expressad/reward/a/c;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/reward/a/c$a;,
        Lcom/tkay/expressad/reward/a/c$l;,
        Lcom/tkay/expressad/reward/a/c$m;,
        Lcom/tkay/expressad/reward/a/c$b;,
        Lcom/tkay/expressad/reward/a/c$j;,
        Lcom/tkay/expressad/reward/a/c$k;,
        Lcom/tkay/expressad/reward/a/c$h;,
        Lcom/tkay/expressad/reward/a/c$d;,
        Lcom/tkay/expressad/reward/a/c$g;,
        Lcom/tkay/expressad/reward/a/c$f;,
        Lcom/tkay/expressad/reward/a/c$e;,
        Lcom/tkay/expressad/reward/a/c$i;,
        Lcom/tkay/expressad/reward/a/c$c;
    }
.end annotation


# static fields
.field private static final a:Ljava/lang/String; = "RewardCampaignsResourceManager"

.field private static d:Ljava/util/Map; = null
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/tkay/expressad/reward/a/c$a;",
            ">;"
        }
    .end annotation
.end field

.field private static final f:I = 0x64

.field private static final g:I = 0xc8

.field private static final h:I = 0x65

.field private static final i:I = 0xc9

.field private static final j:I = 0x66

.field private static final k:I = 0xca

.field private static final l:I = 0x67

.field private static final m:I = 0xcb

.field private static final n:I = 0x68

.field private static final o:I = 0xcc

.field private static final p:I = 0x69

.field private static final q:I = 0xcd

.field private static final r:I = 0x0

.field private static final s:I = 0x1


# instance fields
.field private final b:Lcom/tkay/expressad/reward/a/c$h;

.field private c:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;>;"
        }
    .end annotation
.end field

.field private e:Z

.field private volatile t:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method private constructor <init>()V
    .locals 2

    .line 67
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2347
    new-instance v0, Ljava/util/ArrayList;

    const/4 v1, 0x6

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(I)V

    iput-object v0, p0, Lcom/tkay/expressad/reward/a/c;->t:Ljava/util/List;

    .line 68
    new-instance v0, Landroid/os/HandlerThread;

    const-string v1, "mb-reward-load-thread"

    invoke-direct {v0, v1}, Landroid/os/HandlerThread;-><init>(Ljava/lang/String;)V

    .line 69
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    sput-object v1, Lcom/tkay/expressad/reward/a/c;->d:Ljava/util/Map;

    .line 70
    invoke-virtual {v0}, Landroid/os/HandlerThread;->start()V

    .line 71
    new-instance v1, Lcom/tkay/expressad/reward/a/c$h;

    invoke-virtual {v0}, Landroid/os/HandlerThread;->getLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-direct {v1, v0}, Lcom/tkay/expressad/reward/a/c$h;-><init>(Landroid/os/Looper;)V

    iput-object v1, p0, Lcom/tkay/expressad/reward/a/c;->b:Lcom/tkay/expressad/reward/a/c$h;

    .line 72
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/reward/a/c;->c:Ljava/util/concurrent/ConcurrentHashMap;

    return-void
.end method

.method synthetic constructor <init>(B)V
    .locals 0

    .line 57
    invoke-direct {p0}, Lcom/tkay/expressad/reward/a/c;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/reward/a/c;)Lcom/tkay/expressad/reward/a/c$h;
    .locals 0

    .line 57
    iget-object p0, p0, Lcom/tkay/expressad/reward/a/c;->b:Lcom/tkay/expressad/reward/a/c$h;

    return-object p0
.end method

.method public static a()Lcom/tkay/expressad/reward/a/c;
    .locals 1

    .line 76
    invoke-static {}, Lcom/tkay/expressad/reward/a/c$m;->a()Lcom/tkay/expressad/reward/a/c;

    move-result-object v0

    return-object v0
.end method

.method static synthetic a(I)Ljava/lang/String;
    .locals 0

    .line 57
    invoke-static {p0}, Lcom/tkay/expressad/reward/a/c;->b(I)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Lcom/tkay/expressad/reward/a/c$i;Ljava/util/List;)V
    .locals 14
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Lcom/tkay/expressad/foundation/d/c;",
            "Ljava/lang/String;",
            "Lcom/tkay/expressad/reward/a/c$i;",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)V"
        }
    .end annotation

    move-object v1, p0

    move-object/from16 v0, p6

    .line 224
    invoke-static/range {p6 .. p6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2

    .line 225
    invoke-virtual/range {p5 .. p5}, Lcom/tkay/expressad/foundation/d/c;->H()Z

    move-result v2

    if-nez v2, :cond_2

    const-string v2, ".zip"

    .line 226
    invoke-virtual {v0, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    const-string v2, "md5filename"

    invoke-virtual {v0, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 228
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v2

    invoke-virtual {v2, v0}, Lcom/tkay/expressad/videocommon/b/g;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    .line 232
    :try_start_0
    new-instance v13, Lcom/tkay/expressad/reward/a/c$g;

    const/16 v9, 0x1f1

    iget-object v10, v1, Lcom/tkay/expressad/reward/a/c;->b:Lcom/tkay/expressad/reward/a/c$h;

    move-object v3, v13

    move-object v4, p1

    move-object/from16 v5, p2

    move-object/from16 v6, p3

    move-object/from16 v7, p4

    move-object/from16 v8, p5

    move-object/from16 v11, p7

    move-object/from16 v12, p8

    invoke-direct/range {v3 .. v12}, Lcom/tkay/expressad/reward/a/c$g;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;ILandroid/os/Handler;Lcom/tkay/expressad/reward/a/c$i;Ljava/util/List;)V

    .line 233
    invoke-virtual {v13, v2}, Lcom/tkay/expressad/reward/a/c$g;->a(Z)V

    .line 234
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v2

    invoke-virtual {v2, v0, v13}, Lcom/tkay/expressad/videocommon/b/g;->b(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 236
    sget-boolean v2, Lcom/tkay/expressad/b;->a:Z

    if-eqz v2, :cond_0

    .line 237
    invoke-virtual {v0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    :cond_0
    return-void

    .line 242
    :cond_1
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/h;->a()Lcom/tkay/expressad/videocommon/b/h;

    move-result-object v2

    invoke-virtual {v2, v0}, Lcom/tkay/expressad/videocommon/b/h;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    .line 246
    :try_start_1
    new-instance v12, Lcom/tkay/expressad/reward/a/c$d;

    const/16 v4, 0x1f1

    iget-object v10, v1, Lcom/tkay/expressad/reward/a/c;->b:Lcom/tkay/expressad/reward/a/c$h;

    move-object v3, v12

    move-object/from16 v5, p2

    move-object/from16 v6, p3

    move-object/from16 v7, p4

    move-object/from16 v8, p5

    move-object/from16 v9, p7

    move-object/from16 v11, p8

    invoke-direct/range {v3 .. v11}, Lcom/tkay/expressad/reward/a/c$d;-><init>(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/reward/a/c$i;Landroid/os/Handler;Ljava/util/List;)V

    .line 247
    invoke-virtual {v12, v2}, Lcom/tkay/expressad/reward/a/c$d;->a(Z)V

    .line 248
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v2

    invoke-virtual {v2, v0, v12}, Lcom/tkay/expressad/videocommon/b/g;->b(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    return-void

    :catch_1
    move-exception v0

    .line 250
    sget-boolean v2, Lcom/tkay/expressad/b;->a:Z

    if-eqz v2, :cond_2

    .line 251
    invoke-virtual {v0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    :cond_2
    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/reward/a/c;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Lcom/tkay/expressad/reward/a/c$i;Ljava/util/List;)V
    .locals 14

    move-object v0, p0

    move-object/from16 v1, p6

    .line 5224
    invoke-static/range {p6 .. p6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2

    .line 5225
    invoke-virtual/range {p5 .. p5}, Lcom/tkay/expressad/foundation/d/c;->H()Z

    move-result v2

    if-nez v2, :cond_2

    const-string v2, ".zip"

    .line 5226
    invoke-virtual {v1, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    const-string v2, "md5filename"

    invoke-virtual {v1, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 5228
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v2

    invoke-virtual {v2, v1}, Lcom/tkay/expressad/videocommon/b/g;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    .line 5232
    :try_start_0
    new-instance v13, Lcom/tkay/expressad/reward/a/c$g;

    const/16 v9, 0x1f1

    iget-object v10, v0, Lcom/tkay/expressad/reward/a/c;->b:Lcom/tkay/expressad/reward/a/c$h;

    move-object v3, v13

    move-object v4, p1

    move-object/from16 v5, p2

    move-object/from16 v6, p3

    move-object/from16 v7, p4

    move-object/from16 v8, p5

    move-object/from16 v11, p7

    move-object/from16 v12, p8

    invoke-direct/range {v3 .. v12}, Lcom/tkay/expressad/reward/a/c$g;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;ILandroid/os/Handler;Lcom/tkay/expressad/reward/a/c$i;Ljava/util/List;)V

    .line 5233
    invoke-virtual {v13, v2}, Lcom/tkay/expressad/reward/a/c$g;->a(Z)V

    .line 5234
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v0

    invoke-virtual {v0, v1, v13}, Lcom/tkay/expressad/videocommon/b/g;->b(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 5236
    sget-boolean v1, Lcom/tkay/expressad/b;->a:Z

    if-eqz v1, :cond_0

    .line 5237
    invoke-virtual {v0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    :cond_0
    return-void

    .line 5242
    :cond_1
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/h;->a()Lcom/tkay/expressad/videocommon/b/h;

    move-result-object v2

    invoke-virtual {v2, v1}, Lcom/tkay/expressad/videocommon/b/h;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    .line 5246
    :try_start_1
    new-instance v12, Lcom/tkay/expressad/reward/a/c$d;

    const/16 v4, 0x1f1

    iget-object v10, v0, Lcom/tkay/expressad/reward/a/c;->b:Lcom/tkay/expressad/reward/a/c$h;

    move-object v3, v12

    move-object/from16 v5, p2

    move-object/from16 v6, p3

    move-object/from16 v7, p4

    move-object/from16 v8, p5

    move-object/from16 v9, p7

    move-object/from16 v11, p8

    invoke-direct/range {v3 .. v11}, Lcom/tkay/expressad/reward/a/c$d;-><init>(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/reward/a/c$i;Landroid/os/Handler;Ljava/util/List;)V

    .line 5247
    invoke-virtual {v12, v2}, Lcom/tkay/expressad/reward/a/c$d;->a(Z)V

    .line 5248
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v0

    invoke-virtual {v0, v1, v12}, Lcom/tkay/expressad/videocommon/b/g;->b(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    return-void

    :catch_1
    move-exception v0

    .line 5250
    sget-boolean v1, Lcom/tkay/expressad/b;->a:Z

    if-eqz v1, :cond_2

    .line 5251
    invoke-virtual {v0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    :cond_2
    return-void
.end method

.method private static synthetic a(Lcom/tkay/expressad/reward/a/c;ZLcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;Lcom/tkay/expressad/foundation/d/c;Ljava/util/List;Lcom/tkay/expressad/videocommon/e/d;Ljava/lang/String;Ljava/lang/String;I)V
    .locals 12

    move-object v0, p2

    move-object/from16 v9, p7

    if-eqz v0, :cond_5

    const-string v1, "onSubPlayTemplateViewLoad"

    const-string v2, "data"

    const-string v3, "data is null"

    const-string v4, "error"

    const-string v5, "result"

    const-string v6, "id"

    const/4 v7, 0x2

    if-eqz p3, :cond_4

    if-eqz p5, :cond_4

    .line 6050
    invoke-virtual {p3}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v8

    if-eqz v8, :cond_4

    invoke-static/range {p6 .. p6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-eqz v8, :cond_0

    goto/16 :goto_0

    .line 6066
    :cond_0
    invoke-virtual {p3}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v8

    invoke-virtual {v8}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v8

    invoke-static {v8}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-eqz v8, :cond_2

    .line 6067
    new-instance v8, Lorg/json/JSONObject;

    invoke-direct {v8}, Lorg/json/JSONObject;-><init>()V

    .line 6069
    :try_start_0
    invoke-virtual {v8, v6, v9}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 6070
    new-instance v6, Lorg/json/JSONObject;

    invoke-direct {v6}, Lorg/json/JSONObject;-><init>()V

    const/4 v9, 0x1

    .line 6071
    invoke-virtual {v6, v5, v9}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 6072
    invoke-virtual {v6, v4, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 6073
    invoke-virtual {v8, v2, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 6074
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    invoke-virtual {v8}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/String;->getBytes()[B

    move-result-object v2

    invoke-static {v2, v7}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v2

    invoke-static {p2, v1, v2}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 6076
    sget-boolean v1, Lcom/tkay/expressad/b;->a:Z

    if-eqz v1, :cond_1

    .line 6077
    invoke-virtual {v0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    :cond_1
    return-void

    .line 6081
    :cond_2
    invoke-virtual {p3}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    invoke-virtual {p3}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v1

    const-string v2, "cmpt=1"

    invoke-virtual {v1, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_5

    .line 6085
    :cond_3
    new-instance v10, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v10, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    .line 6086
    new-instance v11, Lcom/tkay/expressad/reward/a/c$3;

    move-object v1, v11

    move-object v2, p0

    move v3, p1

    move-object v4, p2

    move-object v5, p3

    move-object/from16 v6, p4

    move-object/from16 v7, p6

    move-object/from16 v8, p5

    move-object/from16 v9, p7

    invoke-direct/range {v1 .. v9}, Lcom/tkay/expressad/reward/a/c$3;-><init>(Lcom/tkay/expressad/reward/a/c;ZLcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;Lcom/tkay/expressad/foundation/d/c;Ljava/util/List;Ljava/lang/String;Lcom/tkay/expressad/videocommon/e/d;Ljava/lang/String;)V

    move/from16 v0, p8

    mul-int/lit16 v0, v0, 0x3e8

    int-to-long v0, v0

    invoke-virtual {v10, v11, v0, v1}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    goto :goto_1

    .line 6051
    :cond_4
    :goto_0
    new-instance v8, Lorg/json/JSONObject;

    invoke-direct {v8}, Lorg/json/JSONObject;-><init>()V

    .line 6053
    :try_start_1
    invoke-virtual {v8, v6, v9}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 6054
    new-instance v6, Lorg/json/JSONObject;

    invoke-direct {v6}, Lorg/json/JSONObject;-><init>()V

    .line 6055
    invoke-virtual {v6, v5, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 6056
    invoke-virtual {v6, v4, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 6057
    invoke-virtual {v8, v2, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 6058
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    invoke-virtual {v8}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/String;->getBytes()[B

    move-result-object v2

    invoke-static {v2, v7}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v2

    invoke-static {p2, v1, v2}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    return-void

    :catch_1
    move-exception v0

    .line 6060
    sget-boolean v1, Lcom/tkay/expressad/b;->a:Z

    if-eqz v1, :cond_5

    .line 6061
    invoke-virtual {v0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    :cond_5
    :goto_1
    return-void
.end method

.method private a(ZLcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;Lcom/tkay/expressad/foundation/d/c;Ljava/util/List;Lcom/tkay/expressad/videocommon/e/d;Ljava/lang/String;Ljava/lang/String;I)V
    .locals 12
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(Z",
            "Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;",
            "Lcom/tkay/expressad/foundation/d/c;",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;",
            "Lcom/tkay/expressad/videocommon/e/d;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "I)V"
        }
    .end annotation

    move-object v0, p2

    move-object/from16 v9, p7

    if-eqz v0, :cond_5

    const-string v1, "onSubPlayTemplateViewLoad"

    const-string v2, "data"

    const-string v3, "data is null"

    const-string v4, "error"

    const-string v5, "result"

    const-string v6, "id"

    const/4 v7, 0x2

    if-eqz p3, :cond_4

    if-eqz p5, :cond_4

    .line 2050
    invoke-virtual {p3}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v8

    if-eqz v8, :cond_4

    invoke-static/range {p6 .. p6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-eqz v8, :cond_0

    goto/16 :goto_0

    .line 2066
    :cond_0
    invoke-virtual {p3}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v8

    invoke-virtual {v8}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v8

    invoke-static {v8}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-eqz v8, :cond_2

    .line 2067
    new-instance v8, Lorg/json/JSONObject;

    invoke-direct {v8}, Lorg/json/JSONObject;-><init>()V

    .line 2069
    :try_start_0
    invoke-virtual {v8, v6, v9}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2070
    new-instance v6, Lorg/json/JSONObject;

    invoke-direct {v6}, Lorg/json/JSONObject;-><init>()V

    const/4 v9, 0x1

    .line 2071
    invoke-virtual {v6, v5, v9}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2072
    invoke-virtual {v6, v4, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2073
    invoke-virtual {v8, v2, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2074
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    invoke-virtual {v8}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/String;->getBytes()[B

    move-result-object v2

    invoke-static {v2, v7}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v2

    invoke-static {p2, v1, v2}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 2076
    sget-boolean v1, Lcom/tkay/expressad/b;->a:Z

    if-eqz v1, :cond_1

    .line 2077
    invoke-virtual {v0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    :cond_1
    return-void

    .line 2081
    :cond_2
    invoke-virtual {p3}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    invoke-virtual {p3}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v1

    const-string v2, "cmpt=1"

    invoke-virtual {v1, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_3

    return-void

    .line 2085
    :cond_3
    new-instance v10, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v10, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    .line 2086
    new-instance v11, Lcom/tkay/expressad/reward/a/c$3;

    move-object v1, v11

    move-object v2, p0

    move v3, p1

    move-object v4, p2

    move-object v5, p3

    move-object/from16 v6, p4

    move-object/from16 v7, p6

    move-object/from16 v8, p5

    move-object/from16 v9, p7

    invoke-direct/range {v1 .. v9}, Lcom/tkay/expressad/reward/a/c$3;-><init>(Lcom/tkay/expressad/reward/a/c;ZLcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;Lcom/tkay/expressad/foundation/d/c;Ljava/util/List;Ljava/lang/String;Lcom/tkay/expressad/videocommon/e/d;Ljava/lang/String;)V

    move/from16 v0, p8

    mul-int/lit16 v0, v0, 0x3e8

    int-to-long v0, v0

    invoke-virtual {v10, v11, v0, v1}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    goto :goto_1

    .line 2051
    :cond_4
    :goto_0
    new-instance v8, Lorg/json/JSONObject;

    invoke-direct {v8}, Lorg/json/JSONObject;-><init>()V

    .line 2053
    :try_start_1
    invoke-virtual {v8, v6, v9}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2054
    new-instance v6, Lorg/json/JSONObject;

    invoke-direct {v6}, Lorg/json/JSONObject;-><init>()V

    .line 2055
    invoke-virtual {v6, v5, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2056
    invoke-virtual {v6, v4, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2057
    invoke-virtual {v8, v2, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2058
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    invoke-virtual {v8}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/String;->getBytes()[B

    move-result-object v2

    invoke-static {v2, v7}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v2

    invoke-static {p2, v1, v2}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    return-void

    :catch_1
    move-exception v0

    .line 2060
    sget-boolean v1, Lcom/tkay/expressad/b;->a:Z

    if-eqz v1, :cond_5

    .line 2061
    invoke-virtual {v0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    :cond_5
    :goto_1
    return-void
.end method

.method private static a(ZLcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;Ljava/lang/String;ILcom/tkay/expressad/foundation/d/c;Ljava/util/List;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/videocommon/e/d;Ljava/lang/String;Z)V
    .locals 14
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(Z",
            "Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;",
            "Ljava/lang/String;",
            "I",
            "Lcom/tkay/expressad/foundation/d/c;",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Lcom/tkay/expressad/videocommon/e/d;",
            "Ljava/lang/String;",
            "Z)V"
        }
    .end annotation

    move-object/from16 v0, p4

    move-object/from16 v1, p5

    move-object/from16 v5, p7

    .line 2098
    :try_start_0
    new-instance v6, Lcom/tkay/expressad/videocommon/a$a;

    invoke-direct {v6}, Lcom/tkay/expressad/videocommon/a$a;-><init>()V

    .line 5076
    invoke-static {}, Lcom/tkay/expressad/reward/a/c$m;->a()Lcom/tkay/expressad/reward/a/c;

    move-result-object v2

    .line 2099
    invoke-direct {v2}, Lcom/tkay/expressad/reward/a/c;->d()Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    move-result-object v2

    if-nez v2, :cond_0

    .line 2101
    new-instance v2, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v3

    invoke-direct {v2, v3}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;-><init>(Landroid/content/Context;)V

    :cond_0
    move-object v10, v2

    .line 2103
    invoke-virtual {v6, v10}, Lcom/tkay/expressad/videocommon/a$a;->a(Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;)V

    const/4 v2, 0x0

    if-eqz v1, :cond_4

    .line 2106
    invoke-interface/range {p5 .. p5}, Ljava/util/List;->size()I

    move-result v3

    if-lez v3, :cond_4

    .line 2107
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v3

    invoke-virtual {v3, v5}, Lcom/tkay/expressad/videocommon/b/c;->a(Ljava/lang/String;)Ljava/util/List;

    move-result-object v3

    const/4 v4, 0x0

    if-eqz v3, :cond_3

    .line 2108
    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v7

    if-lez v7, :cond_3

    move v7, v4

    .line 2109
    :goto_0
    invoke-interface/range {p5 .. p5}, Ljava/util/List;->size()I

    move-result v8

    if-ge v7, v8, :cond_3

    .line 2110
    invoke-interface {v1, v7}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/tkay/expressad/foundation/d/c;

    .line 2111
    invoke-interface {v3}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v9

    :cond_1
    :goto_1
    invoke-interface {v9}, Ljava/util/Iterator;->hasNext()Z

    move-result v11

    if-eqz v11, :cond_2

    invoke-interface {v9}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v11

    check-cast v11, Lcom/tkay/expressad/foundation/d/c;

    .line 2112
    invoke-virtual {v11}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v8}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v12, v13}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v12

    if-eqz v12, :cond_1

    invoke-virtual {v11}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v8}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v11, v12}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v11

    if-eqz v11, :cond_1

    .line 2113
    invoke-virtual {v8}, Lcom/tkay/expressad/foundation/d/c;->au()V

    .line 2114
    invoke-interface {v1, v7, v8}, Ljava/util/List;->set(ILjava/lang/Object;)Ljava/lang/Object;

    goto :goto_1

    :cond_2
    add-int/lit8 v7, v7, 0x1

    goto :goto_0

    .line 2119
    :cond_3
    new-instance v3, Lcom/tkay/expressad/video/signal/a/j;

    invoke-direct {v3, v2, v0, v1}, Lcom/tkay/expressad/video/signal/a/j;-><init>(Landroid/app/Activity;Lcom/tkay/expressad/foundation/d/c;Ljava/util/List;)V

    .line 2120
    invoke-interface {v1, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v1

    goto :goto_2

    .line 2122
    :cond_4
    new-instance v3, Lcom/tkay/expressad/video/signal/a/j;

    invoke-direct {v3, v2, v0}, Lcom/tkay/expressad/video/signal/a/j;-><init>(Landroid/app/Activity;Lcom/tkay/expressad/foundation/d/c;)V

    .line 2123
    invoke-virtual/range {p4 .. p4}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v1

    :goto_2
    move-object v11, v1

    move-object v12, v3

    move/from16 v1, p3

    .line 2125
    invoke-virtual {v12, v1}, Lcom/tkay/expressad/video/signal/a/j;->a(I)V

    .line 2126
    invoke-virtual {v12, v5}, Lcom/tkay/expressad/video/signal/a/j;->a(Ljava/lang/String;)V

    move-object/from16 v2, p9

    .line 2127
    invoke-virtual {v12, v2}, Lcom/tkay/expressad/video/signal/a/j;->c(Ljava/lang/String;)V

    move-object/from16 v1, p8

    .line 2128
    invoke-virtual {v12, v1}, Lcom/tkay/expressad/video/signal/a/j;->a(Lcom/tkay/expressad/videocommon/e/d;)V

    move v1, p0

    .line 2129
    invoke-virtual {v12, p0}, Lcom/tkay/expressad/video/signal/a/j;->b(Z)V

    .line 2131
    new-instance v13, Lcom/tkay/expressad/reward/a/c$l;

    move-object v1, v13

    move-object/from16 v2, p9

    move-object v3, p1

    move-object/from16 v4, p2

    move-object/from16 v5, p7

    move-object/from16 v7, p4

    move/from16 v8, p10

    move-object v9, v11

    invoke-direct/range {v1 .. v9}, Lcom/tkay/expressad/reward/a/c$l;-><init>(Ljava/lang/String;Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/videocommon/a$a;Lcom/tkay/expressad/foundation/d/c;ZLjava/lang/String;)V

    .line 2132
    invoke-virtual {v10, v13}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setWebViewListener(Lcom/tkay/expressad/atsignalcommon/windvane/e;)V

    .line 2133
    invoke-virtual {v10, v12}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setObject(Ljava/lang/Object;)V

    move-object/from16 v0, p6

    .line 2134
    invoke-virtual {v10, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->loadUrl(Ljava/lang/String;)V

    .line 2135
    invoke-virtual {v10, v11}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setRid(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 2137
    sget-boolean v1, Lcom/tkay/expressad/b;->a:Z

    if-eqz v1, :cond_5

    .line 2138
    invoke-virtual {v0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    :cond_5
    return-void
.end method

.method static synthetic a(ZLcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/util/List;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/videocommon/e/d;Ljava/lang/String;Z)V
    .locals 14

    move-object/from16 v0, p3

    move-object/from16 v1, p4

    move-object/from16 v5, p6

    .line 6098
    :try_start_0
    new-instance v6, Lcom/tkay/expressad/videocommon/a$a;

    invoke-direct {v6}, Lcom/tkay/expressad/videocommon/a$a;-><init>()V

    .line 7076
    invoke-static {}, Lcom/tkay/expressad/reward/a/c$m;->a()Lcom/tkay/expressad/reward/a/c;

    move-result-object v2

    .line 6099
    invoke-direct {v2}, Lcom/tkay/expressad/reward/a/c;->d()Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    move-result-object v2

    if-nez v2, :cond_0

    .line 6101
    new-instance v2, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v3

    invoke-direct {v2, v3}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;-><init>(Landroid/content/Context;)V

    :cond_0
    move-object v10, v2

    .line 6103
    invoke-virtual {v6, v10}, Lcom/tkay/expressad/videocommon/a$a;->a(Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;)V

    const/4 v2, 0x0

    const/4 v3, 0x0

    if-eqz v1, :cond_4

    .line 6106
    invoke-interface/range {p4 .. p4}, Ljava/util/List;->size()I

    move-result v4

    if-lez v4, :cond_4

    .line 6107
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v4

    invoke-virtual {v4, v5}, Lcom/tkay/expressad/videocommon/b/c;->a(Ljava/lang/String;)Ljava/util/List;

    move-result-object v4

    if-eqz v4, :cond_3

    .line 6108
    invoke-interface {v4}, Ljava/util/List;->size()I

    move-result v7

    if-lez v7, :cond_3

    move v7, v3

    .line 6109
    :goto_0
    invoke-interface/range {p4 .. p4}, Ljava/util/List;->size()I

    move-result v8

    if-ge v7, v8, :cond_3

    .line 6110
    invoke-interface {v1, v7}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/tkay/expressad/foundation/d/c;

    .line 6111
    invoke-interface {v4}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v9

    :cond_1
    :goto_1
    invoke-interface {v9}, Ljava/util/Iterator;->hasNext()Z

    move-result v11

    if-eqz v11, :cond_2

    invoke-interface {v9}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v11

    check-cast v11, Lcom/tkay/expressad/foundation/d/c;

    .line 6112
    invoke-virtual {v11}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v8}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v12, v13}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v12

    if-eqz v12, :cond_1

    invoke-virtual {v11}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v8}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v11, v12}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v11

    if-eqz v11, :cond_1

    .line 6113
    invoke-virtual {v8}, Lcom/tkay/expressad/foundation/d/c;->au()V

    .line 6114
    invoke-interface {v1, v7, v8}, Ljava/util/List;->set(ILjava/lang/Object;)Ljava/lang/Object;

    goto :goto_1

    :cond_2
    add-int/lit8 v7, v7, 0x1

    goto :goto_0

    .line 6119
    :cond_3
    new-instance v4, Lcom/tkay/expressad/video/signal/a/j;

    invoke-direct {v4, v2, v0, v1}, Lcom/tkay/expressad/video/signal/a/j;-><init>(Landroid/app/Activity;Lcom/tkay/expressad/foundation/d/c;Ljava/util/List;)V

    .line 6120
    invoke-interface {v1, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v1

    goto :goto_2

    .line 6122
    :cond_4
    new-instance v4, Lcom/tkay/expressad/video/signal/a/j;

    invoke-direct {v4, v2, v0}, Lcom/tkay/expressad/video/signal/a/j;-><init>(Landroid/app/Activity;Lcom/tkay/expressad/foundation/d/c;)V

    .line 6123
    invoke-virtual/range {p3 .. p3}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v1

    :goto_2
    move-object v11, v1

    move-object v12, v4

    .line 6125
    invoke-virtual {v12, v3}, Lcom/tkay/expressad/video/signal/a/j;->a(I)V

    .line 6126
    invoke-virtual {v12, v5}, Lcom/tkay/expressad/video/signal/a/j;->a(Ljava/lang/String;)V

    move-object/from16 v2, p8

    .line 6127
    invoke-virtual {v12, v2}, Lcom/tkay/expressad/video/signal/a/j;->c(Ljava/lang/String;)V

    move-object/from16 v1, p7

    .line 6128
    invoke-virtual {v12, v1}, Lcom/tkay/expressad/video/signal/a/j;->a(Lcom/tkay/expressad/videocommon/e/d;)V

    move v1, p0

    .line 6129
    invoke-virtual {v12, p0}, Lcom/tkay/expressad/video/signal/a/j;->b(Z)V

    .line 6131
    new-instance v13, Lcom/tkay/expressad/reward/a/c$l;

    move-object v1, v13

    move-object/from16 v2, p8

    move-object v3, p1

    move-object/from16 v4, p2

    move-object/from16 v5, p6

    move-object/from16 v7, p3

    move/from16 v8, p9

    move-object v9, v11

    invoke-direct/range {v1 .. v9}, Lcom/tkay/expressad/reward/a/c$l;-><init>(Ljava/lang/String;Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/videocommon/a$a;Lcom/tkay/expressad/foundation/d/c;ZLjava/lang/String;)V

    .line 6132
    invoke-virtual {v10, v13}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setWebViewListener(Lcom/tkay/expressad/atsignalcommon/windvane/e;)V

    .line 6133
    invoke-virtual {v10, v12}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setObject(Ljava/lang/Object;)V

    move-object/from16 v0, p5

    .line 6134
    invoke-virtual {v10, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->loadUrl(Ljava/lang/String;)V

    .line 6135
    invoke-virtual {v10, v11}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setRid(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 6137
    sget-boolean v1, Lcom/tkay/expressad/b;->a:Z

    if-eqz v1, :cond_5

    .line 6138
    invoke-virtual {v0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    :cond_5
    return-void
.end method

.method private static declared-synchronized b(I)Ljava/lang/String;
    .locals 2

    const-class v0, Lcom/tkay/expressad/reward/a/c;

    monitor-enter v0

    const/16 v1, 0xc8

    if-eq p0, v1, :cond_3

    const/16 v1, 0xc9

    if-eq p0, v1, :cond_2

    const/16 v1, 0xcb

    if-eq p0, v1, :cond_1

    const/16 v1, 0xcd

    if-eq p0, v1, :cond_0

    :try_start_0
    const-string p0, "unknown"
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1442
    monitor-exit v0

    return-object p0

    :cond_0
    :try_start_1
    const-string p0, "tpl"
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1438
    monitor-exit v0

    return-object p0

    :cond_1
    :try_start_2
    const-string p0, "temp"
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 1436
    monitor-exit v0

    return-object p0

    :cond_2
    :try_start_3
    const-string p0, "zip/html"
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 1434
    monitor-exit v0

    return-object p0

    :cond_3
    :try_start_4
    const-string p0, "video"
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    .line 1440
    monitor-exit v0

    return-object p0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method static synthetic b()Ljava/util/Map;
    .locals 1

    .line 57
    sget-object v0, Lcom/tkay/expressad/reward/a/c;->d:Ljava/util/Map;

    return-object v0
.end method

.method static synthetic b(Lcom/tkay/expressad/reward/a/c;)Z
    .locals 0

    .line 57
    iget-boolean p0, p0, Lcom/tkay/expressad/reward/a/c;->e:Z

    return p0
.end method

.method private static c(I)Ljava/lang/String;
    .locals 3

    const-string v0, ""

    .line 2334
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "code"

    .line 2335
    invoke-virtual {v1, v2, p0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2336
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p0

    .line 2337
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 2338
    invoke-virtual {p0}, Ljava/lang/String;->getBytes()[B

    move-result-object p0

    const/4 v1, 0x2

    invoke-static {p0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move-object v0, p0

    :catchall_0
    :cond_0
    return-object v0
.end method

.method private declared-synchronized c()V
    .locals 0

    monitor-enter p0

    .line 2360
    monitor-exit p0

    return-void
.end method

.method private declared-synchronized d()Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;
    .locals 1

    monitor-enter p0

    .line 2393
    monitor-exit p0

    const/4 v0, 0x0

    return-object v0
.end method


# virtual methods
.method public final declared-synchronized a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/reward/a/c$i;)V
    .locals 7

    monitor-enter p0

    .line 260
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/c;->b:Lcom/tkay/expressad/reward/a/c$h;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/reward/a/c$h;->a(Landroid/content/Context;)V

    if-eqz p2, :cond_0

    .line 262
    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->ar()Ljava/lang/String;

    move-result-object p1

    .line 263
    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 264
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/j;->a()Lcom/tkay/expressad/videocommon/b/j;

    move-result-object p2

    const/4 v0, 0x1

    invoke-virtual {p2, p1, v0}, Lcom/tkay/expressad/videocommon/b/j;->b(Ljava/lang/String;Z)V

    .line 265
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object p2

    const/16 v0, 0x69

    .line 266
    iput v0, p2, Landroid/os/Message;->what:I

    .line 267
    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const-string v1, "unit_id"

    .line 268
    invoke-virtual {v0, v1, p4}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 269
    sget-object v1, Lcom/tkay/expressad/b;->y:Ljava/lang/String;

    invoke-virtual {v0, v1, p3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "request_id"

    .line 270
    invoke-virtual {v0, v1, p5}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "url"

    .line 271
    invoke-virtual {v0, v1, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 272
    invoke-virtual {p2, v0}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 273
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/c;->b:Lcom/tkay/expressad/reward/a/c$h;

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/reward/a/c$h;->sendMessage(Landroid/os/Message;)Z

    .line 275
    invoke-interface {p6, p3, p4, p5}, Lcom/tkay/expressad/reward/a/c$i;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 278
    monitor-exit p0

    return-void

    :cond_0
    if-eqz p2, :cond_1

    .line 282
    :try_start_1
    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->ar()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-nez p1, :cond_1

    .line 284
    :try_start_2
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object p1

    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->ar()Ljava/lang/String;

    move-result-object p2

    new-instance v6, Lcom/tkay/expressad/reward/a/c$2;

    move-object v0, v6

    move-object v1, p0

    move-object v2, p4

    move-object v3, p3

    move-object v4, p5

    move-object v5, p6

    invoke-direct/range {v0 .. v5}, Lcom/tkay/expressad/reward/a/c$2;-><init>(Lcom/tkay/expressad/reward/a/c;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/reward/a/c$i;)V

    invoke-virtual {p1, p2, v6}, Lcom/tkay/expressad/videocommon/b/g;->b(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 418
    monitor-exit p0

    return-void

    :catch_0
    move-exception p1

    .line 415
    :try_start_3
    sget-boolean p2, Lcom/tkay/expressad/b;->a:Z

    if-eqz p2, :cond_1

    .line 416
    invoke-virtual {p1}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 420
    :cond_1
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized a(Landroid/content/Context;ZIZILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/concurrent/CopyOnWriteArrayList;Lcom/tkay/expressad/reward/a/c$c;Lcom/tkay/expressad/reward/a/c$i;)V
    .locals 15
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "ZIZI",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;",
            "Lcom/tkay/expressad/reward/a/c$c;",
            "Lcom/tkay/expressad/reward/a/c$i;",
            ")V"
        }
    .end annotation

    move-object v10, p0

    move-object/from16 v0, p7

    move-object/from16 v11, p8

    monitor-enter p0

    .line 81
    :try_start_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "_"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    .line 82
    sget-object v13, Lcom/tkay/expressad/reward/a/c;->d:Ljava/util/Map;

    new-instance v14, Lcom/tkay/expressad/reward/a/c$a;

    invoke-virtual/range {p9 .. p9}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v5

    move-object v1, v14

    move/from16 v2, p2

    move/from16 v3, p4

    move/from16 v4, p3

    move-object/from16 v6, p7

    move-object/from16 v7, p8

    move/from16 v8, p5

    move-object/from16 v9, p9

    invoke-direct/range {v1 .. v9}, Lcom/tkay/expressad/reward/a/c$a;-><init>(ZZIILjava/lang/String;Ljava/lang/String;ILjava/util/concurrent/CopyOnWriteArrayList;)V

    invoke-interface {v13, v12, v14}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 83
    iget-object v1, v10, Lcom/tkay/expressad/reward/a/c;->b:Lcom/tkay/expressad/reward/a/c$h;

    move-object/from16 v2, p10

    invoke-virtual {v1, v0, v11, v2}, Lcom/tkay/expressad/reward/a/c$h;->a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/reward/a/c$c;)V

    .line 84
    iget-object v1, v10, Lcom/tkay/expressad/reward/a/c;->b:Lcom/tkay/expressad/reward/a/c$h;

    move-object/from16 v4, p1

    invoke-virtual {v1, v4}, Lcom/tkay/expressad/reward/a/c$h;->a(Landroid/content/Context;)V

    .line 85
    iget-object v1, v10, Lcom/tkay/expressad/reward/a/c;->b:Lcom/tkay/expressad/reward/a/c$h;

    move-object/from16 v3, p9

    invoke-virtual {v1, v12, v3}, Lcom/tkay/expressad/reward/a/c$h;->a(Ljava/lang/String;Ljava/util/concurrent/CopyOnWriteArrayList;)V

    .line 86
    iget-object v12, v10, Lcom/tkay/expressad/reward/a/c;->b:Lcom/tkay/expressad/reward/a/c$h;

    new-instance v13, Lcom/tkay/expressad/reward/a/c$1;

    move-object v1, v13

    move-object v2, p0

    move-object/from16 v3, p9

    move-object/from16 v4, p1

    move-object/from16 v5, p7

    move/from16 v6, p5

    move-object/from16 v7, p6

    move-object/from16 v8, p8

    move-object/from16 v9, p11

    invoke-direct/range {v1 .. v9}, Lcom/tkay/expressad/reward/a/c$1;-><init>(Lcom/tkay/expressad/reward/a/c;Ljava/util/concurrent/CopyOnWriteArrayList;Landroid/content/Context;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/reward/a/c$i;)V

    invoke-virtual {v12, v13}, Lcom/tkay/expressad/reward/a/c$h;->post(Ljava/lang/Runnable;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 221
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final declared-synchronized a(ZLandroid/os/Handler;ZZLcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;Ljava/lang/String;ILcom/tkay/expressad/foundation/d/c;Ljava/util/concurrent/CopyOnWriteArrayList;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/videocommon/e/d;Lcom/tkay/expressad/reward/a/c$j;)V
    .locals 20
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(Z",
            "Landroid/os/Handler;",
            "ZZ",
            "Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;",
            "Ljava/lang/String;",
            "I",
            "Lcom/tkay/expressad/foundation/d/c;",
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Lcom/tkay/expressad/videocommon/e/d;",
            "Lcom/tkay/expressad/reward/a/c$j;",
            ")V"
        }
    .end annotation

    move-object/from16 v0, p6

    move-object/from16 v13, p8

    move-object/from16 v14, p9

    move-object/from16 v11, p12

    move-object/from16 v15, p13

    monitor-enter p0

    .line 1351
    :try_start_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "_"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1353
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v16
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 1355
    :try_start_1
    invoke-static/range {p6 .. p6}, Lcom/tkay/expressad/foundation/h/t;->e(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 1357
    invoke-interface/range {p15 .. p15}, Lcom/tkay/expressad/reward/a/c$j;->a()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 1359
    monitor-exit p0

    return-void

    .line 1366
    :cond_0
    :try_start_2
    new-instance v12, Lcom/tkay/expressad/videocommon/a$a;

    invoke-direct {v12}, Lcom/tkay/expressad/videocommon/a$a;-><init>()V

    .line 3076
    invoke-static {}, Lcom/tkay/expressad/reward/a/c$m;->a()Lcom/tkay/expressad/reward/a/c;

    move-result-object v1

    .line 1367
    invoke-direct {v1}, Lcom/tkay/expressad/reward/a/c;->d()Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    move-result-object v1
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    if-nez v1, :cond_1

    const/4 v1, 0x1

    .line 1370
    :try_start_3
    new-instance v2, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v3

    invoke-direct {v2, v3}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;-><init>(Landroid/content/Context;)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    move-object v10, v2

    goto :goto_0

    .line 1387
    :catchall_0
    :try_start_4
    invoke-virtual {v12, v1}, Lcom/tkay/expressad/videocommon/a$a;->a(Z)V

    .line 1388
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/j;->a()Lcom/tkay/expressad/videocommon/b/j;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "_"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "_"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3, v1}, Lcom/tkay/expressad/videocommon/b/j;->c(Ljava/lang/String;Z)V

    .line 1394
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "_"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface/range {p15 .. p15}, Lcom/tkay/expressad/reward/a/c$j;->a()V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_1
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    .line 1396
    monitor-exit p0

    return-void

    .line 1374
    :catch_0
    :try_start_5
    invoke-virtual {v12, v1}, Lcom/tkay/expressad/videocommon/a$a;->a(Z)V

    .line 1375
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/j;->a()Lcom/tkay/expressad/videocommon/b/j;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "_"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "_"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3, v1}, Lcom/tkay/expressad/videocommon/b/j;->c(Ljava/lang/String;Z)V

    .line 1381
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "_"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface/range {p15 .. p15}, Lcom/tkay/expressad/reward/a/c$j;->a()V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_1
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    .line 1383
    monitor-exit p0

    return-void

    :cond_1
    move-object v10, v1

    .line 1400
    :goto_0
    :try_start_6
    invoke-virtual {v12, v10}, Lcom/tkay/expressad/videocommon/a$a;->a(Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;)V

    const/4 v1, 0x0

    if-eqz v14, :cond_2

    .line 1402
    invoke-virtual/range {p9 .. p9}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v2

    if-lez v2, :cond_2

    .line 1403
    new-instance v2, Lcom/tkay/expressad/video/signal/a/j;

    invoke-direct {v2, v1, v13, v14}, Lcom/tkay/expressad/video/signal/a/j;-><init>(Landroid/app/Activity;Lcom/tkay/expressad/foundation/d/c;Ljava/util/List;)V

    goto :goto_1

    .line 1405
    :cond_2
    new-instance v2, Lcom/tkay/expressad/video/signal/a/j;

    invoke-direct {v2, v1, v13}, Lcom/tkay/expressad/video/signal/a/j;-><init>(Landroid/app/Activity;Lcom/tkay/expressad/foundation/d/c;)V

    :goto_1
    move/from16 v1, p7

    move-object v9, v2

    .line 1407
    invoke-virtual {v9, v1}, Lcom/tkay/expressad/video/signal/a/j;->a(I)V

    .line 1408
    invoke-virtual {v9, v11}, Lcom/tkay/expressad/video/signal/a/j;->a(Ljava/lang/String;)V

    move-object/from16 v1, p14

    .line 1409
    invoke-virtual {v9, v1}, Lcom/tkay/expressad/video/signal/a/j;->a(Lcom/tkay/expressad/videocommon/e/d;)V

    move/from16 v1, p1

    .line 1410
    invoke-virtual {v9, v1}, Lcom/tkay/expressad/video/signal/a/j;->b(Z)V

    .line 1412
    new-instance v8, Lcom/tkay/expressad/reward/a/c$k;

    const/4 v3, 0x0

    move-object v1, v8

    move-object/from16 v2, p2

    move/from16 v4, p3

    move/from16 v5, p4

    move-object/from16 v6, p13

    move-object/from16 v7, p15

    move-object/from16 v18, v8

    move-object/from16 v8, p5

    move-object/from16 v19, v9

    move-object/from16 v9, p6

    move-object v0, v10

    move-object/from16 v10, p11

    move-object/from16 v11, p12

    move-object/from16 v13, p8

    move-object/from16 v14, p9

    move-wide/from16 v15, v16

    invoke-direct/range {v1 .. v16}, Lcom/tkay/expressad/reward/a/c$k;-><init>(Landroid/os/Handler;Ljava/lang/Runnable;ZZLjava/lang/String;Lcom/tkay/expressad/reward/a/c$j;Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/videocommon/a$a;Lcom/tkay/expressad/foundation/d/c;Ljava/util/concurrent/CopyOnWriteArrayList;J)V

    move-object/from16 v1, v18

    .line 1413
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setWebViewListener(Lcom/tkay/expressad/atsignalcommon/windvane/e;)V

    move-object/from16 v2, v19

    .line 1414
    invoke-virtual {v0, v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setObject(Ljava/lang/Object;)V

    move-object/from16 v1, p10

    .line 1415
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->loadUrl(Ljava/lang/String;)V

    move-object/from16 v1, p13

    .line 1416
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setRid(Ljava/lang/String;)V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_1
    .catchall {:try_start_6 .. :try_end_6} :catchall_1

    .line 1427
    monitor-exit p0

    return-void

    :catch_1
    move-exception v0

    .line 1421
    :try_start_7
    sget-boolean v1, Lcom/tkay/expressad/b;->a:Z

    if-eqz v1, :cond_3

    .line 1422
    invoke-virtual {v0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    .line 1425
    :cond_3
    invoke-virtual {v0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    move-result-object v0

    move-object/from16 v1, p15

    invoke-interface {v1, v0}, Lcom/tkay/expressad/reward/a/c$j;->a(Ljava/lang/String;)V
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_1

    .line 1428
    monitor-exit p0

    return-void

    :catchall_1
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final declared-synchronized a(ZLandroid/os/Handler;ZZLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILcom/tkay/expressad/foundation/d/c;Ljava/util/concurrent/CopyOnWriteArrayList;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/videocommon/e/d;Lcom/tkay/expressad/reward/a/c$j;)V
    .locals 24
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(Z",
            "Landroid/os/Handler;",
            "ZZ",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "I",
            "Lcom/tkay/expressad/foundation/d/c;",
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Lcom/tkay/expressad/videocommon/e/d;",
            "Lcom/tkay/expressad/reward/a/c$j;",
            ")V"
        }
    .end annotation

    move-object/from16 v1, p0

    move-object/from16 v0, p5

    move-object/from16 v15, p7

    move-object/from16 v14, p10

    move-object/from16 v13, p11

    monitor-enter p0

    const/4 v2, 0x0

    .line 1753
    :try_start_0
    iput-boolean v2, v1, Lcom/tkay/expressad/reward/a/c;->e:Z

    .line 1754
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v18

    .line 1755
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "_"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v9, p8

    invoke-virtual {v3, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1756
    iput-boolean v2, v1, Lcom/tkay/expressad/reward/a/c;->e:Z

    .line 1757
    invoke-static/range {p8 .. p8}, Lcom/tkay/expressad/foundation/h/t;->e(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 1759
    invoke-interface/range {p15 .. p15}, Lcom/tkay/expressad/reward/a/c$j;->a()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1761
    monitor-exit p0

    return-void

    .line 1770
    :cond_0
    :try_start_1
    new-instance v12, Lcom/tkay/expressad/videocommon/a$a;

    invoke-direct {v12}, Lcom/tkay/expressad/videocommon/a$a;-><init>()V

    .line 4076
    invoke-static {}, Lcom/tkay/expressad/reward/a/c$m;->a()Lcom/tkay/expressad/reward/a/c;

    move-result-object v3

    .line 1771
    invoke-direct {v3}, Lcom/tkay/expressad/reward/a/c;->d()Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    move-result-object v3

    if-nez v3, :cond_1

    .line 1773
    new-instance v3, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v4

    invoke-direct {v3, v4}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;-><init>(Landroid/content/Context;)V

    :cond_1
    move-object v11, v3

    .line 1775
    invoke-virtual {v12, v11}, Lcom/tkay/expressad/videocommon/a$a;->a(Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;)V

    .line 1776
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->b()Ljava/lang/String;

    move-result-object v10

    .line 1777
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->b()Ljava/lang/String;

    move-result-object v8

    .line 1778
    invoke-virtual {v12, v8}, Lcom/tkay/expressad/videocommon/a$a;->a(Ljava/lang/String;)V

    if-eqz v13, :cond_5

    .line 1781
    invoke-virtual/range {p11 .. p11}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v4

    if-lez v4, :cond_5

    .line 1782
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v4

    invoke-virtual {v4, v15}, Lcom/tkay/expressad/videocommon/b/c;->a(Ljava/lang/String;)Ljava/util/List;

    move-result-object v4

    if-eqz v4, :cond_4

    .line 1783
    invoke-interface {v4}, Ljava/util/List;->size()I

    move-result v5

    if-lez v5, :cond_4

    .line 1784
    :goto_0
    invoke-virtual/range {p11 .. p11}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v5

    if-ge v2, v5, :cond_4

    .line 1785
    invoke-virtual {v13, v2}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/tkay/expressad/foundation/d/c;

    .line 1786
    invoke-interface {v4}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v6

    :goto_1
    invoke-interface {v6}, Ljava/util/Iterator;->hasNext()Z

    move-result v7

    if-eqz v7, :cond_3

    invoke-interface {v6}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/tkay/expressad/foundation/d/c;

    .line 1787
    invoke-virtual {v7}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v3

    move-object/from16 v17, v4

    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-virtual {v7}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_2

    .line 1789
    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->au()V

    .line 1790
    invoke-virtual {v13, v2, v5}, Ljava/util/concurrent/CopyOnWriteArrayList;->set(ILjava/lang/Object;)Ljava/lang/Object;

    :cond_2
    move-object/from16 v4, v17

    goto :goto_1

    :cond_3
    move-object/from16 v17, v4

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 1795
    :cond_4
    new-instance v2, Lcom/tkay/expressad/video/signal/a/j;

    const/4 v3, 0x0

    invoke-direct {v2, v3, v14, v13}, Lcom/tkay/expressad/video/signal/a/j;-><init>(Landroid/app/Activity;Lcom/tkay/expressad/foundation/d/c;Ljava/util/List;)V

    goto :goto_2

    .line 1797
    :cond_5
    new-instance v2, Lcom/tkay/expressad/video/signal/a/j;

    const/4 v3, 0x0

    invoke-direct {v2, v3, v14}, Lcom/tkay/expressad/video/signal/a/j;-><init>(Landroid/app/Activity;Lcom/tkay/expressad/foundation/d/c;)V

    :goto_2
    move/from16 v6, p9

    move-object v7, v2

    .line 1799
    invoke-virtual {v7, v6}, Lcom/tkay/expressad/video/signal/a/j;->a(I)V

    move-object/from16 v2, p13

    .line 1800
    invoke-virtual {v7, v2}, Lcom/tkay/expressad/video/signal/a/j;->a(Ljava/lang/String;)V

    .line 1801
    invoke-virtual {v7, v8}, Lcom/tkay/expressad/video/signal/a/j;->c(Ljava/lang/String;)V

    .line 1802
    invoke-virtual {v7, v10}, Lcom/tkay/expressad/video/signal/a/j;->d(Ljava/lang/String;)V

    .line 1803
    invoke-virtual {v7}, Lcom/tkay/expressad/video/signal/a/j;->p()V

    move-object/from16 v4, p14

    .line 1804
    invoke-virtual {v7, v4}, Lcom/tkay/expressad/video/signal/a/j;->a(Lcom/tkay/expressad/videocommon/e/d;)V

    move/from16 v3, p1

    .line 1805
    invoke-virtual {v7, v3}, Lcom/tkay/expressad/video/signal/a/j;->b(Z)V

    .line 1807
    new-instance v2, Lcom/tkay/expressad/reward/a/c$b;

    const/4 v5, 0x0

    move-object/from16 p13, v2

    move/from16 v3, p1

    move-object/from16 v4, p2

    move/from16 v6, p3

    move-object/from16 v20, v7

    move/from16 v7, p4

    move-object/from16 v21, v8

    move/from16 v8, p9

    move-object/from16 v9, p8

    move-object/from16 v22, v10

    move-object/from16 v10, p6

    move-object/from16 v23, v11

    move-object/from16 v11, p7

    move-object/from16 v16, v12

    move-object/from16 v12, p5

    move-object/from16 v13, v16

    move-object/from16 v14, p10

    move-object/from16 v15, p11

    move-object/from16 v16, p14

    move-object/from16 v17, p15

    invoke-direct/range {v2 .. v19}, Lcom/tkay/expressad/reward/a/c$b;-><init>(ZLandroid/os/Handler;Ljava/lang/Runnable;ZZILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/videocommon/a$a;Lcom/tkay/expressad/foundation/d/c;Ljava/util/concurrent/CopyOnWriteArrayList;Lcom/tkay/expressad/videocommon/e/d;Lcom/tkay/expressad/reward/a/c$j;J)V

    move-object/from16 v3, v23

    .line 1808
    invoke-virtual {v3, v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setWebViewListener(Lcom/tkay/expressad/atsignalcommon/windvane/e;)V

    move-object/from16 v2, v20

    .line 1809
    invoke-virtual {v3, v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setObject(Ljava/lang/Object;)V

    move-object/from16 v2, p12

    .line 1810
    invoke-virtual {v3, v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->loadUrl(Ljava/lang/String;)V

    .line 1811
    invoke-virtual {v3, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setRid(Ljava/lang/String;)V

    .line 1816
    new-instance v2, Lcom/tkay/expressad/video/bt/module/TkayBTRootLayout;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v4

    invoke-direct {v2, v4}, Lcom/tkay/expressad/video/bt/module/TkayBTRootLayout;-><init>(Landroid/content/Context;)V

    .line 1817
    new-instance v4, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v5, -0x1

    invoke-direct {v4, v5, v5}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v2, v4}, Lcom/tkay/expressad/video/bt/module/TkayBTRootLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    move-object/from16 v4, v22

    .line 1818
    invoke-virtual {v2, v4}, Lcom/tkay/expressad/video/bt/module/TkayBTRootLayout;->setInstanceId(Ljava/lang/String;)V

    move-object/from16 v6, p7

    .line 1819
    invoke-virtual {v2, v6}, Lcom/tkay/expressad/video/bt/module/TkayBTRootLayout;->setUnitId(Ljava/lang/String;)V

    .line 1821
    new-instance v7, Lcom/tkay/expressad/video/bt/module/TkayBTLayout;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v8

    invoke-virtual {v8}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v8

    invoke-direct {v7, v8}, Lcom/tkay/expressad/video/bt/module/TkayBTLayout;-><init>(Landroid/content/Context;)V

    .line 1822
    new-instance v8, Landroid/widget/FrameLayout$LayoutParams;

    invoke-direct {v8, v5, v5}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v7, v8}, Lcom/tkay/expressad/video/bt/module/TkayBTLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    move-object/from16 v8, v21

    .line 1823
    invoke-virtual {v7, v8}, Lcom/tkay/expressad/video/bt/module/TkayBTLayout;->setInstanceId(Ljava/lang/String;)V

    .line 1824
    invoke-virtual {v7, v6}, Lcom/tkay/expressad/video/bt/module/TkayBTLayout;->setUnitId(Ljava/lang/String;)V

    .line 1825
    invoke-virtual {v7, v3}, Lcom/tkay/expressad/video/bt/module/TkayBTLayout;->setWebView(Landroid/webkit/WebView;)V

    .line 1826
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v3

    invoke-virtual {v3, v6, v0}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v0

    .line 1827
    invoke-virtual {v0, v8, v7}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1828
    invoke-virtual {v0, v4, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1829
    new-instance v0, Landroid/widget/FrameLayout$LayoutParams;

    invoke-direct {v0, v5, v5}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v2, v7, v0}, Lcom/tkay/expressad/video/bt/module/TkayBTRootLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1837
    monitor-exit p0

    return-void

    :catch_0
    move-exception v0

    .line 1832
    :try_start_2
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v2

    move-object/from16 v3, p15

    invoke-interface {v3, v2}, Lcom/tkay/expressad/reward/a/c$j;->a(Ljava/lang/String;)V

    .line 1834
    sget-boolean v2, Lcom/tkay/expressad/b;->a:Z

    if-eqz v2, :cond_6

    .line 1835
    invoke-virtual {v0}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 1838
    :cond_6
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method
