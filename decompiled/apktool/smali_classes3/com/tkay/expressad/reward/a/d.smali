.class public final Lcom/tkay/expressad/reward/a/d;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/reward/a/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/reward/a/d$b;,
        Lcom/tkay/expressad/reward/a/d$c;,
        Lcom/tkay/expressad/reward/a/d$e;,
        Lcom/tkay/expressad/reward/a/d$i;,
        Lcom/tkay/expressad/reward/a/d$f;,
        Lcom/tkay/expressad/reward/a/d$d;,
        Lcom/tkay/expressad/reward/a/d$j;,
        Lcom/tkay/expressad/reward/a/d$a;,
        Lcom/tkay/expressad/reward/a/d$h;,
        Lcom/tkay/expressad/reward/a/d$g;
    }
.end annotation


# static fields
.field private static final L:I = 0x8

.field private static final M:I = 0x9

.field private static final N:I = 0x10

.field private static final O:I = 0x11

.field private static final P:I = 0x1388

.field private static final Q:I = 0x7530

.field public static final a:Ljava/lang/String; = "APP ALREADY INSTALLED"

.field public static final b:Ljava/lang/String; = "Offer list is empty"

.field public static final d:Ljava/lang/String; = "1"

.field public static final e:Ljava/lang/String; = "1"

.field public static final f:I = 0x1

.field public static final g:I = 0x2

.field public static final h:I = 0x3

.field public static final i:I = 0x4

.field public static final j:I = 0x5

.field public static final k:I = 0x6

.field public static final l:I = 0x7

.field private static final u:Ljava/lang/String; = "RewardMVVideoAdapter"


# instance fields
.field private A:I

.field private B:I

.field private C:Z

.field private D:Ljava/lang/String;

.field private E:Ljava/lang/String;

.field private F:Lcom/tkay/expressad/video/bt/module/b/h;

.field private volatile G:Lcom/tkay/expressad/reward/a/b;

.field private H:Ljava/lang/Runnable;

.field private I:Lcom/tkay/expressad/videocommon/e/d;

.field private J:Z

.field private K:Z

.field private R:Ljava/util/concurrent/CopyOnWriteArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation
.end field

.field private S:I

.field private T:Z

.field private U:Z

.field private V:Ljava/lang/String;

.field private W:I

.field private X:I

.field private Y:I

.field private Z:Lcom/tkay/expressad/foundation/d/d;

.field private aa:Ljava/util/concurrent/CopyOnWriteArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation
.end field

.field private ab:Z

.field private ac:J

.field private ad:Landroid/os/Handler;

.field private ae:J

.field private af:Ljava/lang/String;

.field private ag:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation
.end field

.field private ah:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation
.end field

.field public c:Ljava/lang/Object;

.field public m:Ljava/lang/String;

.field public n:Ljava/lang/String;

.field o:Z

.field volatile p:Z

.field volatile q:Z

.field volatile r:Z

.field volatile s:Z

.field volatile t:Z

.field private v:Landroid/content/Context;

.field private w:Ljava/lang/String;

.field private x:Ljava/lang/String;

.field private y:I

.field private z:I


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 6

    .line 1076
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 110
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/a/d;->J:Z

    .line 114
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/a/d;->K:Z

    .line 115
    new-instance v1, Ljava/lang/Object;

    invoke-direct {v1}, Ljava/lang/Object;-><init>()V

    iput-object v1, p0, Lcom/tkay/expressad/reward/a/d;->c:Ljava/lang/Object;

    .line 159
    new-instance v1, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v1}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object v1, p0, Lcom/tkay/expressad/reward/a/d;->R:Ljava/util/concurrent/CopyOnWriteArrayList;

    const/4 v1, 0x2

    .line 161
    iput v1, p0, Lcom/tkay/expressad/reward/a/d;->S:I

    const-string v1, ""

    .line 164
    iput-object v1, p0, Lcom/tkay/expressad/reward/a/d;->V:Ljava/lang/String;

    .line 171
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/a/d;->ab:Z

    .line 172
    iput-object v1, p0, Lcom/tkay/expressad/reward/a/d;->m:Ljava/lang/String;

    .line 173
    iput-object v1, p0, Lcom/tkay/expressad/reward/a/d;->n:Ljava/lang/String;

    const-wide/16 v2, 0x0

    .line 175
    iput-wide v2, p0, Lcom/tkay/expressad/reward/a/d;->ac:J

    .line 223
    new-instance v4, Lcom/tkay/expressad/reward/a/d$1;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v5

    invoke-direct {v4, p0, v5}, Lcom/tkay/expressad/reward/a/d$1;-><init>(Lcom/tkay/expressad/reward/a/d;Landroid/os/Looper;)V

    iput-object v4, p0, Lcom/tkay/expressad/reward/a/d;->ad:Landroid/os/Handler;

    .line 1110
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/a/d;->o:Z

    .line 1517
    iput-wide v2, p0, Lcom/tkay/expressad/reward/a/d;->ae:J

    .line 1849
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/a/d;->p:Z

    .line 1850
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/a/d;->q:Z

    .line 1851
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/a/d;->r:Z

    .line 1852
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/a/d;->s:Z

    .line 1853
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/a/d;->t:Z

    .line 1856
    iput-object v1, p0, Lcom/tkay/expressad/reward/a/d;->af:Ljava/lang/String;

    .line 1078
    :try_start_0
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/reward/a/d;->v:Landroid/content/Context;

    .line 1079
    iput-object p3, p0, Lcom/tkay/expressad/reward/a/d;->w:Ljava/lang/String;

    .line 1080
    iput-object p2, p0, Lcom/tkay/expressad/reward/a/d;->x:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 1082
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/reward/a/d;)Ljava/lang/String;
    .locals 0

    .line 60
    iget-object p0, p0, Lcom/tkay/expressad/reward/a/d;->D:Ljava/lang/String;

    return-object p0
.end method

.method private a(Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/util/List;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/videocommon/e/d;)V
    .locals 17
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;",
            "Ljava/lang/String;",
            "Lcom/tkay/expressad/foundation/d/c;",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Lcom/tkay/expressad/videocommon/e/d;",
            ")V"
        }
    .end annotation

    move-object/from16 v12, p0

    move-object/from16 v0, p3

    move-object/from16 v6, p4

    .line 761
    :try_start_0
    new-instance v13, Lcom/tkay/expressad/videocommon/a$a;

    invoke-direct {v13}, Lcom/tkay/expressad/videocommon/a$a;-><init>()V

    .line 762
    new-instance v14, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v14, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;-><init>(Landroid/content/Context;)V

    .line 763
    invoke-virtual {v13, v14}, Lcom/tkay/expressad/videocommon/a$a;->a(Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;)V

    const/4 v1, 0x0

    if-eqz v6, :cond_0

    .line 765
    invoke-interface/range {p4 .. p4}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_0

    .line 766
    new-instance v2, Lcom/tkay/expressad/video/signal/a/j;

    invoke-direct {v2, v1, v0, v6}, Lcom/tkay/expressad/video/signal/a/j;-><init>(Landroid/app/Activity;Lcom/tkay/expressad/foundation/d/c;Ljava/util/List;)V

    goto :goto_0

    .line 768
    :cond_0
    new-instance v2, Lcom/tkay/expressad/video/signal/a/j;

    invoke-direct {v2, v1, v0}, Lcom/tkay/expressad/video/signal/a/j;-><init>(Landroid/app/Activity;Lcom/tkay/expressad/foundation/d/c;)V

    :goto_0
    move-object v15, v2

    .line 770
    iget v1, v12, Lcom/tkay/expressad/reward/a/d;->S:I

    invoke-virtual {v15, v1}, Lcom/tkay/expressad/video/signal/a/j;->a(I)V

    move-object/from16 v11, p6

    .line 771
    invoke-virtual {v15, v11}, Lcom/tkay/expressad/video/signal/a/j;->a(Ljava/lang/String;)V

    move-object/from16 v9, p7

    .line 772
    invoke-virtual {v15, v9}, Lcom/tkay/expressad/video/signal/a/j;->a(Lcom/tkay/expressad/videocommon/e/d;)V

    .line 773
    iget-boolean v1, v12, Lcom/tkay/expressad/reward/a/d;->ab:Z

    invoke-virtual {v15, v1}, Lcom/tkay/expressad/video/signal/a/j;->b(Z)V

    .line 774
    new-instance v10, Lcom/tkay/expressad/reward/a/d$h;

    iget v8, v12, Lcom/tkay/expressad/reward/a/d;->S:I

    move-object v1, v10

    move-object/from16 v2, p0

    move-object/from16 v3, p1

    move-object/from16 v4, p6

    move-object/from16 v5, p3

    move-object/from16 v6, p4

    move-object/from16 v7, p5

    move/from16 v16, v8

    move-object/from16 v8, p6

    move-object/from16 v9, p7

    move-object/from16 p4, v10

    move/from16 v10, v16

    move-object/from16 v11, p0

    invoke-direct/range {v1 .. v11}, Lcom/tkay/expressad/reward/a/d$h;-><init>(Lcom/tkay/expressad/reward/a/d;Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/util/List;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/videocommon/e/d;ILcom/tkay/expressad/reward/a/d;)V

    .line 775
    new-instance v10, Lcom/tkay/expressad/reward/a/d$j;

    iget-object v9, v12, Lcom/tkay/expressad/reward/a/d;->ad:Landroid/os/Handler;

    move-object v1, v10

    move-object/from16 v2, p1

    move-object/from16 v3, p2

    move-object/from16 v4, p6

    move-object v5, v13

    move-object/from16 v6, p3

    move-object/from16 v7, p0

    move-object/from16 v8, p4

    invoke-direct/range {v1 .. v9}, Lcom/tkay/expressad/reward/a/d$j;-><init>(Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/videocommon/a$a;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/reward/a/d;Lcom/tkay/expressad/reward/a/d$h;Landroid/os/Handler;)V

    .line 776
    invoke-virtual {v14, v10}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setWebViewListener(Lcom/tkay/expressad/atsignalcommon/windvane/e;)V

    .line 777
    invoke-virtual {v14, v15}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setObject(Ljava/lang/Object;)V

    move-object/from16 v0, p5

    .line 778
    invoke-virtual {v14, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->loadUrl(Ljava/lang/String;)V

    .line 779
    iget-object v0, v12, Lcom/tkay/expressad/reward/a/d;->ad:Landroid/os/Handler;

    const-wide/16 v1, 0x1388

    move-object/from16 v3, p4

    invoke-virtual {v0, v3, v1, v2}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    .line 785
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void

    :catch_0
    move-exception v0

    .line 781
    sget-boolean v1, Lcom/tkay/expressad/b;->a:Z

    if-eqz v1, :cond_1

    .line 782
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    return-void
.end method

.method private a(Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/videocommon/e/d;)V
    .locals 4

    .line 2967
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x5

    new-array v0, v0, [Ljava/lang/Object;

    .line 2970
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v1

    invoke-virtual {v1, p2}, Lcom/tkay/expressad/videocommon/b/g;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 2971
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v2

    const/16 v3, 0x10

    .line 2972
    iput v3, v2, Landroid/os/Message;->what:I

    const/4 v3, 0x0

    aput-object p1, v0, v3

    const/4 p1, 0x1

    aput-object v1, v0, p1

    const/4 p1, 0x2

    aput-object p3, v0, p1

    const/4 p1, 0x3

    aput-object p4, v0, p1

    const/4 p1, 0x4

    aput-object p2, v0, p1

    .line 2978
    iput-object v0, v2, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 2979
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d;->ad:Landroid/os/Handler;

    if-eqz p1, :cond_0

    .line 2980
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d;->ad:Landroid/os/Handler;

    invoke-virtual {p1, v2}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/reward/a/d;Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/util/List;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/videocommon/e/d;)V
    .locals 17

    move-object/from16 v0, p0

    move-object/from16 v12, p3

    move-object/from16 v6, p4

    .line 24761
    :try_start_0
    new-instance v13, Lcom/tkay/expressad/videocommon/a$a;

    invoke-direct {v13}, Lcom/tkay/expressad/videocommon/a$a;-><init>()V

    .line 24762
    new-instance v14, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v14, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;-><init>(Landroid/content/Context;)V

    .line 24763
    invoke-virtual {v13, v14}, Lcom/tkay/expressad/videocommon/a$a;->a(Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;)V

    const/4 v1, 0x0

    if-eqz v6, :cond_0

    .line 24765
    invoke-interface/range {p4 .. p4}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_0

    .line 24766
    new-instance v2, Lcom/tkay/expressad/video/signal/a/j;

    invoke-direct {v2, v1, v12, v6}, Lcom/tkay/expressad/video/signal/a/j;-><init>(Landroid/app/Activity;Lcom/tkay/expressad/foundation/d/c;Ljava/util/List;)V

    goto :goto_0

    .line 24768
    :cond_0
    new-instance v2, Lcom/tkay/expressad/video/signal/a/j;

    invoke-direct {v2, v1, v12}, Lcom/tkay/expressad/video/signal/a/j;-><init>(Landroid/app/Activity;Lcom/tkay/expressad/foundation/d/c;)V

    :goto_0
    move-object v15, v2

    .line 24770
    iget v1, v0, Lcom/tkay/expressad/reward/a/d;->S:I

    invoke-virtual {v15, v1}, Lcom/tkay/expressad/video/signal/a/j;->a(I)V

    move-object/from16 v11, p6

    .line 24771
    invoke-virtual {v15, v11}, Lcom/tkay/expressad/video/signal/a/j;->a(Ljava/lang/String;)V

    move-object/from16 v9, p7

    .line 24772
    invoke-virtual {v15, v9}, Lcom/tkay/expressad/video/signal/a/j;->a(Lcom/tkay/expressad/videocommon/e/d;)V

    .line 24773
    iget-boolean v1, v0, Lcom/tkay/expressad/reward/a/d;->ab:Z

    invoke-virtual {v15, v1}, Lcom/tkay/expressad/video/signal/a/j;->b(Z)V

    .line 24774
    new-instance v10, Lcom/tkay/expressad/reward/a/d$h;

    iget v8, v0, Lcom/tkay/expressad/reward/a/d;->S:I

    move-object v1, v10

    move-object/from16 v2, p0

    move-object/from16 v3, p1

    move-object/from16 v4, p6

    move-object/from16 v5, p3

    move-object/from16 v6, p4

    move-object/from16 v7, p5

    move/from16 v16, v8

    move-object/from16 v8, p6

    move-object/from16 v9, p7

    move-object/from16 p4, v10

    move/from16 v10, v16

    move-object/from16 v11, p0

    invoke-direct/range {v1 .. v11}, Lcom/tkay/expressad/reward/a/d$h;-><init>(Lcom/tkay/expressad/reward/a/d;Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/util/List;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/videocommon/e/d;ILcom/tkay/expressad/reward/a/d;)V

    .line 24775
    new-instance v10, Lcom/tkay/expressad/reward/a/d$j;

    iget-object v9, v0, Lcom/tkay/expressad/reward/a/d;->ad:Landroid/os/Handler;

    move-object v1, v10

    move-object/from16 v2, p1

    move-object/from16 v3, p2

    move-object/from16 v4, p6

    move-object v5, v13

    move-object/from16 v6, p3

    move-object/from16 v7, p0

    move-object/from16 v8, p4

    invoke-direct/range {v1 .. v9}, Lcom/tkay/expressad/reward/a/d$j;-><init>(Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/videocommon/a$a;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/reward/a/d;Lcom/tkay/expressad/reward/a/d$h;Landroid/os/Handler;)V

    .line 24776
    invoke-virtual {v14, v10}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setWebViewListener(Lcom/tkay/expressad/atsignalcommon/windvane/e;)V

    .line 24777
    invoke-virtual {v14, v15}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setObject(Ljava/lang/Object;)V

    move-object/from16 v1, p5

    .line 24778
    invoke-virtual {v14, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->loadUrl(Ljava/lang/String;)V

    .line 24779
    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d;->ad:Landroid/os/Handler;

    const-wide/16 v1, 0x1388

    move-object/from16 v3, p4

    invoke-virtual {v0, v3, v1, v2}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    .line 24785
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void

    :catch_0
    move-exception v0

    .line 24781
    sget-boolean v1, Lcom/tkay/expressad/b;->a:Z

    if-eqz v1, :cond_1

    .line 24782
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/reward/a/d;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/videocommon/e/d;)V
    .locals 0

    .line 60
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/tkay/expressad/reward/a/d;->a(Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/videocommon/e/d;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/reward/a/d;Ljava/lang/String;)V
    .locals 0

    .line 60
    invoke-direct {p0, p1}, Lcom/tkay/expressad/reward/a/d;->b(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/reward/a/d;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/videocommon/e/d;)V
    .locals 16

    move-object/from16 v0, p0

    move-object/from16 v10, p2

    .line 25728
    :try_start_0
    new-instance v11, Lcom/tkay/expressad/videocommon/a$a;

    invoke-direct {v11}, Lcom/tkay/expressad/videocommon/a$a;-><init>()V

    .line 25729
    new-instance v12, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v12, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;-><init>(Landroid/content/Context;)V

    .line 25730
    invoke-virtual {v11, v12}, Lcom/tkay/expressad/videocommon/a$a;->a(Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;)V

    .line 25731
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->b()Ljava/lang/String;

    move-result-object v1

    .line 25732
    invoke-virtual {v11, v1}, Lcom/tkay/expressad/videocommon/a$a;->a(Ljava/lang/String;)V

    .line 25734
    iget-object v2, v0, Lcom/tkay/expressad/reward/a/d;->Z:Lcom/tkay/expressad/foundation/d/d;

    const/4 v3, 0x0

    if-eqz v2, :cond_0

    iget-object v2, v0, Lcom/tkay/expressad/reward/a/d;->Z:Lcom/tkay/expressad/foundation/d/d;

    .line 26374
    iget-object v2, v2, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    if-eqz v2, :cond_0

    .line 25734
    iget-object v2, v0, Lcom/tkay/expressad/reward/a/d;->Z:Lcom/tkay/expressad/foundation/d/d;

    .line 27374
    iget-object v2, v2, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    .line 25734
    invoke-virtual {v2}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-lez v2, :cond_0

    .line 25735
    new-instance v2, Lcom/tkay/expressad/video/signal/a/j;

    iget-object v4, v0, Lcom/tkay/expressad/reward/a/d;->Z:Lcom/tkay/expressad/foundation/d/d;

    .line 28374
    iget-object v4, v4, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    .line 25735
    invoke-direct {v2, v3, v10, v4}, Lcom/tkay/expressad/video/signal/a/j;-><init>(Landroid/app/Activity;Lcom/tkay/expressad/foundation/d/c;Ljava/util/List;)V

    goto :goto_0

    .line 25737
    :cond_0
    new-instance v2, Lcom/tkay/expressad/video/signal/a/j;

    invoke-direct {v2, v3, v10}, Lcom/tkay/expressad/video/signal/a/j;-><init>(Landroid/app/Activity;Lcom/tkay/expressad/foundation/d/c;)V

    :goto_0
    move-object v13, v2

    .line 25739
    iget v2, v0, Lcom/tkay/expressad/reward/a/d;->S:I

    invoke-virtual {v13, v2}, Lcom/tkay/expressad/video/signal/a/j;->a(I)V

    move-object/from16 v14, p4

    .line 25740
    invoke-virtual {v13, v14}, Lcom/tkay/expressad/video/signal/a/j;->a(Ljava/lang/String;)V

    .line 25741
    invoke-virtual {v13, v1}, Lcom/tkay/expressad/video/signal/a/j;->c(Ljava/lang/String;)V

    move-object/from16 v7, p5

    .line 25742
    invoke-virtual {v13, v7}, Lcom/tkay/expressad/video/signal/a/j;->a(Lcom/tkay/expressad/videocommon/e/d;)V

    .line 25743
    iget-boolean v1, v0, Lcom/tkay/expressad/reward/a/d;->ab:Z

    invoke-virtual {v13, v1}, Lcom/tkay/expressad/video/signal/a/j;->b(Z)V

    .line 25744
    new-instance v15, Lcom/tkay/expressad/reward/a/d$g;

    iget v8, v0, Lcom/tkay/expressad/reward/a/d;->S:I

    move-object v1, v15

    move-object/from16 v2, p0

    move-object/from16 v3, p4

    move-object/from16 v4, p2

    move-object/from16 v5, p3

    move-object/from16 v6, p4

    move-object/from16 v7, p5

    move-object/from16 v9, p0

    invoke-direct/range {v1 .. v9}, Lcom/tkay/expressad/reward/a/d$g;-><init>(Lcom/tkay/expressad/reward/a/d;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/videocommon/e/d;ILcom/tkay/expressad/reward/a/d;)V

    .line 25745
    new-instance v9, Lcom/tkay/expressad/reward/a/d$a;

    iget-object v8, v0, Lcom/tkay/expressad/reward/a/d;->ad:Landroid/os/Handler;

    move-object v1, v9

    move-object/from16 v2, p1

    move-object/from16 v3, p4

    move-object v4, v11

    move-object/from16 v5, p2

    move-object/from16 v6, p0

    move-object v7, v15

    invoke-direct/range {v1 .. v8}, Lcom/tkay/expressad/reward/a/d$a;-><init>(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/videocommon/a$a;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/reward/a/d;Lcom/tkay/expressad/reward/a/d$g;Landroid/os/Handler;)V

    .line 25746
    invoke-virtual {v12, v9}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setWebViewListener(Lcom/tkay/expressad/atsignalcommon/windvane/e;)V

    .line 25747
    invoke-virtual {v12, v13}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setObject(Ljava/lang/Object;)V

    move-object/from16 v1, p3

    .line 25748
    invoke-virtual {v12, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->loadUrl(Ljava/lang/String;)V

    .line 25749
    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d;->ad:Landroid/os/Handler;

    const-wide/16 v1, 0x1388

    invoke-virtual {v0, v15, v1, v2}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    .line 25755
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void

    :catch_0
    move-exception v0

    .line 25751
    sget-boolean v1, Lcom/tkay/expressad/b;->a:Z

    if-eqz v1, :cond_1

    .line 25752
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/reward/a/d;Ljava/lang/String;Ljava/lang/String;)V
    .locals 7

    const/4 v0, 0x5

    .line 28626
    :try_start_0
    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d;->R:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v1, :cond_7

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_7

    .line 28627
    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d;->R:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v1}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_5

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/foundation/d/c;

    if-eqz v2, :cond_0

    .line 28629
    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v3

    .line 28630
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_1

    invoke-virtual {p2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_1

    .line 28631
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d;->R:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {p2, v2}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z

    goto :goto_0

    .line 28636
    :cond_1
    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v3

    .line 28637
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_2

    invoke-virtual {p2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_2

    .line 28638
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d;->R:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {p2, v2}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z

    goto :goto_0

    .line 28643
    :cond_2
    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v3

    if-eqz v3, :cond_0

    .line 28645
    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c$c;->f()Ljava/util/List;

    move-result-object v4

    if-eqz v4, :cond_4

    .line 28647
    invoke-interface {v4}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v4

    :cond_3
    invoke-interface {v4}, Ljava/util/Iterator;->hasNext()Z

    move-result v5

    if-eqz v5, :cond_4

    invoke-interface {v4}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/tkay/expressad/foundation/d/c$c$a;

    if-eqz v5, :cond_3

    .line 28648
    iget-object v6, v5, Lcom/tkay/expressad/foundation/d/c$c$a;->b:Ljava/util/List;

    if-eqz v6, :cond_3

    .line 28649
    iget-object v5, v5, Lcom/tkay/expressad/foundation/d/c$c$a;->b:Ljava/util/List;

    invoke-interface {v5, p2}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_3

    .line 28650
    iget-object v4, p0, Lcom/tkay/expressad/reward/a/d;->R:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v4, v2}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z

    .line 28658
    :cond_4
    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v3

    .line 28659
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_0

    invoke-virtual {p2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 28660
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d;->R:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {p2, v2}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z

    .line 28668
    :cond_5
    :goto_0
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d;->G:Lcom/tkay/expressad/reward/a/b;

    if-eqz p2, :cond_9

    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d;->R:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz p2, :cond_9

    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d;->R:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {p2}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result p2

    if-nez p2, :cond_9

    .line 28669
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d;->ad:Landroid/os/Handler;

    if-eqz p2, :cond_6

    .line 28670
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d;->ad:Landroid/os/Handler;

    invoke-virtual {p2, v0}, Landroid/os/Handler;->removeMessages(I)V

    .line 28673
    :cond_6
    invoke-direct {p0, p1}, Lcom/tkay/expressad/reward/a/d;->b(Ljava/lang/String;)V

    .line 28674
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d;->G:Lcom/tkay/expressad/reward/a/b;

    invoke-interface {p2, p1}, Lcom/tkay/expressad/reward/a/b;->a(Ljava/lang/String;)V

    return-void

    .line 28678
    :cond_7
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d;->G:Lcom/tkay/expressad/reward/a/b;

    if-eqz p2, :cond_9

    .line 28679
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d;->ad:Landroid/os/Handler;

    if-eqz p2, :cond_8

    .line 28680
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d;->ad:Landroid/os/Handler;

    invoke-virtual {p2, v0}, Landroid/os/Handler;->removeMessages(I)V

    .line 28683
    :cond_8
    invoke-direct {p0, p1}, Lcom/tkay/expressad/reward/a/d;->b(Ljava/lang/String;)V

    .line 28684
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d;->G:Lcom/tkay/expressad/reward/a/b;

    invoke-interface {p2, p1}, Lcom/tkay/expressad/reward/a/b;->a(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_9
    return-void

    :catchall_0
    move-exception p2

    .line 28689
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    .line 28691
    :try_start_1
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d;->G:Lcom/tkay/expressad/reward/a/b;

    if-eqz p2, :cond_b

    .line 28692
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d;->ad:Landroid/os/Handler;

    if-eqz p2, :cond_a

    .line 28693
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d;->ad:Landroid/os/Handler;

    invoke-virtual {p2, v0}, Landroid/os/Handler;->removeMessages(I)V

    .line 28696
    :cond_a
    invoke-direct {p0, p1}, Lcom/tkay/expressad/reward/a/d;->b(Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :cond_b
    return-void

    :catchall_1
    move-exception p0

    .line 28699
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/reward/a/d;Ljava/util/List;)V
    .locals 3

    .line 29677
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d;->v:Landroid/content/Context;

    if-eqz v0, :cond_2

    if-eqz p1, :cond_2

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_0

    goto :goto_1

    :cond_0
    const/4 v0, 0x0

    .line 29685
    :goto_0
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    if-ge v0, v1, :cond_2

    .line 29686
    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/foundation/d/c;

    if-eqz v1, :cond_1

    .line 29689
    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d;->v:Landroid/content/Context;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->ba()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/tkay/expressad/foundation/h/t;->a(Landroid/content/Context;Ljava/lang/String;)Z

    :cond_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_2
    :goto_1
    return-void
.end method

.method private a(Ljava/lang/Runnable;)V
    .locals 0

    .line 1846
    iput-object p1, p0, Lcom/tkay/expressad/reward/a/d;->H:Ljava/lang/Runnable;

    return-void
.end method

.method private a(Ljava/lang/String;)V
    .locals 0

    .line 186
    iput-object p1, p0, Lcom/tkay/expressad/reward/a/d;->V:Ljava/lang/String;

    return-void
.end method

.method private a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/videocommon/e/d;)V
    .locals 16

    move-object/from16 v10, p0

    move-object/from16 v0, p2

    .line 728
    :try_start_0
    new-instance v11, Lcom/tkay/expressad/videocommon/a$a;

    invoke-direct {v11}, Lcom/tkay/expressad/videocommon/a$a;-><init>()V

    .line 729
    new-instance v12, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v12, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;-><init>(Landroid/content/Context;)V

    .line 730
    invoke-virtual {v11, v12}, Lcom/tkay/expressad/videocommon/a$a;->a(Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;)V

    .line 731
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->b()Ljava/lang/String;

    move-result-object v1

    .line 732
    invoke-virtual {v11, v1}, Lcom/tkay/expressad/videocommon/a$a;->a(Ljava/lang/String;)V

    .line 734
    iget-object v2, v10, Lcom/tkay/expressad/reward/a/d;->Z:Lcom/tkay/expressad/foundation/d/d;

    const/4 v3, 0x0

    if-eqz v2, :cond_0

    iget-object v2, v10, Lcom/tkay/expressad/reward/a/d;->Z:Lcom/tkay/expressad/foundation/d/d;

    .line 4374
    iget-object v2, v2, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    if-eqz v2, :cond_0

    .line 734
    iget-object v2, v10, Lcom/tkay/expressad/reward/a/d;->Z:Lcom/tkay/expressad/foundation/d/d;

    .line 5374
    iget-object v2, v2, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    .line 734
    invoke-virtual {v2}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-lez v2, :cond_0

    .line 735
    new-instance v2, Lcom/tkay/expressad/video/signal/a/j;

    iget-object v4, v10, Lcom/tkay/expressad/reward/a/d;->Z:Lcom/tkay/expressad/foundation/d/d;

    .line 6374
    iget-object v4, v4, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    .line 735
    invoke-direct {v2, v3, v0, v4}, Lcom/tkay/expressad/video/signal/a/j;-><init>(Landroid/app/Activity;Lcom/tkay/expressad/foundation/d/c;Ljava/util/List;)V

    goto :goto_0

    .line 737
    :cond_0
    new-instance v2, Lcom/tkay/expressad/video/signal/a/j;

    invoke-direct {v2, v3, v0}, Lcom/tkay/expressad/video/signal/a/j;-><init>(Landroid/app/Activity;Lcom/tkay/expressad/foundation/d/c;)V

    :goto_0
    move-object v13, v2

    .line 739
    iget v2, v10, Lcom/tkay/expressad/reward/a/d;->S:I

    invoke-virtual {v13, v2}, Lcom/tkay/expressad/video/signal/a/j;->a(I)V

    move-object/from16 v14, p4

    .line 740
    invoke-virtual {v13, v14}, Lcom/tkay/expressad/video/signal/a/j;->a(Ljava/lang/String;)V

    .line 741
    invoke-virtual {v13, v1}, Lcom/tkay/expressad/video/signal/a/j;->c(Ljava/lang/String;)V

    move-object/from16 v7, p5

    .line 742
    invoke-virtual {v13, v7}, Lcom/tkay/expressad/video/signal/a/j;->a(Lcom/tkay/expressad/videocommon/e/d;)V

    .line 743
    iget-boolean v1, v10, Lcom/tkay/expressad/reward/a/d;->ab:Z

    invoke-virtual {v13, v1}, Lcom/tkay/expressad/video/signal/a/j;->b(Z)V

    .line 744
    new-instance v15, Lcom/tkay/expressad/reward/a/d$g;

    iget v8, v10, Lcom/tkay/expressad/reward/a/d;->S:I

    move-object v1, v15

    move-object/from16 v2, p0

    move-object/from16 v3, p4

    move-object/from16 v4, p2

    move-object/from16 v5, p3

    move-object/from16 v6, p4

    move-object/from16 v7, p5

    move-object/from16 v9, p0

    invoke-direct/range {v1 .. v9}, Lcom/tkay/expressad/reward/a/d$g;-><init>(Lcom/tkay/expressad/reward/a/d;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/videocommon/e/d;ILcom/tkay/expressad/reward/a/d;)V

    .line 745
    new-instance v9, Lcom/tkay/expressad/reward/a/d$a;

    iget-object v8, v10, Lcom/tkay/expressad/reward/a/d;->ad:Landroid/os/Handler;

    move-object v1, v9

    move-object/from16 v2, p1

    move-object/from16 v3, p4

    move-object v4, v11

    move-object/from16 v5, p2

    move-object/from16 v6, p0

    move-object v7, v15

    invoke-direct/range {v1 .. v8}, Lcom/tkay/expressad/reward/a/d$a;-><init>(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/videocommon/a$a;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/reward/a/d;Lcom/tkay/expressad/reward/a/d$g;Landroid/os/Handler;)V

    .line 746
    invoke-virtual {v12, v9}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setWebViewListener(Lcom/tkay/expressad/atsignalcommon/windvane/e;)V

    .line 747
    invoke-virtual {v12, v13}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setObject(Ljava/lang/Object;)V

    move-object/from16 v0, p3

    .line 748
    invoke-virtual {v12, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->loadUrl(Ljava/lang/String;)V

    .line 749
    iget-object v0, v10, Lcom/tkay/expressad/reward/a/d;->ad:Landroid/os/Handler;

    const-wide/16 v1, 0x1388

    invoke-virtual {v0, v15, v1, v2}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    .line 755
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void

    :catch_0
    move-exception v0

    .line 751
    sget-boolean v1, Lcom/tkay/expressad/b;->a:Z

    if-eqz v1, :cond_1

    .line 752
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    return-void
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 7

    const/4 v0, 0x5

    .line 2626
    :try_start_0
    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d;->R:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v1, :cond_7

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_7

    .line 2627
    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d;->R:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v1}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_5

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/foundation/d/c;

    if-eqz v2, :cond_0

    .line 2629
    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v3

    .line 2630
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_1

    invoke-virtual {p2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_1

    .line 2631
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d;->R:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {p2, v2}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z

    goto :goto_0

    .line 2636
    :cond_1
    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v3

    .line 2637
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_2

    invoke-virtual {p2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_2

    .line 2638
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d;->R:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {p2, v2}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z

    goto :goto_0

    .line 2643
    :cond_2
    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v3

    if-eqz v3, :cond_0

    .line 2645
    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c$c;->f()Ljava/util/List;

    move-result-object v4

    if-eqz v4, :cond_4

    .line 2647
    invoke-interface {v4}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v4

    :cond_3
    invoke-interface {v4}, Ljava/util/Iterator;->hasNext()Z

    move-result v5

    if-eqz v5, :cond_4

    invoke-interface {v4}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/tkay/expressad/foundation/d/c$c$a;

    if-eqz v5, :cond_3

    .line 2648
    iget-object v6, v5, Lcom/tkay/expressad/foundation/d/c$c$a;->b:Ljava/util/List;

    if-eqz v6, :cond_3

    .line 2649
    iget-object v5, v5, Lcom/tkay/expressad/foundation/d/c$c$a;->b:Ljava/util/List;

    invoke-interface {v5, p2}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_3

    .line 2650
    iget-object v4, p0, Lcom/tkay/expressad/reward/a/d;->R:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v4, v2}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z

    .line 2658
    :cond_4
    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v3

    .line 2659
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_0

    invoke-virtual {p2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 2660
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d;->R:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {p2, v2}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z

    .line 2668
    :cond_5
    :goto_0
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d;->G:Lcom/tkay/expressad/reward/a/b;

    if-eqz p2, :cond_9

    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d;->R:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz p2, :cond_9

    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d;->R:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {p2}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result p2

    if-nez p2, :cond_9

    .line 2669
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d;->ad:Landroid/os/Handler;

    if-eqz p2, :cond_6

    .line 2670
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d;->ad:Landroid/os/Handler;

    invoke-virtual {p2, v0}, Landroid/os/Handler;->removeMessages(I)V

    .line 2673
    :cond_6
    invoke-direct {p0, p1}, Lcom/tkay/expressad/reward/a/d;->b(Ljava/lang/String;)V

    .line 2674
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d;->G:Lcom/tkay/expressad/reward/a/b;

    invoke-interface {p2, p1}, Lcom/tkay/expressad/reward/a/b;->a(Ljava/lang/String;)V

    return-void

    .line 2678
    :cond_7
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d;->G:Lcom/tkay/expressad/reward/a/b;

    if-eqz p2, :cond_9

    .line 2679
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d;->ad:Landroid/os/Handler;

    if-eqz p2, :cond_8

    .line 2680
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d;->ad:Landroid/os/Handler;

    invoke-virtual {p2, v0}, Landroid/os/Handler;->removeMessages(I)V

    .line 2683
    :cond_8
    invoke-direct {p0, p1}, Lcom/tkay/expressad/reward/a/d;->b(Ljava/lang/String;)V

    .line 2684
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d;->G:Lcom/tkay/expressad/reward/a/b;

    invoke-interface {p2, p1}, Lcom/tkay/expressad/reward/a/b;->a(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_9
    return-void

    :catchall_0
    move-exception p2

    .line 2689
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    .line 2691
    :try_start_1
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d;->G:Lcom/tkay/expressad/reward/a/b;

    if-eqz p2, :cond_b

    .line 2692
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d;->ad:Landroid/os/Handler;

    if-eqz p2, :cond_a

    .line 2693
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d;->ad:Landroid/os/Handler;

    invoke-virtual {p2, v0}, Landroid/os/Handler;->removeMessages(I)V

    .line 2696
    :cond_a
    invoke-direct {p0, p1}, Lcom/tkay/expressad/reward/a/d;->b(Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :cond_b
    return-void

    :catchall_1
    move-exception p1

    .line 2699
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method static synthetic a(Ljava/lang/String;Ljava/util/List;)V
    .locals 4

    if-eqz p1, :cond_1

    .line 24551
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_1

    .line 24552
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "mark cache data: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 24554
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_0
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/foundation/d/c;

    .line 24556
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v1

    if-eqz v1, :cond_0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 24557
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "_"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/expressad/videocommon/a;->b(Ljava/lang/String;)V

    .line 24558
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->w()I

    move-result v1

    invoke-static {v1, v0}, Lcom/tkay/expressad/videocommon/a;->b(ILcom/tkay/expressad/foundation/d/c;)V

    goto :goto_0

    :cond_1
    return-void
.end method

.method private a(Ljava/util/List;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)V"
        }
    .end annotation

    .line 1677
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d;->v:Landroid/content/Context;

    if-eqz v0, :cond_2

    if-eqz p1, :cond_2

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_0

    goto :goto_1

    :cond_0
    const/4 v0, 0x0

    .line 1685
    :goto_0
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    if-ge v0, v1, :cond_2

    .line 1686
    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/foundation/d/c;

    if-eqz v1, :cond_1

    .line 1689
    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d;->v:Landroid/content/Context;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->ba()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/tkay/expressad/foundation/h/t;->a(Landroid/content/Context;Ljava/lang/String;)Z

    :cond_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_2
    :goto_1
    return-void
.end method

.method private a(Ljava/util/List;Lcom/tkay/expressad/videocommon/e/d;)V
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;",
            "Lcom/tkay/expressad/videocommon/e/d;",
            ")V"
        }
    .end annotation

    if-eqz p1, :cond_4

    .line 2929
    :try_start_0
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_0
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_4

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/foundation/d/c;

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz v0, :cond_1

    move v3, v1

    goto :goto_1

    :cond_1
    move v3, v2

    .line 2930
    :goto_1
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v4

    if-eqz v4, :cond_2

    goto :goto_2

    :cond_2
    move v1, v2

    :goto_2
    and-int/2addr v1, v3

    if-eqz v1, :cond_3

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    .line 2931
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d;->w:Ljava/lang/String;

    invoke-direct {p0, v0, v1, v2, p2}, Lcom/tkay/expressad/reward/a/d;->a(Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/videocommon/e/d;)V

    :cond_3
    if-eqz v0, :cond_0

    .line 2934
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->ar()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 2935
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->ar()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d;->w:Ljava/lang/String;

    invoke-direct {p0, v0, v1, v2, p2}, Lcom/tkay/expressad/reward/a/d;->a(Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/videocommon/e/d;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2954
    sget-boolean p2, Lcom/tkay/expressad/b;->a:Z

    if-eqz p2, :cond_4

    .line 2955
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_4
    return-void
.end method

.method private static a(Lcom/tkay/expressad/foundation/d/c;)Z
    .locals 1

    .line 1804
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/videocommon/a/a;->a()Lcom/tkay/expressad/videocommon/a/a;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 1805
    invoke-static {}, Lcom/tkay/expressad/videocommon/a/a;->a()Lcom/tkay/expressad/videocommon/a/a;

    invoke-static {p0}, Lcom/tkay/expressad/videocommon/a/a;->a(Lcom/tkay/expressad/foundation/d/c;)Z

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    move-exception p0

    .line 1808
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    const/4 p0, 0x1

    return p0
.end method

.method static synthetic a(Lcom/tkay/expressad/reward/a/d;Ljava/util/List;ZI)Z
    .locals 0

    .line 60
    invoke-direct {p0, p1, p2, p3}, Lcom/tkay/expressad/reward/a/d;->b(Ljava/util/List;ZI)Z

    move-result p0

    return p0
.end method

.method static synthetic b(Lcom/tkay/expressad/reward/a/d;)Ljava/lang/String;
    .locals 0

    .line 60
    iget-object p0, p0, Lcom/tkay/expressad/reward/a/d;->E:Ljava/lang/String;

    return-object p0
.end method

.method private b(Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/videocommon/e/d;)V
    .locals 4

    .line 2990
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x5

    new-array v0, v0, [Ljava/lang/Object;

    const-string v1, "zip"

    .line 2993
    invoke-virtual {p2, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d;->ad:Landroid/os/Handler;

    if-eqz v1, :cond_0

    .line 2995
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v1

    invoke-virtual {v1, p2}, Lcom/tkay/expressad/videocommon/b/g;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 2997
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v2

    const/16 v3, 0x11

    .line 2998
    iput v3, v2, Landroid/os/Message;->what:I

    const/4 v3, 0x0

    aput-object p1, v0, v3

    const/4 p1, 0x1

    aput-object v1, v0, p1

    const/4 p1, 0x2

    aput-object p3, v0, p1

    const/4 p1, 0x3

    aput-object p4, v0, p1

    const/4 p1, 0x4

    aput-object p2, v0, p1

    .line 3004
    iput-object v0, v2, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 3005
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d;->ad:Landroid/os/Handler;

    invoke-virtual {p1, v2}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_0
    return-void
.end method

.method private b(Lcom/tkay/expressad/foundation/d/d;)V
    .locals 2

    .line 1524
    :try_start_0
    iput-object p1, p0, Lcom/tkay/expressad/reward/a/d;->Z:Lcom/tkay/expressad/foundation/d/d;

    .line 1526
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "V3 data just requested back,requestId "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d;->Z:Lcom/tkay/expressad/foundation/d/d;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/d;->f()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1527
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d;->Z:Lcom/tkay/expressad/foundation/d/d;

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d;->Z:Lcom/tkay/expressad/foundation/d/d;

    .line 12374
    iget-object p1, p1, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    if-eqz p1, :cond_0

    .line 1527
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d;->Z:Lcom/tkay/expressad/foundation/d/d;

    .line 13374
    iget-object p1, p1, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    .line 1527
    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    .line 1534
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d;->Z:Lcom/tkay/expressad/foundation/d/d;

    invoke-direct {p0, p1}, Lcom/tkay/expressad/reward/a/d;->c(Lcom/tkay/expressad/foundation/d/d;)V

    .line 1535
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d;->Z:Lcom/tkay/expressad/foundation/d/d;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/d;->f()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/reward/a/d;->m:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 1537
    sget-boolean v0, Lcom/tkay/expressad/b;->a:Z

    if-eqz v0, :cond_1

    .line 1538
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 1541
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d;->aa:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz p1, :cond_2

    .line 1542
    invoke-virtual {p1}, Ljava/util/concurrent/CopyOnWriteArrayList;->clear()V

    .line 1544
    :cond_2
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d;->ag:Ljava/util/List;

    if-eqz p1, :cond_3

    .line 1545
    invoke-interface {p1}, Ljava/util/List;->clear()V

    :cond_3
    const/4 p1, 0x0

    .line 1547
    iput-boolean p1, p0, Lcom/tkay/expressad/reward/a/d;->p:Z

    .line 1548
    iput-boolean p1, p0, Lcom/tkay/expressad/reward/a/d;->q:Z

    .line 1549
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d;->c:Ljava/lang/Object;

    monitor-enter v0

    .line 1550
    :try_start_1
    iget-boolean v1, p0, Lcom/tkay/expressad/reward/a/d;->r:Z

    if-eqz v1, :cond_4

    .line 1551
    iput-boolean p1, p0, Lcom/tkay/expressad/reward/a/d;->r:Z

    .line 1553
    :cond_4
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1554
    iput-boolean p1, p0, Lcom/tkay/expressad/reward/a/d;->t:Z

    .line 1555
    iput-boolean p1, p0, Lcom/tkay/expressad/reward/a/d;->s:Z

    const-string p1, "exception after load success"

    .line 1561
    invoke-direct {p0, p1}, Lcom/tkay/expressad/reward/a/d;->b(Ljava/lang/String;)V

    .line 1562
    invoke-direct {p0}, Lcom/tkay/expressad/reward/a/d;->r()V

    return-void

    :catchall_0
    move-exception p1

    .line 1553
    monitor-exit v0

    throw p1
.end method

.method private b(Ljava/lang/String;)V
    .locals 2

    .line 1579
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d;->ad:Landroid/os/Handler;

    if-eqz v0, :cond_2

    .line 1580
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x4

    if-eqz v0, :cond_0

    .line 1581
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d;->ad:Landroid/os/Handler;

    invoke-virtual {p1, v1}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    return-void

    .line 1583
    :cond_0
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 1584
    iput v1, v0, Landroid/os/Message;->what:I

    .line 1585
    iput-object p1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    const-string v1, "exception"

    .line 1586
    invoke-virtual {p1, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 1587
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d;->ad:Landroid/os/Handler;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendMessageAtFrontOfQueue(Landroid/os/Message;)Z

    return-void

    .line 1589
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d;->ad:Landroid/os/Handler;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    :cond_2
    return-void
.end method

.method private static b(Ljava/lang/String;Ljava/util/List;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)V"
        }
    .end annotation

    if-eqz p1, :cond_1

    .line 2551
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_1

    .line 2552
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "mark cache data: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 2554
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_0
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/foundation/d/c;

    .line 2556
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v1

    if-eqz v1, :cond_0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 2557
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "_"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/expressad/videocommon/a;->b(Ljava/lang/String;)V

    .line 2558
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->w()I

    move-result v1

    invoke-static {v1, v0}, Lcom/tkay/expressad/videocommon/a;->b(ILcom/tkay/expressad/foundation/d/c;)V

    goto :goto_0

    :cond_1
    return-void
.end method

.method private b(Ljava/util/List;)V
    .locals 11
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)V"
        }
    .end annotation

    if-eqz p1, :cond_5

    .line 2755
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_5

    .line 2756
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_0
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_5

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_0

    .line 18722
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->P()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 18723
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v1

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->P()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/videocommon/b/g;->b(Ljava/lang/String;)V

    .line 18725
    :cond_1
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 18726
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v8

    .line 18727
    invoke-virtual {v8}, Lcom/tkay/expressad/foundation/d/c$c;->d()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const-string v9, ".zip"

    if-nez v1, :cond_3

    .line 18728
    invoke-virtual {v8}, Lcom/tkay/expressad/foundation/d/c$c;->d()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1, v9}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 18730
    new-instance v10, Lcom/tkay/expressad/reward/a/d$i;

    iget-object v4, p0, Lcom/tkay/expressad/reward/a/d;->w:Ljava/lang/String;

    const/16 v5, 0x139

    iget-object v6, p0, Lcom/tkay/expressad/reward/a/d;->I:Lcom/tkay/expressad/videocommon/e/d;

    const/4 v7, 0x0

    move-object v1, v10

    move-object v2, v0

    move-object v3, p0

    invoke-direct/range {v1 .. v7}, Lcom/tkay/expressad/reward/a/d$i;-><init>(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/reward/a/d;Ljava/lang/String;ILcom/tkay/expressad/videocommon/e/d;Z)V

    .line 18731
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v1

    invoke-virtual {v8}, Lcom/tkay/expressad/foundation/d/c$c;->d()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2, v10}, Lcom/tkay/expressad/videocommon/b/g;->b(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V

    goto :goto_1

    .line 18734
    :cond_2
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v1

    invoke-virtual {v8}, Lcom/tkay/expressad/foundation/d/c$c;->d()Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x0

    .line 19257
    invoke-virtual {v1, v2, v3}, Lcom/tkay/expressad/videocommon/b/g;->b(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V

    .line 18737
    :cond_3
    :goto_1
    invoke-virtual {v8}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    invoke-virtual {v8}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v1

    const-string v2, "cmpt=1"

    invoke-virtual {v1, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 18738
    invoke-virtual {v8}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1, v9}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_4

    .line 18740
    new-instance v9, Lcom/tkay/expressad/reward/a/d$i;

    iget-object v4, p0, Lcom/tkay/expressad/reward/a/d;->w:Ljava/lang/String;

    const/16 v5, 0x35b

    iget-object v6, p0, Lcom/tkay/expressad/reward/a/d;->I:Lcom/tkay/expressad/videocommon/e/d;

    const/4 v7, 0x0

    move-object v1, v9

    move-object v2, v0

    move-object v3, p0

    invoke-direct/range {v1 .. v7}, Lcom/tkay/expressad/reward/a/d$i;-><init>(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/reward/a/d;Ljava/lang/String;ILcom/tkay/expressad/videocommon/e/d;Z)V

    .line 18741
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v0

    invoke-virtual {v8}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1, v9}, Lcom/tkay/expressad/videocommon/b/g;->b(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V

    goto/16 :goto_0

    .line 18744
    :cond_4
    new-instance v1, Lcom/tkay/expressad/reward/a/d$d;

    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d;->w:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/expressad/reward/a/d;->I:Lcom/tkay/expressad/videocommon/e/d;

    invoke-direct {v1, p0, v0, v2, v3}, Lcom/tkay/expressad/reward/a/d$d;-><init>(Lcom/tkay/expressad/reward/a/d;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Lcom/tkay/expressad/videocommon/e/d;)V

    .line 18745
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v0

    invoke-virtual {v8}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2, v1}, Lcom/tkay/expressad/videocommon/b/g;->b(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V

    goto/16 :goto_0

    :cond_5
    return-void
.end method

.method private b(Lcom/tkay/expressad/foundation/d/c;)Z
    .locals 4

    .line 2460
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d;->aa:Ljava/util/concurrent/CopyOnWriteArrayList;

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v0

    if-lez v0, :cond_1

    .line 2461
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d;->aa:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/foundation/d/c;

    .line 2462
    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_1
    return v1
.end method

.method private b(Ljava/util/List;ZI)Z
    .locals 9
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;ZI)Z"
        }
    .end annotation

    const/4 v0, 0x0

    if-eqz p1, :cond_7

    .line 1117
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_7

    .line 1118
    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/foundation/d/c;

    .line 1119
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/expressad/reward/a/d;->w:Ljava/lang/String;

    iget-boolean v4, p0, Lcom/tkay/expressad/reward/a/d;->U:Z

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v5

    move v6, p2

    move v7, p3

    move-object v8, p1

    invoke-virtual/range {v2 .. v8}, Lcom/tkay/expressad/videocommon/b/c;->b(Ljava/lang/String;ZIZILjava/util/List;)Z

    move-result p1

    if-eqz p1, :cond_7

    const-string p1, "_"

    const/4 p3, 0x1

    if-eqz p2, :cond_3

    .line 1122
    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result p2

    if-eqz p2, :cond_0

    return p3

    .line 1125
    :cond_0
    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object p2

    if-eqz p2, :cond_2

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object p2

    invoke-virtual {p2}, Ljava/util/ArrayList;->size()I

    move-result p2

    if-lez p2, :cond_2

    .line 1126
    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object p2

    const/4 v2, 0x3

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {p2, v2}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_1

    return p3

    .line 1132
    :cond_1
    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->ar()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p2, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_2

    .line 1133
    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object p2

    const/4 v2, 0x2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {p2, v2}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_2

    return p3

    .line 1140
    :cond_2
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/j;->a()Lcom/tkay/expressad/videocommon/b/j;

    move-result-object p2

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/tkay/expressad/reward/a/d;->w:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->ar()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Lcom/tkay/expressad/videocommon/b/j;->d(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_7

    return p3

    :cond_3
    if-eqz v1, :cond_4

    .line 1145
    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result p2

    if-eqz p2, :cond_4

    return p3

    .line 1149
    :cond_4
    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object p2

    if-eqz p2, :cond_5

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object p2

    invoke-virtual {p2}, Ljava/util/ArrayList;->size()I

    move-result p2

    if-lez p2, :cond_5

    .line 1150
    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object p2

    invoke-static {p3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {p2, v2}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_5

    return p3

    .line 1156
    :cond_5
    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object p2

    if-eqz p2, :cond_6

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object p2

    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_6

    .line 1157
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/j;->a()Lcom/tkay/expressad/videocommon/b/j;

    move-result-object p2

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/tkay/expressad/reward/a/d;->w:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Lcom/tkay/expressad/videocommon/b/j;->d(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_7

    :cond_6
    return p3

    :cond_7
    return v0
.end method

.method static synthetic c(Lcom/tkay/expressad/reward/a/d;)Lcom/tkay/expressad/reward/a/b;
    .locals 0

    .line 60
    iget-object p0, p0, Lcom/tkay/expressad/reward/a/d;->G:Lcom/tkay/expressad/reward/a/b;

    return-object p0
.end method

.method private c(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 10

    if-nez p1, :cond_0

    return-void

    .line 2722
    :cond_0
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->P()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 2723
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->P()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/videocommon/b/g;->b(Ljava/lang/String;)V

    .line 2725
    :cond_1
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v0

    if-eqz v0, :cond_5

    .line 2726
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v0

    .line 2727
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c$c;->d()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const-string v2, ".zip"

    if-nez v1, :cond_3

    .line 2728
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c$c;->d()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 2730
    new-instance v1, Lcom/tkay/expressad/reward/a/d$i;

    iget-object v6, p0, Lcom/tkay/expressad/reward/a/d;->w:Ljava/lang/String;

    const/16 v7, 0x139

    iget-object v8, p0, Lcom/tkay/expressad/reward/a/d;->I:Lcom/tkay/expressad/videocommon/e/d;

    const/4 v9, 0x0

    move-object v3, v1

    move-object v4, p1

    move-object v5, p0

    invoke-direct/range {v3 .. v9}, Lcom/tkay/expressad/reward/a/d$i;-><init>(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/reward/a/d;Ljava/lang/String;ILcom/tkay/expressad/videocommon/e/d;Z)V

    .line 2731
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v3

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c$c;->d()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4, v1}, Lcom/tkay/expressad/videocommon/b/g;->b(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V

    goto :goto_0

    .line 2734
    :cond_2
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v1

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c$c;->d()Ljava/lang/String;

    move-result-object v3

    const/4 v4, 0x0

    .line 18257
    invoke-virtual {v1, v3, v4}, Lcom/tkay/expressad/videocommon/b/g;->b(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V

    .line 2737
    :cond_3
    :goto_0
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_5

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v1

    const-string v3, "cmpt=1"

    invoke-virtual {v1, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_5

    .line 2738
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_4

    .line 2740
    new-instance v1, Lcom/tkay/expressad/reward/a/d$i;

    iget-object v5, p0, Lcom/tkay/expressad/reward/a/d;->w:Ljava/lang/String;

    const/16 v6, 0x35b

    iget-object v7, p0, Lcom/tkay/expressad/reward/a/d;->I:Lcom/tkay/expressad/videocommon/e/d;

    const/4 v8, 0x0

    move-object v2, v1

    move-object v3, p1

    move-object v4, p0

    invoke-direct/range {v2 .. v8}, Lcom/tkay/expressad/reward/a/d$i;-><init>(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/reward/a/d;Ljava/lang/String;ILcom/tkay/expressad/videocommon/e/d;Z)V

    .line 2741
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object p1

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0, v1}, Lcom/tkay/expressad/videocommon/b/g;->b(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V

    return-void

    .line 2744
    :cond_4
    new-instance v1, Lcom/tkay/expressad/reward/a/d$d;

    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d;->w:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/expressad/reward/a/d;->I:Lcom/tkay/expressad/videocommon/e/d;

    invoke-direct {v1, p0, p1, v2, v3}, Lcom/tkay/expressad/reward/a/d$d;-><init>(Lcom/tkay/expressad/reward/a/d;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Lcom/tkay/expressad/videocommon/e/d;)V

    .line 2745
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object p1

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0, v1}, Lcom/tkay/expressad/videocommon/b/g;->b(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V

    :cond_5
    return-void
.end method

.method private c(Lcom/tkay/expressad/foundation/d/d;)V
    .locals 18

    move-object/from16 v1, p0

    move-object/from16 v0, p1

    .line 1865
    iput-object v0, v1, Lcom/tkay/expressad/reward/a/d;->Z:Lcom/tkay/expressad/foundation/d/d;

    .line 1866
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "Campaign request success: "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 14374
    iget-object v3, v0, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    .line 1866
    invoke-virtual {v3}, Ljava/util/ArrayList;->size()I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 1869
    invoke-direct/range {p0 .. p1}, Lcom/tkay/expressad/reward/a/d;->d(Lcom/tkay/expressad/foundation/d/d;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v2

    iput-object v2, v1, Lcom/tkay/expressad/reward/a/d;->aa:Ljava/util/concurrent/CopyOnWriteArrayList;

    .line 14600
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v2

    new-instance v3, Lcom/tkay/expressad/reward/a/d$5;

    invoke-direct {v3, v1, v0}, Lcom/tkay/expressad/reward/a/d$5;-><init>(Lcom/tkay/expressad/reward/a/d;Lcom/tkay/expressad/foundation/d/d;)V

    invoke-virtual {v2, v3}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    .line 1878
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d;->aa:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v2, :cond_a

    invoke-virtual {v2}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v2

    if-lez v2, :cond_a

    .line 1879
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "onload load success,size:"

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v3, v1, Lcom/tkay/expressad/reward/a/d;->aa:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v3}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 15570
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d;->ad:Landroid/os/Handler;

    if-eqz v2, :cond_0

    const/4 v3, 0x3

    .line 15571
    invoke-virtual {v2, v3}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    :cond_0
    if-eqz v0, :cond_1

    .line 1892
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/expressad/foundation/d/d;->c()Ljava/lang/String;

    move-result-object v0

    .line 15707
    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/w;->b(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 15709
    sput-object v0, Lcom/tkay/expressad/reward/b/a;->b:Ljava/lang/String;

    .line 1896
    :cond_1
    iget-object v0, v1, Lcom/tkay/expressad/reward/a/d;->aa:Ljava/util/concurrent/CopyOnWriteArrayList;

    const/4 v2, 0x0

    if-eqz v0, :cond_2

    .line 16629
    :try_start_0
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v3

    if-lez v3, :cond_2

    .line 16630
    iget v3, v1, Lcom/tkay/expressad/reward/a/d;->y:I

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    add-int/2addr v3, v0

    iput v3, v1, Lcom/tkay/expressad/reward/a/d;->y:I

    .line 16632
    :cond_2
    iget-object v0, v1, Lcom/tkay/expressad/reward/a/d;->I:Lcom/tkay/expressad/videocommon/e/d;

    if-eqz v0, :cond_3

    iget v0, v1, Lcom/tkay/expressad/reward/a/d;->y:I

    iget-object v3, v1, Lcom/tkay/expressad/reward/a/d;->I:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v3}, Lcom/tkay/expressad/videocommon/e/d;->D()I

    move-result v3

    if-le v0, v3, :cond_4

    .line 16634
    :cond_3
    iput v2, v1, Lcom/tkay/expressad/reward/a/d;->y:I

    .line 16636
    :cond_4
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v3, "onload \u7b97\u51fa \u4e0b\u6b21\u7684offset\u662f:"

    invoke-direct {v0, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v3, v1, Lcom/tkay/expressad/reward/a/d;->y:I

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 16638
    iget-object v0, v1, Lcom/tkay/expressad/reward/a/d;->w:Ljava/lang/String;

    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/w;->b(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_5

    .line 16639
    iget-object v0, v1, Lcom/tkay/expressad/reward/a/d;->w:Ljava/lang/String;

    iget v3, v1, Lcom/tkay/expressad/reward/a/d;->y:I

    invoke-static {v0, v3}, Lcom/tkay/expressad/reward/b/a;->a(Ljava/lang/String;I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 16642
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 1898
    :cond_5
    :goto_0
    iget-object v0, v1, Lcom/tkay/expressad/reward/a/d;->aa:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v0, :cond_6

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v0

    if-lez v0, :cond_6

    .line 1899
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v3, "#######onload,save the ad data locally,size:"

    invoke-direct {v0, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v3, v1, Lcom/tkay/expressad/reward/a/d;->aa:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v3}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 1903
    :cond_6
    iget-object v0, v1, Lcom/tkay/expressad/reward/a/d;->aa:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0, v2}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    move-object v5, v0

    check-cast v5, Lcom/tkay/expressad/foundation/d/c;

    .line 1904
    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->ar()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    .line 1905
    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->ap()I

    move-result v3

    .line 1907
    iput-boolean v2, v1, Lcom/tkay/expressad/reward/a/d;->p:Z

    .line 1908
    iput-boolean v2, v1, Lcom/tkay/expressad/reward/a/d;->q:Z

    .line 1909
    iget-object v4, v1, Lcom/tkay/expressad/reward/a/d;->c:Ljava/lang/Object;

    monitor-enter v4

    .line 1910
    :try_start_1
    iget-boolean v6, v1, Lcom/tkay/expressad/reward/a/d;->r:Z

    if-eqz v6, :cond_7

    .line 1911
    iput-boolean v2, v1, Lcom/tkay/expressad/reward/a/d;->r:Z

    .line 1913
    :cond_7
    monitor-exit v4
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1914
    iput-boolean v2, v1, Lcom/tkay/expressad/reward/a/d;->t:Z

    .line 1915
    iput-boolean v2, v1, Lcom/tkay/expressad/reward/a/d;->s:Z

    .line 17076
    invoke-static {}, Lcom/tkay/expressad/reward/a/c$m;->a()Lcom/tkay/expressad/reward/a/c;

    move-result-object v6

    .line 1923
    iget-object v7, v1, Lcom/tkay/expressad/reward/a/d;->v:Landroid/content/Context;

    iget-boolean v10, v1, Lcom/tkay/expressad/reward/a/d;->U:Z

    iget-boolean v2, v1, Lcom/tkay/expressad/reward/a/d;->T:Z

    if-eqz v2, :cond_8

    const/16 v2, 0x11f

    goto :goto_1

    :cond_8
    const/16 v2, 0x5e

    :goto_1
    move v11, v2

    iget-object v12, v1, Lcom/tkay/expressad/reward/a/d;->x:Ljava/lang/String;

    iget-object v13, v1, Lcom/tkay/expressad/reward/a/d;->w:Ljava/lang/String;

    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v14

    iget-object v15, v1, Lcom/tkay/expressad/reward/a/d;->aa:Ljava/util/concurrent/CopyOnWriteArrayList;

    new-instance v2, Lcom/tkay/expressad/reward/a/d$2;

    invoke-direct {v2, v1, v0, v5, v3}, Lcom/tkay/expressad/reward/a/d$2;-><init>(Lcom/tkay/expressad/reward/a/d;ZLcom/tkay/expressad/foundation/d/c;I)V

    new-instance v4, Lcom/tkay/expressad/reward/a/d$3;

    invoke-direct {v4, v1, v0, v5, v3}, Lcom/tkay/expressad/reward/a/d$3;-><init>(Lcom/tkay/expressad/reward/a/d;ZLcom/tkay/expressad/foundation/d/c;I)V

    move v8, v0

    move v9, v3

    move-object/from16 v16, v2

    move-object/from16 v17, v4

    invoke-virtual/range {v6 .. v17}, Lcom/tkay/expressad/reward/a/c;->a(Landroid/content/Context;ZIZILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/concurrent/CopyOnWriteArrayList;Lcom/tkay/expressad/reward/a/c$c;Lcom/tkay/expressad/reward/a/c$i;)V

    if-eqz v0, :cond_9

    .line 18076
    invoke-static {}, Lcom/tkay/expressad/reward/a/c$m;->a()Lcom/tkay/expressad/reward/a/c;

    move-result-object v2

    .line 2286
    iget-object v4, v1, Lcom/tkay/expressad/reward/a/d;->v:Landroid/content/Context;

    iget-object v6, v1, Lcom/tkay/expressad/reward/a/d;->x:Ljava/lang/String;

    iget-object v7, v1, Lcom/tkay/expressad/reward/a/d;->w:Ljava/lang/String;

    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v8

    new-instance v9, Lcom/tkay/expressad/reward/a/d$4;

    invoke-direct {v9, v1, v5, v0, v3}, Lcom/tkay/expressad/reward/a/d$4;-><init>(Lcom/tkay/expressad/reward/a/d;Lcom/tkay/expressad/foundation/d/c;ZI)V

    move-object v3, v2

    invoke-virtual/range {v3 .. v9}, Lcom/tkay/expressad/reward/a/c;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/reward/a/c$i;)V

    :cond_9
    return-void

    :catchall_0
    move-exception v0

    .line 1913
    monitor-exit v4

    throw v0

    .line 1883
    :cond_a
    iget-object v0, v1, Lcom/tkay/expressad/reward/a/d;->af:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_b

    const-string v0, "Offer list is empty"

    .line 1884
    iput-object v0, v1, Lcom/tkay/expressad/reward/a/d;->af:Ljava/lang/String;

    .line 1886
    :cond_b
    iget-object v0, v1, Lcom/tkay/expressad/reward/a/d;->af:Ljava/lang/String;

    invoke-direct {v1, v0}, Lcom/tkay/expressad/reward/a/d;->b(Ljava/lang/String;)V

    return-void
.end method

.method private static c(Ljava/lang/String;)V
    .locals 1

    .line 3707
    invoke-static {p0}, Lcom/tkay/expressad/foundation/h/w;->b(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 3709
    sput-object p0, Lcom/tkay/expressad/reward/b/a;->b:Ljava/lang/String;

    :cond_0
    return-void
.end method

.method private c(Ljava/util/List;)V
    .locals 9
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)V"
        }
    .end annotation

    if-eqz p1, :cond_2

    .line 2809
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_2

    .line 2810
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_0
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    move-object v2, v0

    check-cast v2, Lcom/tkay/expressad/foundation/d/c;

    .line 2811
    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v0

    .line 2813
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->H()Z

    move-result v1

    if-nez v1, :cond_0

    const-string v1, ".zip"

    .line 2814
    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    const-string v1, "md5filename"

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 2817
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/tkay/expressad/videocommon/b/g;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    .line 2820
    new-instance v8, Lcom/tkay/expressad/reward/a/d$i;

    iget-object v4, p0, Lcom/tkay/expressad/reward/a/d;->w:Ljava/lang/String;

    const/16 v5, 0x1f1

    iget-object v6, p0, Lcom/tkay/expressad/reward/a/d;->I:Lcom/tkay/expressad/videocommon/e/d;

    move-object v1, v8

    move-object v3, p0

    invoke-direct/range {v1 .. v7}, Lcom/tkay/expressad/reward/a/d$i;-><init>(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/reward/a/d;Ljava/lang/String;ILcom/tkay/expressad/videocommon/e/d;Z)V

    .line 2821
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v1

    invoke-virtual {v1, v0, v8}, Lcom/tkay/expressad/videocommon/b/g;->b(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V

    goto :goto_0

    .line 2825
    :cond_1
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/h;->a()Lcom/tkay/expressad/videocommon/b/h;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/tkay/expressad/videocommon/b/h;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    .line 2828
    new-instance v3, Lcom/tkay/expressad/reward/a/d$f;

    iget-object v4, p0, Lcom/tkay/expressad/reward/a/d;->w:Ljava/lang/String;

    invoke-direct {v3, p0, v2, v4, v1}, Lcom/tkay/expressad/reward/a/d$f;-><init>(Lcom/tkay/expressad/reward/a/d;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Z)V

    .line 2829
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v1

    invoke-virtual {v1, v0, v3}, Lcom/tkay/expressad/videocommon/b/g;->b(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V

    goto :goto_0

    :cond_2
    return-void
.end method

.method static synthetic d(Lcom/tkay/expressad/reward/a/d;)Ljava/util/List;
    .locals 0

    .line 60
    iget-object p0, p0, Lcom/tkay/expressad/reward/a/d;->ag:Ljava/util/List;

    return-object p0
.end method

.method private d(Lcom/tkay/expressad/foundation/d/d;)Ljava/util/concurrent/CopyOnWriteArrayList;
    .locals 9
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/expressad/foundation/d/d;",
            ")",
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation

    .line 3387
    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    .line 3392
    :try_start_0
    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d;->I:Lcom/tkay/expressad/videocommon/e/d;

    if-eqz v1, :cond_0

    .line 3393
    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d;->I:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v1}, Lcom/tkay/expressad/videocommon/e/d;->A()I

    :cond_0
    if-eqz p1, :cond_12

    .line 19374
    iget-object v1, p1, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    if-eqz v1, :cond_12

    .line 20374
    iget-object v1, p1, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    .line 3400
    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v1

    if-lez v1, :cond_12

    .line 21374
    iget-object v1, p1, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    .line 3402
    iput-object v1, p0, Lcom/tkay/expressad/reward/a/d;->ag:Ljava/util/List;

    const/4 v2, 0x0

    if-eqz p1, :cond_1

    .line 22374
    iget-object v3, p1, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    if-eqz v3, :cond_1

    .line 23374
    iget-object v3, p1, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    .line 3404
    invoke-virtual {v3}, Ljava/util/ArrayList;->size()I

    move-result v3

    if-lez v3, :cond_1

    .line 24374
    iget-object p1, p1, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    move v3, v2

    .line 3406
    :goto_0
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v4

    if-ge v3, v4, :cond_1

    .line 3407
    invoke-interface {p1, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/expressad/foundation/d/c;

    .line 3408
    iget-object v5, p0, Lcom/tkay/expressad/reward/a/d;->w:Ljava/lang/String;

    invoke-virtual {v4, v5}, Lcom/tkay/expressad/foundation/d/c;->l(Ljava/lang/String;)V

    .line 3409
    invoke-interface {p1, v3, v4}, Ljava/util/List;->set(ILjava/lang/Object;)Ljava/lang/Object;

    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_1
    move p1, v2

    .line 3413
    :goto_1
    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v3

    if-ge p1, v3, :cond_11

    const v3, 0x7fffffff

    if-ge p1, v3, :cond_11

    .line 3414
    invoke-virtual {v1, p1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/expressad/foundation/d/c;

    .line 3420
    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->H()Z

    move-result v4

    if-eqz v4, :cond_7

    .line 3421
    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->G()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_10

    const/4 v4, 0x0

    .line 3424
    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->w()I

    move-result v5

    const/16 v6, 0x11f

    if-eq v5, v6, :cond_2

    .line 3426
    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->w()I

    move-result v5

    const/16 v6, 0x5e

    if-eq v5, v6, :cond_2

    .line 3428
    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->w()I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2

    .line 3432
    :cond_2
    :try_start_1
    sget-object v5, Lcom/tkay/expressad/foundation/g/c/c;->i:Lcom/tkay/expressad/foundation/g/c/c;

    invoke-static {v5}, Lcom/tkay/expressad/foundation/g/c/f;->b(Lcom/tkay/expressad/foundation/g/c/c;)Ljava/lang/String;

    move-result-object v5

    .line 3433
    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->G()Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Lcom/tkay/expressad/foundation/h/p;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 3434
    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-eqz v7, :cond_3

    .line 3435
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    invoke-static {v6, v7}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v6

    :cond_3
    const-string v7, ".html"

    invoke-virtual {v6, v7}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 3436
    new-instance v7, Ljava/io/File;

    invoke-direct {v7, v5, v6}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 3437
    new-instance v5, Ljava/io/FileOutputStream;

    invoke-direct {v5, v7}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 3439
    :try_start_2
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "<script>"

    .line 3440
    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/tkay/expressad/d/b/a;->a()Lcom/tkay/expressad/d/b/a;

    invoke-static {}, Lcom/tkay/expressad/d/b/a;->b()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "</script>"

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 3441
    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->G()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 3443
    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/String;->getBytes()[B

    move-result-object v4

    invoke-virtual {v5, v4}, Ljava/io/FileOutputStream;->write([B)V

    .line 3444
    invoke-virtual {v5}, Ljava/io/FileOutputStream;->flush()V

    .line 3445
    invoke-virtual {v7}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Lcom/tkay/expressad/foundation/d/c;->j(Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 3454
    :try_start_3
    invoke-virtual {v5}, Ljava/io/FileOutputStream;->close()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_2

    goto :goto_3

    :catchall_0
    move-exception p1

    move-object v4, v5

    goto :goto_4

    :catch_0
    move-exception v4

    move-object v8, v5

    move-object v5, v4

    move-object v4, v8

    goto :goto_2

    :catchall_1
    move-exception p1

    goto :goto_4

    :catch_1
    move-exception v5

    .line 3449
    :goto_2
    :try_start_4
    invoke-virtual {v5}, Ljava/lang/Exception;->printStackTrace()V

    const-string v5, ""

    .line 3450
    invoke-virtual {v3, v5}, Lcom/tkay/expressad/foundation/d/c;->j(Ljava/lang/String;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    if-eqz v4, :cond_4

    .line 3454
    :try_start_5
    invoke-virtual {v4}, Ljava/io/FileOutputStream;->close()V

    .line 3458
    :cond_4
    :goto_3
    new-instance v4, Ljava/io/File;

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->G()Ljava/lang/String;

    move-result-object v5

    invoke-direct {v4, v5}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 3459
    invoke-virtual {v4}, Ljava/io/File;->exists()Z

    move-result v5

    if-eqz v5, :cond_5

    invoke-virtual {v4}, Ljava/io/File;->isFile()Z

    move-result v5

    if-eqz v5, :cond_5

    invoke-virtual {v4}, Ljava/io/File;->canRead()Z

    move-result v4

    if-nez v4, :cond_7

    :cond_5
    const-string v3, "mraid resource write fail"

    .line 3460
    invoke-direct {p0, v3}, Lcom/tkay/expressad/reward/a/d;->b(Ljava/lang/String;)V

    goto/16 :goto_9

    :goto_4
    if-eqz v4, :cond_6

    .line 3454
    invoke-virtual {v4}, Ljava/io/FileOutputStream;->close()V

    .line 3456
    :cond_6
    throw p1

    :cond_7
    if-eqz v3, :cond_10

    .line 3468
    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->O()I

    move-result v4

    const/16 v5, 0x63

    if-eq v4, v5, :cond_10

    .line 3470
    invoke-static {v3}, Lcom/tkay/expressad/reward/a/d;->e(Lcom/tkay/expressad/foundation/d/c;)Z

    move-result v4

    const/4 v5, 0x1

    if-eqz v4, :cond_8

    .line 3471
    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/tkay/expressad/foundation/h/w;->a(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_9

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->G()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_9

    goto :goto_5

    .line 3475
    :cond_8
    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/tkay/expressad/foundation/h/w;->a(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_9

    :goto_5
    move v4, v2

    goto :goto_6

    :cond_9
    move v4, v5

    :goto_6
    if-eqz v4, :cond_f

    .line 3481
    invoke-static {v3}, Lcom/tkay/expressad/foundation/h/t;->a(Lcom/tkay/expressad/foundation/d/c;)Z

    move-result v4

    if-eqz v4, :cond_b

    .line 3482
    iget-object v4, p0, Lcom/tkay/expressad/reward/a/d;->v:Landroid/content/Context;

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->ba()Ljava/lang/String;

    move-result-object v6

    invoke-static {v4, v6}, Lcom/tkay/expressad/foundation/h/t;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_a

    move v4, v5

    goto :goto_7

    :cond_a
    const/4 v4, 0x2

    :goto_7
    invoke-virtual {v3, v4}, Lcom/tkay/expressad/foundation/d/c;->i(I)V

    .line 3485
    :cond_b
    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->ae()I

    move-result v4

    if-eq v4, v5, :cond_e

    iget-object v4, p0, Lcom/tkay/expressad/reward/a/d;->v:Landroid/content/Context;

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->ba()Ljava/lang/String;

    move-result-object v5

    invoke-static {v4, v5}, Lcom/tkay/expressad/foundation/h/t;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v4

    if-nez v4, :cond_c

    goto :goto_8

    .line 3488
    :cond_c
    invoke-static {v3}, Lcom/tkay/expressad/foundation/h/t;->a(Lcom/tkay/expressad/foundation/d/c;)Z

    move-result v4

    if-eqz v4, :cond_d

    .line 3489
    invoke-virtual {v0, v3}, Ljava/util/concurrent/CopyOnWriteArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_9

    :cond_d
    const-string v3, "APP ALREADY INSTALLED"

    .line 3493
    iput-object v3, p0, Lcom/tkay/expressad/reward/a/d;->af:Ljava/lang/String;

    goto :goto_9

    .line 3486
    :cond_e
    :goto_8
    invoke-virtual {v0, v3}, Ljava/util/concurrent/CopyOnWriteArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_9

    :cond_f
    const-string v3, "No video campaign"

    .line 3498
    iput-object v3, p0, Lcom/tkay/expressad/reward/a/d;->af:Ljava/lang/String;

    :cond_10
    :goto_9
    add-int/lit8 p1, p1, 0x1

    goto/16 :goto_1

    .line 3503
    :cond_11
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v1, "onload,return campaign with the following video resources:"

    invoke-direct {p1, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v1

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_2

    goto :goto_a

    :catch_2
    move-exception p1

    .line 3506
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_12
    :goto_a
    return-object v0
.end method

.method private d(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 9

    if-eqz p1, :cond_0

    .line 2792
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->ar()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 2793
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->ar()Ljava/lang/String;

    move-result-object v0

    .line 2795
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/tkay/expressad/videocommon/b/g;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    .line 2798
    new-instance v1, Lcom/tkay/expressad/reward/a/d$i;

    iget-object v5, p0, Lcom/tkay/expressad/reward/a/d;->w:Ljava/lang/String;

    const/16 v6, 0x1f6

    iget-object v7, p0, Lcom/tkay/expressad/reward/a/d;->I:Lcom/tkay/expressad/videocommon/e/d;

    move-object v2, v1

    move-object v3, p1

    move-object v4, p0

    invoke-direct/range {v2 .. v8}, Lcom/tkay/expressad/reward/a/d$i;-><init>(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/reward/a/d;Ljava/lang/String;ILcom/tkay/expressad/videocommon/e/d;Z)V

    .line 2799
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object p1

    invoke-virtual {p1, v0, v1}, Lcom/tkay/expressad/videocommon/b/g;->b(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V

    :cond_0
    return-void
.end method

.method private d(Ljava/util/List;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)V"
        }
    .end annotation

    if-eqz p1, :cond_2

    .line 3218
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_2

    .line 3219
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_0
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/foundation/d/c;

    .line 3220
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->bd()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 3221
    new-instance v1, Lcom/tkay/expressad/reward/a/d$c;

    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d;->w:Ljava/lang/String;

    invoke-direct {v1, p0, v0, v2}, Lcom/tkay/expressad/reward/a/d$c;-><init>(Lcom/tkay/expressad/reward/a/d;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;)V

    .line 3222
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v2

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->bd()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3, v1}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    .line 3224
    :cond_1
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 3225
    new-instance v1, Lcom/tkay/expressad/reward/a/d$c;

    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d;->w:Ljava/lang/String;

    invoke-direct {v1, p0, v0, v2}, Lcom/tkay/expressad/reward/a/d$c;-><init>(Lcom/tkay/expressad/reward/a/d;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;)V

    .line 3226
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v2

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0, v1}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    goto :goto_0

    :cond_2
    return-void
.end method

.method static synthetic e(Lcom/tkay/expressad/reward/a/d;)Ljava/util/concurrent/CopyOnWriteArrayList;
    .locals 0

    .line 60
    iget-object p0, p0, Lcom/tkay/expressad/reward/a/d;->aa:Ljava/util/concurrent/CopyOnWriteArrayList;

    return-object p0
.end method

.method private e(Lcom/tkay/expressad/foundation/d/d;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/expressad/foundation/d/d;",
            ")V"
        }
    .end annotation

    .line 3600
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/expressad/reward/a/d$5;

    invoke-direct {v1, p0, p1}, Lcom/tkay/expressad/reward/a/d$5;-><init>(Lcom/tkay/expressad/reward/a/d;Lcom/tkay/expressad/foundation/d/d;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method private e(Ljava/util/List;)V
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)V"
        }
    .end annotation

    if-eqz p1, :cond_3

    .line 3239
    :try_start_0
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_3

    .line 3240
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_3

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/foundation/d/c;

    .line 3241
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v1

    if-eqz v1, :cond_0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c$c;->f()Ljava/util/List;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 3242
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c$c;->f()Ljava/util/List;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 3245
    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_1
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/foundation/d/c$c$a;

    if-eqz v2, :cond_1

    .line 3246
    iget-object v3, v2, Lcom/tkay/expressad/foundation/d/c$c$a;->b:Ljava/util/List;

    if-eqz v3, :cond_1

    .line 3247
    iget-object v2, v2, Lcom/tkay/expressad/foundation/d/c$c$a;->b:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_2
    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_1

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 3248
    invoke-static {v3}, Lcom/tkay/expressad/foundation/h/w;->b(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_2

    .line 3249
    new-instance v4, Lcom/tkay/expressad/reward/a/d$e;

    iget-object v5, p0, Lcom/tkay/expressad/reward/a/d;->w:Ljava/lang/String;

    invoke-direct {v4, p0, v0, v5}, Lcom/tkay/expressad/reward/a/d$e;-><init>(Lcom/tkay/expressad/reward/a/d;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;)V

    .line 3250
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v5

    invoke-virtual {v5}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v5

    invoke-static {v5}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v5

    invoke-virtual {v5, v3, v4}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 3260
    sget-boolean v0, Lcom/tkay/expressad/b;->a:Z

    if-eqz v0, :cond_3

    .line 3261
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_3
    return-void
.end method

.method private static e(Lcom/tkay/expressad/foundation/d/c;)Z
    .locals 1

    if-eqz p0, :cond_0

    .line 3906
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->J()I

    move-result p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 v0, 0x2

    if-ne p0, v0, :cond_0

    const/4 p0, 0x1

    return p0

    :catchall_0
    move-exception p0

    .line 3910
    sget-boolean v0, Lcom/tkay/expressad/b;->a:Z

    if-eqz v0, :cond_0

    .line 3911
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method static synthetic f(Lcom/tkay/expressad/reward/a/d;)Ljava/lang/String;
    .locals 0

    .line 60
    iget-object p0, p0, Lcom/tkay/expressad/reward/a/d;->w:Ljava/lang/String;

    return-object p0
.end method

.method private f(Ljava/util/List;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)V"
        }
    .end annotation

    if-eqz p1, :cond_0

    .line 3519
    :try_start_0
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 3520
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onload \u5f00\u59cb\u4e0b\u8f7d\u89c6\u9891\u7d20\u6750 size:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 3521
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d;->R:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->clear()V

    .line 3522
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d;->R:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/CopyOnWriteArrayList;->addAll(Ljava/util/Collection;)Z

    .line 3523
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/j;->a()Lcom/tkay/expressad/videocommon/b/j;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/videocommon/b/j;->a(Ljava/util/List;)V

    .line 3524
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 3525
    new-instance v0, Lcom/tkay/expressad/reward/a/d$b;

    const/4 v1, 0x0

    invoke-interface {p1, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/foundation/d/c;

    invoke-direct {v0, p0, v1}, Lcom/tkay/expressad/reward/a/d$b;-><init>(Lcom/tkay/expressad/reward/a/d;Lcom/tkay/expressad/foundation/d/c;)V

    .line 3526
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d;->w:Ljava/lang/String;

    const/16 v3, 0x5e

    invoke-virtual {v1, v2, p1, v3, v0}, Lcom/tkay/expressad/videocommon/b/c;->a(Ljava/lang/String;Ljava/util/List;ILcom/tkay/expressad/videocommon/d/b;)Lcom/tkay/expressad/videocommon/b/n;

    .line 3527
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d;->w:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/videocommon/b/c;->d(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 3533
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    :cond_0
    :goto_0
    return-void
.end method

.method static synthetic g(Lcom/tkay/expressad/reward/a/d;)Ljava/util/List;
    .locals 0

    .line 60
    iget-object p0, p0, Lcom/tkay/expressad/reward/a/d;->ah:Ljava/util/List;

    return-object p0
.end method

.method private g()V
    .locals 1

    .line 190
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d;->R:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 191
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d;->R:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->clear()V

    :cond_0
    return-void
.end method

.method private g(Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)V"
        }
    .end annotation

    if-eqz p1, :cond_0

    .line 3629
    :try_start_0
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 3630
    iget v0, p0, Lcom/tkay/expressad/reward/a/d;->y:I

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    add-int/2addr v0, p1

    iput v0, p0, Lcom/tkay/expressad/reward/a/d;->y:I

    .line 3632
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d;->I:Lcom/tkay/expressad/videocommon/e/d;

    if-eqz p1, :cond_1

    iget p1, p0, Lcom/tkay/expressad/reward/a/d;->y:I

    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d;->I:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/d;->D()I

    move-result v0

    if-le p1, v0, :cond_2

    :cond_1
    const/4 p1, 0x0

    .line 3634
    iput p1, p0, Lcom/tkay/expressad/reward/a/d;->y:I

    .line 3636
    :cond_2
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "onload \u7b97\u51fa \u4e0b\u6b21\u7684offset\u662f:"

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v0, p0, Lcom/tkay/expressad/reward/a/d;->y:I

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 3638
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d;->w:Ljava/lang/String;

    invoke-static {p1}, Lcom/tkay/expressad/foundation/h/w;->b(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_3

    .line 3639
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d;->w:Ljava/lang/String;

    iget v0, p0, Lcom/tkay/expressad/reward/a/d;->y:I

    invoke-static {p1, v0}, Lcom/tkay/expressad/reward/b/a;->a(Ljava/lang/String;I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_3
    return-void

    :catch_0
    move-exception p1

    .line 3642
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method private h()I
    .locals 1

    .line 196
    iget v0, p0, Lcom/tkay/expressad/reward/a/d;->S:I

    return v0
.end method

.method private h(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)V"
        }
    .end annotation

    .line 3933
    iput-object p1, p0, Lcom/tkay/expressad/reward/a/d;->ah:Ljava/util/List;

    return-void
.end method

.method static synthetic h(Lcom/tkay/expressad/reward/a/d;)Z
    .locals 0

    .line 60
    iget-boolean p0, p0, Lcom/tkay/expressad/reward/a/d;->U:Z

    return p0
.end method

.method static synthetic i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;
    .locals 0

    .line 60
    iget-object p0, p0, Lcom/tkay/expressad/reward/a/d;->ad:Landroid/os/Handler;

    return-object p0
.end method

.method private static i()V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    return-void
.end method

.method static synthetic j(Lcom/tkay/expressad/reward/a/d;)Ljava/util/concurrent/CopyOnWriteArrayList;
    .locals 0

    .line 60
    iget-object p0, p0, Lcom/tkay/expressad/reward/a/d;->R:Ljava/util/concurrent/CopyOnWriteArrayList;

    return-object p0
.end method

.method private static j()V
    .locals 0

    return-void
.end method

.method static synthetic k(Lcom/tkay/expressad/reward/a/d;)Lcom/tkay/expressad/foundation/d/d;
    .locals 0

    .line 60
    iget-object p0, p0, Lcom/tkay/expressad/reward/a/d;->Z:Lcom/tkay/expressad/foundation/d/d;

    return-object p0
.end method

.method private k()V
    .locals 2

    .line 1570
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d;->ad:Landroid/os/Handler;

    if-eqz v0, :cond_0

    const/4 v1, 0x3

    .line 1571
    invoke-virtual {v0, v1}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    :cond_0
    return-void
.end method

.method private static l()V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    return-void
.end method

.method static synthetic l(Lcom/tkay/expressad/reward/a/d;)Z
    .locals 0

    .line 60
    iget-boolean p0, p0, Lcom/tkay/expressad/reward/a/d;->ab:Z

    return p0
.end method

.method private static m()V
    .locals 0

    return-void
.end method

.method static synthetic m(Lcom/tkay/expressad/reward/a/d;)Z
    .locals 0

    .line 60
    iget-boolean p0, p0, Lcom/tkay/expressad/reward/a/d;->T:Z

    return p0
.end method

.method static synthetic n(Lcom/tkay/expressad/reward/a/d;)I
    .locals 0

    .line 60
    iget p0, p0, Lcom/tkay/expressad/reward/a/d;->S:I

    return p0
.end method

.method private static n()V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    return-void
.end method

.method static synthetic o(Lcom/tkay/expressad/reward/a/d;)Lcom/tkay/expressad/videocommon/e/d;
    .locals 0

    .line 60
    iget-object p0, p0, Lcom/tkay/expressad/reward/a/d;->I:Lcom/tkay/expressad/videocommon/e/d;

    return-object p0
.end method

.method private static o()V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    return-void
.end method

.method static synthetic p(Lcom/tkay/expressad/reward/a/d;)Ljava/lang/String;
    .locals 0

    .line 60
    iget-object p0, p0, Lcom/tkay/expressad/reward/a/d;->x:Ljava/lang/String;

    return-object p0
.end method

.method private static p()V
    .locals 0

    return-void
.end method

.method private q()I
    .locals 3

    const/4 v0, 0x0

    .line 3654
    :try_start_0
    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d;->w:Ljava/lang/String;

    invoke-static {v1}, Lcom/tkay/expressad/foundation/h/w;->b(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 3656
    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d;->w:Ljava/lang/String;

    invoke-static {v1}, Lcom/tkay/expressad/reward/b/a;->a(Ljava/lang/String;)I

    move-result v1

    goto :goto_0

    :cond_0
    move v1, v0

    .line 3658
    :goto_0
    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d;->I:Lcom/tkay/expressad/videocommon/e/d;

    if-eqz v2, :cond_2

    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d;->I:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v2}, Lcom/tkay/expressad/videocommon/e/d;->D()I

    move-result v2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-le v1, v2, :cond_1

    goto :goto_1

    :cond_1
    move v0, v1

    goto :goto_1

    :catch_0
    move-exception v1

    .line 3664
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2
    :goto_1
    return v0
.end method

.method static synthetic q(Lcom/tkay/expressad/reward/a/d;)Landroid/content/Context;
    .locals 0

    .line 60
    iget-object p0, p0, Lcom/tkay/expressad/reward/a/d;->v:Landroid/content/Context;

    return-object p0
.end method

.method private r()V
    .locals 2

    .line 3674
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d;->w:Ljava/lang/String;

    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/w;->b(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 3675
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d;->w:Ljava/lang/String;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/tkay/expressad/reward/b/a;->a(Ljava/lang/String;I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-void

    :catch_0
    move-exception v0

    .line 3678
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method private static s()Ljava/lang/String;
    .locals 2

    const-string v0, ""

    .line 3691
    :try_start_0
    sget-object v1, Lcom/tkay/expressad/reward/b/a;->b:Ljava/lang/String;

    invoke-static {v1}, Lcom/tkay/expressad/foundation/h/w;->b(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 3692
    sget-object v0, Lcom/tkay/expressad/reward/b/a;->b:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 3695
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-object v0
.end method

.method private static t()Ljava/lang/String;
    .locals 1

    const-string v0, ""

    return-object v0
.end method

.method private static u()V
    .locals 2

    .line 3747
    :try_start_0
    sget-object v0, Lcom/tkay/expressad/foundation/g/a/f;->h:Ljava/util/Map;

    if-eqz v0, :cond_0

    sget-object v0, Lcom/tkay/expressad/foundation/g/a/f;->h:Ljava/util/Map;

    .line 3748
    invoke-interface {v0}, Ljava/util/Map;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 3749
    sget-object v0, Lcom/tkay/expressad/foundation/g/a/f;->h:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->clear()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-void

    :catch_0
    move-exception v0

    .line 3752
    sget-boolean v1, Lcom/tkay/expressad/b;->a:Z

    if-eqz v1, :cond_1

    .line 3753
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    return-void
.end method

.method private static v()V
    .locals 0

    return-void
.end method

.method private static synthetic w()V
    .locals 0

    return-void
.end method

.method private static synthetic x()V
    .locals 0

    return-void
.end method


# virtual methods
.method public final a(I)V
    .locals 0

    .line 200
    iput p1, p0, Lcom/tkay/expressad/reward/a/d;->S:I

    return-void
.end method

.method public final a(III)V
    .locals 0

    .line 3980
    iput p1, p0, Lcom/tkay/expressad/reward/a/d;->W:I

    .line 3981
    iput p2, p0, Lcom/tkay/expressad/reward/a/d;->X:I

    .line 3982
    iput p3, p0, Lcom/tkay/expressad/reward/a/d;->Y:I

    return-void
.end method

.method public final a(Landroid/app/Activity;Lcom/tkay/expressad/video/bt/module/b/h;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Lcom/tkay/core/common/f/i;)V
    .locals 2

    .line 1271
    :try_start_0
    iput-object p2, p0, Lcom/tkay/expressad/reward/a/d;->F:Lcom/tkay/expressad/video/bt/module/b/h;

    .line 1273
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d;->v:Landroid/content/Context;

    if-eqz p2, :cond_8

    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d;->w:Ljava/lang/String;

    invoke-static {p2}, Lcom/tkay/expressad/foundation/h/w;->a(Ljava/lang/String;)Z

    move-result p2

    if-eqz p2, :cond_0

    goto/16 :goto_2

    .line 1281
    :cond_0
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d;->v:Landroid/content/Context;

    if-eqz p1, :cond_1

    .line 1282
    invoke-virtual {p1}, Landroid/app/Activity;->isFinishing()Z

    move-result v0

    if-nez v0, :cond_1

    goto :goto_0

    :cond_1
    const-string p1, "tkay_BaseAdActivity"

    const-string v0, "Activity is null"

    .line 1285
    invoke-static {p1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    move-object p1, p2

    .line 1289
    :goto_0
    new-instance p2, Landroid/content/Intent;

    const-class v0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;

    invoke-direct {p2, p1, v0}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    .line 1290
    instance-of v0, p1, Landroid/app/Activity;

    if-nez v0, :cond_2

    const/high16 v0, 0x10000000

    .line 1291
    invoke-virtual {p2, v0}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    .line 1293
    :cond_2
    sget-object v0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->a:Ljava/lang/String;

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d;->w:Ljava/lang/String;

    invoke-virtual {p2, v0, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 1294
    sget-object v0, Lcom/tkay/expressad/b;->y:Ljava/lang/String;

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d;->x:Ljava/lang/String;

    invoke-virtual {p2, v0, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 1295
    sget-object v0, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->c:Ljava/lang/String;

    invoke-virtual {p2, v0, p3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 1296
    sget-object p3, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->d:Ljava/lang/String;

    invoke-virtual {p2, p3, p5}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 1297
    sget-object p3, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->e:Ljava/lang/String;

    iget-boolean p5, p0, Lcom/tkay/expressad/reward/a/d;->T:Z

    invoke-virtual {p2, p3, p5}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 1298
    sget-object p3, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->f:Ljava/lang/String;

    iget-boolean p5, p0, Lcom/tkay/expressad/reward/a/d;->U:Z

    invoke-virtual {p2, p3, p5}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 1299
    sget-object p3, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->l:Ljava/lang/String;

    invoke-virtual {p2, p3, p6}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 1300
    sget-object p3, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->m:Ljava/lang/String;

    invoke-virtual {p2, p3, p7}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/io/Serializable;)Landroid/content/Intent;

    .line 1302
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object p3

    iget-object p5, p0, Lcom/tkay/expressad/reward/a/d;->w:Ljava/lang/String;

    invoke-virtual {p3, p5}, Lcom/tkay/expressad/videocommon/b/c;->a(Ljava/lang/String;)Ljava/util/List;

    move-result-object p3

    .line 1303
    new-instance p5, Ljava/lang/StringBuilder;

    const-string p6, "cur showing Offer requestId"

    invoke-direct {p5, p6}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    const/4 p6, 0x0

    invoke-interface {p3, p6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p7

    check-cast p7, Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p7}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object p7

    invoke-virtual {p5, p7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-eqz p3, :cond_4

    .line 1304
    invoke-interface {p3}, Ljava/util/List;->size()I

    move-result p5

    if-lez p5, :cond_4

    .line 1305
    new-instance p5, Ljava/lang/StringBuilder;

    const-string p7, "can show data: "

    invoke-direct {p5, p7}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-interface {p3}, Ljava/util/List;->size()I

    move-result p7

    invoke-virtual {p5, p7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 1306
    invoke-interface {p3, p6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Lcom/tkay/expressad/foundation/d/c;

    if-eqz p3, :cond_3

    .line 1308
    invoke-virtual {p3}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object p5

    iput-object p5, p0, Lcom/tkay/expressad/reward/a/d;->n:Ljava/lang/String;

    :cond_3
    if-eqz p3, :cond_5

    .line 1310
    invoke-virtual {p3}, Lcom/tkay/expressad/foundation/d/c;->ar()Ljava/lang/String;

    move-result-object p3

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_5

    const/4 p3, 0x1

    move p6, p3

    goto :goto_1

    .line 1316
    :cond_4
    iget-object p3, p0, Lcom/tkay/expressad/reward/a/d;->F:Lcom/tkay/expressad/video/bt/module/b/h;

    if-eqz p3, :cond_5

    .line 1317
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d;->F:Lcom/tkay/expressad/video/bt/module/b/h;

    const-string p2, "load failed"

    invoke-interface {p1, p2}, Lcom/tkay/expressad/video/bt/module/b/h;->a(Ljava/lang/String;)V

    return-void

    .line 1322
    :cond_5
    :goto_1
    sget-object p3, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->g:Ljava/lang/String;

    invoke-virtual {p2, p3, p6}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 1323
    iget-boolean p3, p0, Lcom/tkay/expressad/reward/a/d;->T:Z

    if-eqz p3, :cond_6

    .line 1324
    sget-object p3, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->i:Ljava/lang/String;

    iget p5, p0, Lcom/tkay/expressad/reward/a/d;->W:I

    invoke-virtual {p2, p3, p5}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 1325
    sget-object p3, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->j:Ljava/lang/String;

    iget p5, p0, Lcom/tkay/expressad/reward/a/d;->X:I

    invoke-virtual {p2, p3, p5}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 1326
    sget-object p3, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->k:Ljava/lang/String;

    iget p5, p0, Lcom/tkay/expressad/reward/a/d;->Y:I

    invoke-virtual {p2, p3, p5}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 1329
    :cond_6
    invoke-static {p4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_7

    .line 1330
    sget-object p3, Lcom/tkay/expressad/reward/player/TYRewardVideoActivity;->b:Ljava/lang/String;

    invoke-virtual {p2, p3, p4}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 8018
    :cond_7
    invoke-static {}, Lcom/tkay/expressad/reward/a/e$a;->a()Lcom/tkay/expressad/reward/a/e;

    move-result-object p3

    .line 1332
    iget-object p4, p0, Lcom/tkay/expressad/reward/a/d;->x:Ljava/lang/String;

    iget-object p5, p0, Lcom/tkay/expressad/reward/a/d;->w:Ljava/lang/String;

    iget-object p6, p0, Lcom/tkay/expressad/reward/a/d;->I:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {p3, p4, p5, p6}, Lcom/tkay/expressad/reward/a/e;->a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/videocommon/e/d;)V

    .line 1333
    invoke-virtual {p1, p2}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    return-void

    .line 1274
    :cond_8
    :goto_2
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d;->F:Lcom/tkay/expressad/video/bt/module/b/h;

    if-eqz p1, :cond_9

    .line 1275
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d;->F:Lcom/tkay/expressad/video/bt/module/b/h;

    const-string p2, "context or unitid is null"

    invoke-interface {p1, p2}, Lcom/tkay/expressad/video/bt/module/b/h;->a(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_9
    return-void

    :catch_0
    move-exception p1

    .line 1336
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 1337
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d;->F:Lcom/tkay/expressad/video/bt/module/b/h;

    if-eqz p2, :cond_a

    .line 1338
    new-instance p3, Ljava/lang/StringBuilder;

    const-string p4, "show failed, exception is "

    invoke-direct {p3, p4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-interface {p2, p1}, Lcom/tkay/expressad/video/bt/module/b/h;->a(Ljava/lang/String;)V

    :cond_a
    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/d/d;)V
    .locals 3

    const/4 v0, 0x1

    .line 1418
    iput v0, p0, Lcom/tkay/expressad/reward/a/d;->z:I

    const/16 v1, 0x8

    .line 1419
    iput v1, p0, Lcom/tkay/expressad/reward/a/d;->B:I

    .line 1420
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/a/d;->C:Z

    .line 1423
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d;->aa:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v0, :cond_0

    .line 1424
    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->clear()V

    .line 1427
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d;->ag:Ljava/util/List;

    if-eqz v0, :cond_1

    .line 1428
    invoke-interface {v0}, Ljava/util/List;->clear()V

    :cond_1
    const/4 v0, 0x0

    .line 1431
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/a/d;->p:Z

    .line 1432
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/a/d;->q:Z

    .line 1433
    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d;->c:Ljava/lang/Object;

    monitor-enter v1

    .line 1434
    :try_start_0
    iget-boolean v2, p0, Lcom/tkay/expressad/reward/a/d;->r:Z

    if-eqz v2, :cond_2

    .line 1435
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/a/d;->r:Z

    .line 1437
    :cond_2
    monitor-exit v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 1438
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/a/d;->t:Z

    .line 1439
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/a/d;->s:Z

    .line 1454
    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d;->v:Landroid/content/Context;

    if-nez v1, :cond_3

    const-string p1, "Context is null"

    .line 1455
    invoke-direct {p0, p1}, Lcom/tkay/expressad/reward/a/d;->b(Ljava/lang/String;)V

    return-void

    .line 1458
    :cond_3
    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d;->w:Ljava/lang/String;

    invoke-static {v1}, Lcom/tkay/expressad/foundation/h/w;->a(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_4

    const-string p1, "UnitId is null"

    .line 1459
    invoke-direct {p0, p1}, Lcom/tkay/expressad/reward/a/d;->b(Ljava/lang/String;)V

    return-void

    .line 1462
    :cond_4
    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d;->I:Lcom/tkay/expressad/videocommon/e/d;

    if-nez v1, :cond_5

    const-string p1, "RewardUnitSetting is null"

    .line 1463
    invoke-direct {p0, p1}, Lcom/tkay/expressad/reward/a/d;->b(Ljava/lang/String;)V

    return-void

    .line 8747
    :cond_5
    :try_start_1
    sget-object v1, Lcom/tkay/expressad/foundation/g/a/f;->h:Ljava/util/Map;

    if-eqz v1, :cond_6

    sget-object v1, Lcom/tkay/expressad/foundation/g/a/f;->h:Ljava/util/Map;

    .line 8748
    invoke-interface {v1}, Ljava/util/Map;->size()I

    move-result v1

    if-lez v1, :cond_6

    .line 8749
    sget-object v1, Lcom/tkay/expressad/foundation/g/a/f;->h:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->clear()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 8752
    sget-boolean v2, Lcom/tkay/expressad/b;->a:Z

    if-eqz v2, :cond_6

    .line 8753
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 9524
    :cond_6
    :goto_0
    :try_start_2
    iput-object p1, p0, Lcom/tkay/expressad/reward/a/d;->Z:Lcom/tkay/expressad/foundation/d/d;

    .line 9526
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v1, "V3 data just requested back,requestId "

    invoke-direct {p1, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d;->Z:Lcom/tkay/expressad/foundation/d/d;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/d;->f()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 9527
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d;->Z:Lcom/tkay/expressad/foundation/d/d;

    if-eqz p1, :cond_7

    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d;->Z:Lcom/tkay/expressad/foundation/d/d;

    .line 10374
    iget-object p1, p1, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    if-eqz p1, :cond_7

    .line 9527
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d;->Z:Lcom/tkay/expressad/foundation/d/d;

    .line 11374
    iget-object p1, p1, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    .line 9527
    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    .line 9534
    :cond_7
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d;->Z:Lcom/tkay/expressad/foundation/d/d;

    invoke-direct {p0, p1}, Lcom/tkay/expressad/reward/a/d;->c(Lcom/tkay/expressad/foundation/d/d;)V

    .line 9535
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d;->Z:Lcom/tkay/expressad/foundation/d/d;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/d;->f()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/reward/a/d;->m:Ljava/lang/String;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    return-void

    :catch_1
    move-exception p1

    .line 9537
    sget-boolean v1, Lcom/tkay/expressad/b;->a:Z

    if-eqz v1, :cond_8

    .line 9538
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 9541
    :cond_8
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d;->aa:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz p1, :cond_9

    .line 9542
    invoke-virtual {p1}, Ljava/util/concurrent/CopyOnWriteArrayList;->clear()V

    .line 9544
    :cond_9
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d;->ag:Ljava/util/List;

    if-eqz p1, :cond_a

    .line 9545
    invoke-interface {p1}, Ljava/util/List;->clear()V

    .line 9547
    :cond_a
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/a/d;->p:Z

    .line 9548
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/a/d;->q:Z

    .line 9549
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d;->c:Ljava/lang/Object;

    monitor-enter p1

    .line 9550
    :try_start_3
    iget-boolean v1, p0, Lcom/tkay/expressad/reward/a/d;->r:Z

    if-eqz v1, :cond_b

    .line 9551
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/a/d;->r:Z

    .line 9553
    :cond_b
    monitor-exit p1
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 9554
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/a/d;->t:Z

    .line 9555
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/a/d;->s:Z

    const-string p1, "exception after load success"

    .line 9561
    invoke-direct {p0, p1}, Lcom/tkay/expressad/reward/a/d;->b(Ljava/lang/String;)V

    .line 9562
    invoke-direct {p0}, Lcom/tkay/expressad/reward/a/d;->r()V

    return-void

    :catchall_0
    move-exception v0

    .line 9553
    monitor-exit p1

    throw v0

    :catchall_1
    move-exception p1

    .line 1437
    monitor-exit v1

    throw p1
.end method

.method public final a(Lcom/tkay/expressad/reward/a/b;)V
    .locals 0

    .line 1837
    iput-object p1, p0, Lcom/tkay/expressad/reward/a/d;->G:Lcom/tkay/expressad/reward/a/b;

    return-void
.end method

.method public final a(Lcom/tkay/expressad/videocommon/e/d;)V
    .locals 1

    .line 1088
    :try_start_0
    iput-object p1, p0, Lcom/tkay/expressad/reward/a/d;->I:Lcom/tkay/expressad/videocommon/e/d;

    if-eqz p1, :cond_0

    .line 1095
    invoke-virtual {p1}, Lcom/tkay/expressad/videocommon/e/d;->V()I

    move-result p1

    mul-int/lit16 p1, p1, 0x3e8

    sget v0, Lcom/tkay/expressad/foundation/g/a;->cq:I

    if-eq p1, v0, :cond_0

    .line 1096
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d;->I:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {p1}, Lcom/tkay/expressad/videocommon/e/d;->V()I

    move-result p1

    mul-int/lit16 p1, p1, 0x3e8

    sput p1, Lcom/tkay/expressad/foundation/g/a;->cq:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    .line 1099
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public final a(Z)V
    .locals 0

    .line 178
    iput-boolean p1, p0, Lcom/tkay/expressad/reward/a/d;->T:Z

    return-void
.end method

.method public final a()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public final a(Ljava/util/List;ZI)Z
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;ZI)Z"
        }
    .end annotation

    .line 1113
    invoke-direct {p0, p1, p2, p3}, Lcom/tkay/expressad/reward/a/d;->b(Ljava/util/List;ZI)Z

    move-result p1

    return p1
.end method

.method public final b()V
    .locals 0

    return-void
.end method

.method public final b(Z)V
    .locals 0

    .line 182
    iput-boolean p1, p0, Lcom/tkay/expressad/reward/a/d;->U:Z

    return-void
.end method

.method public final c(Z)Ljava/lang/String;
    .locals 1

    if-eqz p1, :cond_1

    .line 209
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d;->n:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 210
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d;->w:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/videocommon/b/c;->a(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 211
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    const/4 v0, 0x0

    .line 212
    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/foundation/d/c;

    if-eqz p1, :cond_0

    .line 214
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/reward/a/d;->n:Ljava/lang/String;

    .line 218
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d;->n:Ljava/lang/String;

    return-object p1

    .line 220
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d;->m:Ljava/lang/String;

    return-object p1
.end method

.method public final c()Z
    .locals 3

    .line 1197
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d;->aa:Ljava/util/concurrent/CopyOnWriteArrayList;

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    .line 1201
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d;->aa:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0, v1}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/foundation/d/c;

    .line 1203
    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d;->aa:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->ar()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    xor-int/lit8 v2, v2, 0x1

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->ap()I

    move-result v0

    .line 7113
    invoke-direct {p0, v1, v2, v0}, Lcom/tkay/expressad/reward/a/d;->b(Ljava/util/List;ZI)Z

    move-result v0

    return v0

    :cond_1
    :goto_0
    return v1
.end method

.method public final d()V
    .locals 0

    return-void
.end method

.method public final d(Z)V
    .locals 0

    if-nez p1, :cond_0

    .line 2476
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d;->aa:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result p1

    if-lez p1, :cond_0

    .line 2477
    invoke-static {}, Lcom/tkay/expressad/videocommon/a/a;->a()Lcom/tkay/expressad/videocommon/a/a;

    :cond_0
    return-void
.end method

.method public final e()Ljava/lang/String;
    .locals 1

    .line 204
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d;->w:Ljava/lang/String;

    return-object v0
.end method

.method public final e(Z)V
    .locals 6

    const-string v0, "_"

    const/4 v1, 0x0

    if-eqz p1, :cond_2

    .line 2484
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d;->ah:Ljava/util/List;

    if-eqz p1, :cond_4

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_4

    .line 2485
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d;->ah:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_0
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/foundation/d/c;

    if-eqz v2, :cond_0

    .line 2487
    invoke-virtual {v2, v1}, Lcom/tkay/expressad/foundation/d/c;->l(I)V

    .line 2488
    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v3

    if-eqz v3, :cond_0

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_0

    .line 2489
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/j;->a()Lcom/tkay/expressad/videocommon/b/j;

    move-result-object v3

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/tkay/expressad/reward/a/d;->w:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v2, v1}, Lcom/tkay/expressad/videocommon/b/j;->c(Ljava/lang/String;Z)V

    goto :goto_0

    :cond_1
    return-void

    .line 2497
    :cond_2
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d;->aa:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz p1, :cond_4

    invoke-virtual {p1}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result p1

    if-lez p1, :cond_4

    .line 2499
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d;->aa:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {p1}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_3
    :goto_1
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_4

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/foundation/d/c;

    if-eqz v2, :cond_3

    .line 2501
    invoke-virtual {v2, v1}, Lcom/tkay/expressad/foundation/d/c;->l(I)V

    .line 2502
    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v3

    if-eqz v3, :cond_3

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_3

    .line 2503
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/j;->a()Lcom/tkay/expressad/videocommon/b/j;

    move-result-object v3

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/tkay/expressad/reward/a/d;->w:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v2, v1}, Lcom/tkay/expressad/videocommon/b/j;->c(Ljava/lang/String;Z)V

    goto :goto_1

    :cond_4
    return-void
.end method

.method public final f()Ljava/util/concurrent/CopyOnWriteArrayList;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation

    .line 3937
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d;->aa:Ljava/util/concurrent/CopyOnWriteArrayList;

    return-object v0
.end method

.method public final f(Z)Z
    .locals 6

    const-string v0, "_"

    const/4 v1, 0x1

    if-eqz p1, :cond_2

    .line 2515
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d;->ah:Ljava/util/List;

    if-eqz p1, :cond_5

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_5

    .line 2517
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d;->ah:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_0
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/foundation/d/c;

    if-eqz v2, :cond_0

    .line 2519
    invoke-virtual {v2, v1}, Lcom/tkay/expressad/foundation/d/c;->l(I)V

    .line 2520
    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v3

    if-eqz v3, :cond_0

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_0

    .line 2521
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/j;->a()Lcom/tkay/expressad/videocommon/b/j;

    move-result-object v3

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/tkay/expressad/reward/a/d;->w:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v2, v1}, Lcom/tkay/expressad/videocommon/b/j;->c(Ljava/lang/String;Z)V

    goto :goto_0

    :cond_1
    return v1

    .line 2530
    :cond_2
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d;->aa:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz p1, :cond_5

    invoke-virtual {p1}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result p1

    if-lez p1, :cond_5

    .line 2532
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d;->aa:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {p1}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_3
    :goto_1
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_4

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/foundation/d/c;

    if-eqz v2, :cond_3

    .line 2534
    invoke-virtual {v2, v1}, Lcom/tkay/expressad/foundation/d/c;->l(I)V

    .line 2535
    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v3

    if-eqz v3, :cond_3

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_3

    .line 2536
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/j;->a()Lcom/tkay/expressad/videocommon/b/j;

    move-result-object v3

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/tkay/expressad/reward/a/d;->w:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v2, v1}, Lcom/tkay/expressad/videocommon/b/j;->c(Ljava/lang/String;Z)V

    goto :goto_1

    :cond_4
    return v1

    :cond_5
    const/4 p1, 0x0

    return p1
.end method
