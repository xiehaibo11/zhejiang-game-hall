.class public final Lcom/mbridge/msdk/mbjscommon/confirmation/e;
.super Ljava/lang/Object;
.source "SecondaryConfirmationManager.java"

# interfaces
.implements Ljava/io/Serializable;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/mbjscommon/confirmation/e$a;,
        Lcom/mbridge/msdk/mbjscommon/confirmation/e$b;
    }
.end annotation


# static fields
.field public static b:I = 0x1

.field public static c:I = 0x0

.field public static d:I = 0x2


# instance fields
.field a:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

.field private f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

.field private g:Lcom/mbridge/msdk/mbjscommon/confirmation/b;

.field private h:Lcom/mbridge/msdk/mbjscommon/confirmation/b;

.field private i:Lcom/mbridge/msdk/mbjscommon/confirmation/c;

.field private j:I

.field private k:Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;

.field private l:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

.field private m:Ljava/util/concurrent/atomic/AtomicBoolean;

.field private n:Ljava/util/concurrent/atomic/AtomicBoolean;

.field private volatile o:Z

.field private p:Ljava/util/Timer;

.field private q:Lcom/mbridge/msdk/mbjscommon/confirmation/e$a;

.field private final r:Landroid/os/Handler;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>()V
    .locals 2

    .line 94
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 57
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a:Ljava/util/HashMap;

    const/4 v0, 0x1

    .line 65
    iput v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->j:I

    .line 68
    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    iput-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->m:Ljava/util/concurrent/atomic/AtomicBoolean;

    .line 69
    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    iput-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->n:Ljava/util/concurrent/atomic/AtomicBoolean;

    .line 70
    iput-boolean v1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->o:Z

    .line 71
    new-instance v0, Ljava/util/Timer;

    invoke-direct {v0}, Ljava/util/Timer;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->p:Ljava/util/Timer;

    .line 73
    new-instance v0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$1;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, p0, v1}, Lcom/mbridge/msdk/mbjscommon/confirmation/e$1;-><init>(Lcom/mbridge/msdk/mbjscommon/confirmation/e;Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->r:Landroid/os/Handler;

    return-void
.end method

.method synthetic constructor <init>(Lcom/mbridge/msdk/mbjscommon/confirmation/e$1;)V
    .locals 0

    .line 52
    invoke-direct {p0}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbjscommon/confirmation/e;Ljava/lang/Object;)Lcom/mbridge/msdk/mbjscommon/confirmation/a;
    .locals 0

    .line 52
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Ljava/lang/Object;)Lcom/mbridge/msdk/mbjscommon/confirmation/a;

    move-result-object p0

    return-object p0
.end method

.method private a(Ljava/lang/Object;)Lcom/mbridge/msdk/mbjscommon/confirmation/a;
    .locals 1

    .line 773
    instance-of v0, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    if-eqz v0, :cond_0

    .line 774
    check-cast p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    iget-object p1, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    .line 775
    invoke-virtual {p1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object p1

    .line 776
    instance-of v0, p1, Lcom/mbridge/msdk/mbjscommon/confirmation/a;

    if-eqz v0, :cond_0

    .line 777
    check-cast p1, Lcom/mbridge/msdk/mbjscommon/confirmation/a;

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return-object p1
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbjscommon/confirmation/e;)Lcom/mbridge/msdk/mbjscommon/confirmation/b;
    .locals 0

    .line 52
    iget-object p0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->h:Lcom/mbridge/msdk/mbjscommon/confirmation/b;

    return-object p0
.end method

.method public static a()Lcom/mbridge/msdk/mbjscommon/confirmation/e;
    .locals 1

    .line 102
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/confirmation/e$b;->a()Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    move-result-object v0

    return-object v0
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbjscommon/confirmation/e;Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;)Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;
    .locals 0

    .line 52
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->k:Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;

    return-object p1
.end method

.method private a(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 356
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 357
    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1

    invoke-virtual {p1}, Landroid/net/Uri;->buildUpon()Landroid/net/Uri$Builder;

    move-result-object p1

    const-string v0, "dialogRenderMode"

    const-string v1, "default"

    .line 358
    invoke-virtual {p1, v0, v1}, Landroid/net/Uri$Builder;->appendQueryParameter(Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri$Builder;

    .line 359
    invoke-virtual {p1}, Landroid/net/Uri$Builder;->toString()Ljava/lang/String;

    move-result-object p1

    :cond_0
    return-object p1
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 107
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    return-object p1

    .line 110
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    .line 111
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1, p2}, Lcom/mbridge/msdk/c/b;->e(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object p2

    if-eqz p2, :cond_1

    .line 1158
    sget-object p1, Lcom/mbridge/msdk/c/d;->a:Ljava/lang/String;

    .line 115
    :cond_1
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_2

    return-object p1

    :cond_2
    const-string p1, ""

    return-object p1
.end method

.method private a(I)V
    .locals 1

    .line 784
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->q:Lcom/mbridge/msdk/mbjscommon/confirmation/e$a;

    if-eqz v0, :cond_0

    .line 785
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/mbjscommon/confirmation/e$a;->a(I)V

    :cond_0
    return-void
.end method

.method private a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/mbjscommon/confirmation/c;)V
    .locals 6

    .line 406
    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->k:Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;

    if-eqz v1, :cond_3

    .line 407
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->makeDownloadAlert(Ljava/lang/String;)V

    .line 408
    instance-of v1, p2, Landroid/app/Activity;

    if-eqz v1, :cond_2

    .line 409
    move-object v1, p2

    check-cast v1, Landroid/app/Activity;

    .line 410
    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x11

    if-lt v2, v3, :cond_0

    invoke-virtual {v1}, Landroid/app/Activity;->isDestroyed()Z

    move-result v2

    if-eqz v2, :cond_0

    const/4 v4, 0x4

    const/4 v5, 0x2

    move-object v0, p2

    move-object v1, p1

    move-object v2, p3

    move-object v3, p4

    .line 411
    invoke-static/range {v0 .. v5}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;II)V

    .line 412
    invoke-virtual {p0}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->b()V

    return-void

    .line 415
    :cond_0
    invoke-virtual {v1}, Landroid/app/Activity;->isFinishing()Z

    move-result v1

    if-nez v1, :cond_1

    .line 416
    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->k:Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;

    invoke-virtual {v1}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->show()V

    const/4 v1, 0x1

    .line 422
    iput v1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->j:I

    .line 423
    invoke-direct {p0, v1}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(I)V

    .line 424
    iget v1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->j:I

    invoke-virtual {p5, v1}, Lcom/mbridge/msdk/mbjscommon/confirmation/c;->a(I)V

    const/4 v4, 0x1

    const/4 v5, 0x2

    move-object v0, p2

    move-object v1, p1

    move-object v2, p3

    move-object v3, p4

    .line 425
    invoke-static/range {v0 .. v5}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;II)V

    goto :goto_0

    :cond_1
    const/4 v4, 0x4

    const/4 v5, 0x2

    move-object v0, p2

    move-object v1, p1

    move-object v2, p3

    move-object v3, p4

    .line 418
    invoke-static/range {v0 .. v5}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;II)V

    .line 419
    invoke-virtual {p0}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->b()V

    return-void

    .line 427
    :cond_2
    invoke-virtual {p0}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->b()V

    :cond_3
    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbjscommon/confirmation/e;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/mbjscommon/confirmation/c;)V
    .locals 0

    .line 52
    invoke-direct/range {p0 .. p5}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/mbjscommon/confirmation/c;)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbjscommon/confirmation/e;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;)V
    .locals 2

    .line 2734
    iget-object p0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->k:Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;

    if-eqz p0, :cond_0

    .line 2735
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->clear()V

    :cond_0
    if-eqz p1, :cond_1

    .line 2738
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p0

    const-string v0, "close"

    const-string v1, ""

    invoke-virtual {p0, p1, v0, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbjscommon/confirmation/e;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/mbjscommon/confirmation/c;)V
    .locals 0

    .line 52
    invoke-direct/range {p0 .. p6}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/mbjscommon/confirmation/c;)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbjscommon/confirmation/e;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/mbjscommon/confirmation/c;)V
    .locals 0

    .line 52
    invoke-direct/range {p0 .. p5}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->b(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/mbjscommon/confirmation/c;)V

    return-void
.end method

.method private a(Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;)V
    .locals 3

    if-eqz p1, :cond_0

    .line 662
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v0

    const-string v1, "webviewshow"

    const-string v2, ""

    invoke-virtual {v0, p1, v1, v2}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method private a(Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/mbjscommon/confirmation/c;)V
    .locals 6

    if-eqz p1, :cond_4

    .line 434
    invoke-virtual {p1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->isDestoryed()Z

    move-result v1

    if-nez v1, :cond_4

    .line 435
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;)V

    .line 436
    invoke-virtual {p1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getParent()Landroid/view/ViewParent;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 437
    invoke-virtual {p1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getParent()Landroid/view/ViewParent;

    move-result-object v1

    .line 438
    check-cast v1, Landroid/view/ViewGroup;

    invoke-virtual {v1, p1}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 440
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->k:Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;

    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setContentView(Landroid/view/View;)V

    .line 442
    instance-of v0, p4, Landroid/app/Activity;

    if-eqz v0, :cond_3

    .line 443
    move-object v0, p4

    check-cast v0, Landroid/app/Activity;

    .line 444
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x11

    if-lt v1, v2, :cond_1

    invoke-virtual {v0}, Landroid/app/Activity;->isDestroyed()Z

    move-result v1

    if-eqz v1, :cond_1

    const/4 v4, 0x4

    const/4 v5, 0x2

    move-object v0, p4

    move-object v1, p3

    move-object v2, p2

    move-object v3, p5

    .line 445
    invoke-static/range {v0 .. v5}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;II)V

    .line 446
    invoke-virtual {p0}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->b()V

    return-void

    .line 449
    :cond_1
    invoke-virtual {v0}, Landroid/app/Activity;->isFinishing()Z

    move-result v0

    if-nez v0, :cond_2

    .line 450
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->k:Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;

    invoke-virtual {v0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->show()V

    const/4 v0, 0x2

    .line 456
    iput v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->j:I

    .line 457
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(I)V

    .line 458
    iget v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->j:I

    invoke-virtual {p6, v0}, Lcom/mbridge/msdk/mbjscommon/confirmation/c;->a(I)V

    const/4 v4, 0x2

    const/4 v5, 0x2

    move-object v0, p4

    move-object v1, p3

    move-object v2, p2

    move-object v3, p5

    .line 459
    invoke-static/range {v0 .. v5}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;II)V

    goto :goto_0

    :cond_2
    const/4 v4, 0x4

    const/4 v5, 0x2

    move-object v0, p4

    move-object v1, p3

    move-object v2, p2

    move-object v3, p5

    .line 452
    invoke-static/range {v0 .. v5}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;II)V

    .line 453
    invoke-virtual {p0}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->b()V

    return-void

    .line 461
    :cond_3
    invoke-virtual {p0}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->b()V

    goto :goto_0

    :cond_4
    move-object v0, p0

    move-object v1, p2

    move-object v2, p3

    move-object v3, p4

    move-object v4, p5

    move-object v5, p6

    .line 464
    invoke-direct/range {v0 .. v5}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->b(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/mbjscommon/confirmation/c;)V

    :goto_0
    return-void
.end method

.method private a(Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/mbjscommon/confirmation/c;Lcom/mbridge/msdk/mbjscommon/confirmation/b;)V
    .locals 7

    .line 253
    new-instance p4, Lcom/mbridge/msdk/mbjscommon/base/b;

    invoke-direct {p4}, Lcom/mbridge/msdk/mbjscommon/base/b;-><init>()V

    .line 254
    new-instance p6, Lcom/mbridge/msdk/mbjscommon/confirmation/e$4;

    invoke-direct {p6, p0, p7}, Lcom/mbridge/msdk/mbjscommon/confirmation/e$4;-><init>(Lcom/mbridge/msdk/mbjscommon/confirmation/e;Lcom/mbridge/msdk/mbjscommon/confirmation/b;)V

    .line 303
    invoke-virtual {p4, p6}, Lcom/mbridge/msdk/mbjscommon/base/b;->a(Lcom/mbridge/msdk/mbjscommon/windvane/d;)V

    .line 304
    new-instance p6, Lcom/mbridge/msdk/mbjscommon/confirmation/a;

    invoke-direct {p6, p3, p2, p5}, Lcom/mbridge/msdk/mbjscommon/confirmation/a;-><init>(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;)V

    .line 305
    sget p3, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->c:I

    invoke-virtual {p6, p3}, Lcom/mbridge/msdk/mbjscommon/confirmation/a;->a(I)V

    .line 306
    invoke-virtual {p1, p6}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setObject(Ljava/lang/Object;)V

    .line 307
    invoke-virtual {p1, p4}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    const/4 p3, 0x3

    .line 312
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p4

    if-nez p4, :cond_0

    .line 313
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;

    move-result-object p4

    invoke-virtual {p4, p2}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->getH5ResAddress(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p4

    .line 314
    invoke-static {p4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p5

    if-nez p5, :cond_0

    goto :goto_0

    :cond_0
    move-object p4, p2

    .line 318
    :goto_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/HTMLResourceManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/HTMLResourceManager;

    move-result-object p5

    invoke-virtual {p5, p2}, Lcom/mbridge/msdk/foundation/download/download/HTMLResourceManager;->getHtmlContentFromUrl(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p5

    const-string p6, ""

    .line 321
    invoke-static {p5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    move-object v3, p5

    goto :goto_1

    :cond_1
    move-object v3, p6

    .line 325
    :goto_1
    invoke-virtual {p1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->isDestoryed()Z

    move-result p5

    if-nez p5, :cond_4

    .line 326
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p5
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string p6, "SecondaryConfirmationManager"

    if-nez p5, :cond_2

    .line 327
    :try_start_1
    invoke-direct {p0, p2}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 328
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string p5, "load====== html url:"

    invoke-virtual {p2, p5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p6, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 329
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string p4, "load===== html..."

    invoke-virtual {p2, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p6, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 330
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string p4, "load=====lastUrl html..."

    invoke-virtual {p2, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p6, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string v4, "text/html"

    const-string v5, "UTF-8"

    const/4 v6, 0x0

    move-object v1, p1

    .line 331
    invoke-virtual/range {v1 .. v6}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->loadDataWithBaseURL(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_2

    .line 332
    :cond_2
    invoke-static {p4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_3

    if-eqz p7, :cond_5

    const-string p1, "localUrl is null"

    .line 334
    invoke-interface {p7, p3, p1}, Lcom/mbridge/msdk/mbjscommon/confirmation/b;->a(ILjava/lang/String;)V

    goto :goto_2

    .line 337
    :cond_3
    invoke-direct {p0, p4}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 338
    new-instance p4, Ljava/lang/StringBuilder;

    invoke-direct {p4}, Ljava/lang/StringBuilder;-><init>()V

    const-string p5, "load====== url:"

    invoke-virtual {p4, p5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p4

    invoke-static {p6, p4}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 339
    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->loadUrl(Ljava/lang/String;)V

    goto :goto_2

    :cond_4
    if-eqz p7, :cond_5

    const-string p1, "webview has destoryed"

    .line 343
    invoke-interface {p7, p3, p1}, Lcom/mbridge/msdk/mbjscommon/confirmation/b;->a(ILjava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_2

    :catch_0
    move-exception p1

    .line 347
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    if-eqz p7, :cond_5

    .line 349
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-interface {p7, p3, p1}, Lcom/mbridge/msdk/mbjscommon/confirmation/b;->a(ILjava/lang/String;)V

    :cond_5
    :goto_2
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbjscommon/confirmation/e;Z)Z
    .locals 0

    .line 52
    iput-boolean p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->o:Z

    return p1
.end method

.method static synthetic b(Lcom/mbridge/msdk/mbjscommon/confirmation/e;)Lcom/mbridge/msdk/mbjscommon/confirmation/b;
    .locals 0

    .line 52
    iget-object p0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->g:Lcom/mbridge/msdk/mbjscommon/confirmation/b;

    return-object p0
.end method

.method private b(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/mbjscommon/confirmation/c;)V
    .locals 15

    move-object v9, p0

    move-object/from16 v10, p2

    move-object/from16 v11, p3

    const/4 v12, 0x1

    new-array v8, v12, [Lcom/mbridge/msdk/mbjscommon/confirmation/d;

    const/4 v13, 0x0

    const/4 v0, 0x0

    aput-object v13, v8, v0

    .line 520
    new-instance v0, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;

    const-string v1, "mbridge_download_dialog_view"

    invoke-static {v1}, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->getViewFilePath(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v10, v1}, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;-><init>(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)V

    .line 521
    new-instance v14, Lcom/mbridge/msdk/mbjscommon/confirmation/e$6;

    move-object v1, v14

    move-object v2, p0

    move-object/from16 v3, p2

    move-object/from16 v4, p1

    move-object/from16 v5, p4

    move-object/from16 v6, p3

    move-object/from16 v7, p5

    invoke-direct/range {v1 .. v8}, Lcom/mbridge/msdk/mbjscommon/confirmation/e$6;-><init>(Lcom/mbridge/msdk/mbjscommon/confirmation/e;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;Landroid/content/Context;Lcom/mbridge/msdk/mbjscommon/confirmation/c;[Lcom/mbridge/msdk/mbjscommon/confirmation/d;)V

    .line 580
    new-instance v1, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    invoke-direct {v1, v11, v12, v0, v14}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;-><init>(Landroid/content/Context;ZLcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;Lcom/mbridge/msdk/widget/custom/a;)V

    iput-object v1, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->l:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    if-eqz v11, :cond_0

    if-eqz v10, :cond_0

    .line 589
    invoke-static/range {p2 .. p2}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 591
    :try_start_0
    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    const-string v1, "mb_dp_close_broadcast_receiver"

    .line 592
    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 593
    new-instance v1, Lcom/mbridge/msdk/mbjscommon/confirmation/CloseDialogBroadcastReceiver;

    iget-object v2, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->l:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    invoke-direct {v1, v2}, Lcom/mbridge/msdk/mbjscommon/confirmation/CloseDialogBroadcastReceiver;-><init>(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    .line 595
    :try_start_1
    invoke-virtual {v11, v1, v0}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    :catch_0
    move-object v3, v1

    goto :goto_0

    :catch_1
    move-exception v0

    .line 600
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "SecondaryConfirmationManager"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    move-object v3, v13

    .line 603
    :goto_0
    iput v12, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->j:I

    .line 604
    iget-object v0, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->l:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    new-instance v1, Lcom/mbridge/msdk/mbjscommon/confirmation/e$a;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    move-object/from16 v12, p1

    invoke-virtual {v2, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual/range {p2 .. p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getApkDisplayInfo()Lcom/mbridge/msdk/out/ApkDisplayInfo;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/out/ApkDisplayInfo;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    iget-object v6, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    iget-object v7, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    iget v8, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->j:I

    move-object v2, v1

    move-object/from16 v5, p5

    invoke-direct/range {v2 .. v8}, Lcom/mbridge/msdk/mbjscommon/confirmation/e$a;-><init>(Landroid/content/BroadcastReceiver;Ljava/lang/String;Lcom/mbridge/msdk/mbjscommon/confirmation/c;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;I)V

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->setOnDismissListener(Landroid/content/DialogInterface$OnDismissListener;)V

    .line 606
    instance-of v0, v11, Landroid/app/Activity;

    if-eqz v0, :cond_3

    .line 607
    move-object v0, v11

    check-cast v0, Landroid/app/Activity;

    .line 608
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x11

    if-lt v1, v2, :cond_1

    invoke-virtual {v0}, Landroid/app/Activity;->isDestroyed()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 609
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    const/4 v5, 0x4

    const/4 v6, 0x2

    move-object/from16 v2, p2

    move-object/from16 v3, p1

    move-object/from16 v4, p4

    invoke-static/range {v1 .. v6}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;II)V

    .line 610
    invoke-virtual {p0}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->b()V

    return-void

    .line 613
    :cond_1
    invoke-virtual {v0}, Landroid/app/Activity;->isFinishing()Z

    move-result v0

    if-nez v0, :cond_2

    .line 614
    iget-object v0, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->l:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    invoke-virtual {v0}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->show()V

    .line 622
    iget v0, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->j:I

    move-object/from16 v1, p5

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/mbjscommon/confirmation/c;->a(I)V

    .line 623
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    const/4 v5, 0x3

    const/4 v6, 0x2

    move-object/from16 v2, p2

    move-object/from16 v3, p1

    move-object/from16 v4, p4

    invoke-static/range {v1 .. v6}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;II)V

    goto :goto_1

    .line 616
    :cond_2
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    const/4 v5, 0x4

    const/4 v6, 0x2

    move-object/from16 v2, p2

    move-object/from16 v3, p1

    move-object/from16 v4, p4

    invoke-static/range {v1 .. v6}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;II)V

    .line 617
    invoke-virtual {p0}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->b()V

    return-void

    .line 625
    :cond_3
    invoke-virtual {p0}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->b()V

    :goto_1
    return-void
.end method

.method static synthetic c(Lcom/mbridge/msdk/mbjscommon/confirmation/e;)Landroid/os/Handler;
    .locals 0

    .line 52
    iget-object p0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->r:Landroid/os/Handler;

    return-object p0
.end method

.method static synthetic d(Lcom/mbridge/msdk/mbjscommon/confirmation/e;)Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;
    .locals 0

    .line 52
    iget-object p0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    return-object p0
.end method

.method static synthetic e(Lcom/mbridge/msdk/mbjscommon/confirmation/e;)Ljava/util/concurrent/atomic/AtomicBoolean;
    .locals 0

    .line 52
    iget-object p0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->m:Ljava/util/concurrent/atomic/AtomicBoolean;

    return-object p0
.end method

.method static synthetic f(Lcom/mbridge/msdk/mbjscommon/confirmation/e;)Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;
    .locals 0

    .line 52
    iget-object p0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    return-object p0
.end method

.method static synthetic g(Lcom/mbridge/msdk/mbjscommon/confirmation/e;)Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;
    .locals 0

    .line 52
    iget-object p0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->k:Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;

    return-object p0
.end method

.method static synthetic h(Lcom/mbridge/msdk/mbjscommon/confirmation/e;)I
    .locals 0

    .line 52
    iget p0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->j:I

    return p0
.end method

.method static synthetic i(Lcom/mbridge/msdk/mbjscommon/confirmation/e;)V
    .locals 2

    .line 2744
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->i:Lcom/mbridge/msdk/mbjscommon/confirmation/c;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 2745
    iput-object v1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->i:Lcom/mbridge/msdk/mbjscommon/confirmation/c;

    .line 2747
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->g:Lcom/mbridge/msdk/mbjscommon/confirmation/b;

    if-eqz v0, :cond_1

    .line 2748
    iput-object v1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->g:Lcom/mbridge/msdk/mbjscommon/confirmation/b;

    .line 2750
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_2

    .line 2751
    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->release()V

    .line 2753
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_3

    .line 2754
    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->release()V

    .line 2756
    :cond_3
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->k:Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;

    if-eqz v0, :cond_4

    invoke-virtual {v0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->isShowing()Z

    move-result v0

    if-eqz v0, :cond_4

    .line 2757
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->k:Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;

    invoke-virtual {v0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->dismiss()V

    .line 2759
    :cond_4
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->l:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    if-eqz v0, :cond_5

    invoke-virtual {v0}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->isShowing()Z

    move-result v0

    if-eqz v0, :cond_5

    .line 2760
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->l:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    invoke-virtual {v0}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->dismiss()V

    .line 2762
    :cond_5
    invoke-virtual {p0}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->b()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/Object;I)V
    .locals 5

    .line 631
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    const-string v1, "webview render error and undefault"

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v0

    invoke-direct {p0, p1}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Ljava/lang/Object;)Lcom/mbridge/msdk/mbjscommon/confirmation/a;

    move-result-object v4

    invoke-virtual {v0, v4}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 632
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->m:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0, v3, v3}, Ljava/util/concurrent/atomic/AtomicBoolean;->compareAndSet(ZZ)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->g:Lcom/mbridge/msdk/mbjscommon/confirmation/b;

    if-eqz v0, :cond_1

    .line 633
    sget v4, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->b:I

    if-ne p2, v4, :cond_0

    .line 634
    invoke-interface {v0}, Lcom/mbridge/msdk/mbjscommon/confirmation/b;->a()V

    goto :goto_0

    .line 636
    :cond_0
    invoke-interface {v0, v2, v1}, Lcom/mbridge/msdk/mbjscommon/confirmation/b;->a(ILjava/lang/String;)V

    .line 640
    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_3

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v0

    invoke-direct {p0, p1}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Ljava/lang/Object;)Lcom/mbridge/msdk/mbjscommon/confirmation/a;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_3

    .line 641
    iget-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->n:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {p1, v3, v3}, Ljava/util/concurrent/atomic/AtomicBoolean;->compareAndSet(ZZ)Z

    move-result p1

    if-nez p1, :cond_3

    iget-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->h:Lcom/mbridge/msdk/mbjscommon/confirmation/b;

    if-eqz p1, :cond_3

    .line 642
    sget v0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->b:I

    if-ne p2, v0, :cond_2

    .line 643
    invoke-interface {p1}, Lcom/mbridge/msdk/mbjscommon/confirmation/b;->a()V

    goto :goto_1

    .line 645
    :cond_2
    invoke-interface {p1, v2, v1}, Lcom/mbridge/msdk/mbjscommon/confirmation/b;->a(ILjava/lang/String;)V

    :cond_3
    :goto_1
    return-void
.end method

.method public final a(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    const-string p1, "SecondaryConfirmationManager"

    const-string p2, "closeDialog"

    .line 652
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 653
    iget-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->k:Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->isShowing()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 654
    iget-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->k:Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;

    invoke-virtual {p1}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->dismiss()V

    .line 655
    iget-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->k:Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;

    invoke-virtual {p1}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->clear()V

    :cond_0
    return-void
.end method

.method public final a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/mbjscommon/confirmation/c;)V
    .locals 11

    move-object v8, p0

    move-object v2, p1

    move-object v5, p4

    .line 203
    invoke-direct {p0, p1, p4}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 204
    new-instance v1, Lcom/mbridge/msdk/mbjscommon/confirmation/e$3;

    move-object v3, p2

    invoke-direct {v1, p0, p2, v0, p4}, Lcom/mbridge/msdk/mbjscommon/confirmation/e$3;-><init>(Lcom/mbridge/msdk/mbjscommon/confirmation/e;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;)V

    iput-object v1, v8, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->h:Lcom/mbridge/msdk/mbjscommon/confirmation/b;

    .line 233
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x2

    if-eqz v0, :cond_0

    .line 234
    iget-object v0, v8, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->h:Lcom/mbridge/msdk/mbjscommon/confirmation/b;

    const-string v2, "url is null"

    invoke-interface {v0, v1, v2}, Lcom/mbridge/msdk/mbjscommon/confirmation/b;->a(ILjava/lang/String;)V

    return-void

    :cond_0
    const-string v0, "ldtm=1"

    .line 236
    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 237
    iget-object v0, v8, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->h:Lcom/mbridge/msdk/mbjscommon/confirmation/b;

    const/4 v1, 0x5

    const-string v2, "unwanted prerender"

    invoke-interface {v0, v1, v2}, Lcom/mbridge/msdk/mbjscommon/confirmation/b;->a(ILjava/lang/String;)V

    return-void

    .line 240
    :cond_1
    iget-object v0, v8, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    const/4 v4, 0x0

    if-eqz v0, :cond_3

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->isDestoryed()Z

    move-result v0

    if-eqz v0, :cond_2

    goto :goto_0

    :cond_2
    move-object v6, p3

    goto :goto_1

    .line 241
    :cond_3
    :goto_0
    new-instance v0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    move-object v6, p3

    invoke-direct {v0, p3}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;-><init>(Landroid/content/Context;)V

    iput-object v0, v8, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    .line 242
    invoke-virtual {v0, v4}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setBackgroundColor(I)V

    .line 243
    iget-object v0, v8, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getBackground()Landroid/graphics/drawable/Drawable;

    move-result-object v0

    if-eqz v0, :cond_4

    .line 244
    iget-object v0, v8, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getBackground()Landroid/graphics/drawable/Drawable;

    move-result-object v0

    invoke-virtual {v0, v4}, Landroid/graphics/drawable/Drawable;->setAlpha(I)V

    .line 247
    :cond_4
    :goto_1
    iget-object v0, v8, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->n:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v7, 0x1

    invoke-virtual {v0, v7, v4}, Ljava/util/concurrent/atomic/AtomicBoolean;->compareAndSet(ZZ)Z

    .line 248
    iget-object v0, v8, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->r:Landroid/os/Handler;

    const-wide/16 v9, 0x1f4

    invoke-virtual {v0, v1, v9, v10}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    .line 249
    iget-object v1, v8, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    iget-object v7, v8, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->h:Lcom/mbridge/msdk/mbjscommon/confirmation/b;

    move-object v0, p0

    move-object v2, p1

    move-object v3, p2

    move-object v4, p3

    move-object v5, p4

    move-object/from16 v6, p5

    invoke-direct/range {v0 .. v7}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/mbjscommon/confirmation/c;Lcom/mbridge/msdk/mbjscommon/confirmation/b;)V

    return-void
.end method

.method public final declared-synchronized a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/widget/dialog/a;)V
    .locals 19

    move-object/from16 v9, p0

    move-object/from16 v0, p2

    move-object/from16 v1, p3

    move-object/from16 v10, p4

    monitor-enter p0

    .line 139
    :try_start_0
    iget-boolean v2, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->o:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-eqz v2, :cond_0

    .line 140
    monitor-exit p0

    return-void

    :cond_0
    if-eqz v0, :cond_2

    .line 143
    :try_start_1
    invoke-virtual/range {p2 .. p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickTimeOutInterval()I

    move-result v2

    mul-int/lit16 v2, v2, 0x3e8

    if-nez v2, :cond_1

    goto :goto_0

    .line 2129
    :cond_1
    new-instance v3, Ljava/util/Timer;

    invoke-direct {v3}, Ljava/util/Timer;-><init>()V

    iput-object v3, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->p:Ljava/util/Timer;

    .line 2130
    new-instance v4, Lcom/mbridge/msdk/mbjscommon/confirmation/e$2;

    invoke-direct {v4, v9}, Lcom/mbridge/msdk/mbjscommon/confirmation/e$2;-><init>(Lcom/mbridge/msdk/mbjscommon/confirmation/e;)V

    int-to-long v5, v2

    invoke-virtual {v3, v4, v5, v6}, Ljava/util/Timer;->schedule(Ljava/util/TimerTask;J)V

    :cond_2
    :goto_0
    const/4 v8, 0x1

    .line 146
    iput-boolean v8, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->o:Z

    move-object/from16 v2, p1

    .line 147
    invoke-direct {v9, v2, v10}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    .line 157
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->c()Landroid/content/Context;

    move-result-object v2

    const/4 v3, 0x0

    .line 159
    instance-of v4, v2, Landroid/app/Activity;

    if-eqz v4, :cond_3

    .line 160
    move-object v3, v2

    check-cast v3, Landroid/app/Activity;

    .line 162
    :cond_3
    instance-of v2, v1, Landroid/app/Activity;

    const/16 v4, 0x11

    if-eqz v2, :cond_5

    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt v2, v4, :cond_4

    move-object v2, v1

    check-cast v2, Landroid/app/Activity;

    invoke-virtual {v2}, Landroid/app/Activity;->isDestroyed()Z

    move-result v2

    if-nez v2, :cond_5

    .line 163
    :cond_4
    move-object v3, v1

    check-cast v3, Landroid/app/Activity;

    .line 165
    :cond_5
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->a()Ljava/lang/ref/WeakReference;

    move-result-object v1

    if-eqz v1, :cond_7

    .line 167
    invoke-virtual {v1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/app/Activity;

    if-eqz v1, :cond_7

    .line 168
    invoke-virtual {v1}, Landroid/app/Activity;->isFinishing()Z

    move-result v2

    if-nez v2, :cond_7

    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt v2, v4, :cond_6

    invoke-virtual {v1}, Landroid/app/Activity;->isDestroyed()Z

    move-result v2

    if-nez v2, :cond_7

    :cond_6
    move-object v12, v1

    goto :goto_1

    :cond_7
    move-object v12, v3

    :goto_1
    if-eqz v12, :cond_13

    .line 173
    invoke-virtual {v12}, Landroid/app/Activity;->isFinishing()Z

    move-result v1

    if-nez v1, :cond_13

    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt v1, v4, :cond_8

    invoke-virtual {v12}, Landroid/app/Activity;->isDestroyed()Z

    move-result v1

    if-eqz v1, :cond_8

    goto/16 :goto_5

    .line 177
    :cond_8
    new-instance v7, Lcom/mbridge/msdk/mbjscommon/confirmation/c;

    move-object v1, v7

    move-object/from16 v2, p5

    move-object v3, v12

    move-object/from16 v4, p2

    move-object v5, v11

    move-object/from16 v6, p4

    invoke-direct/range {v1 .. v6}, Lcom/mbridge/msdk/mbjscommon/confirmation/c;-><init>(Lcom/mbridge/msdk/widget/dialog/a;Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;)V

    iput-object v7, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->i:Lcom/mbridge/msdk/mbjscommon/confirmation/c;

    .line 178
    new-instance v1, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;

    iget-object v2, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->i:Lcom/mbridge/msdk/mbjscommon/confirmation/c;

    invoke-direct {v1, v12, v2}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;-><init>(Landroid/content/Context;Lcom/mbridge/msdk/widget/dialog/a;)V

    iput-object v1, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->k:Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;

    .line 179
    invoke-virtual {v1, v8}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setCancelable(Z)V

    .line 180
    invoke-virtual/range {p2 .. p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getApkDisplayInfo()Lcom/mbridge/msdk/out/ApkDisplayInfo;

    move-result-object v1

    if-nez v1, :cond_9

    .line 181
    iget-object v6, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->i:Lcom/mbridge/msdk/mbjscommon/confirmation/c;

    move-object/from16 v1, p0

    move-object/from16 v2, p2

    move-object v3, v12

    move-object v4, v11

    move-object/from16 v5, p4

    invoke-direct/range {v1 .. v6}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/mbjscommon/confirmation/c;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 182
    monitor-exit p0

    return-void

    .line 184
    :cond_9
    :try_start_2
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual/range {p2 .. p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getApkDisplayInfo()Lcom/mbridge/msdk/out/ApkDisplayInfo;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/out/ApkDisplayInfo;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    .line 193
    new-instance v1, Lcom/mbridge/msdk/mbjscommon/confirmation/e$a;

    iget-object v15, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->i:Lcom/mbridge/msdk/mbjscommon/confirmation/c;

    iget-object v2, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    iget-object v3, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    iget v4, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->j:I

    move-object v13, v1

    move-object/from16 v16, v2

    move-object/from16 v17, v3

    move/from16 v18, v4

    invoke-direct/range {v13 .. v18}, Lcom/mbridge/msdk/mbjscommon/confirmation/e$a;-><init>(Ljava/lang/String;Lcom/mbridge/msdk/mbjscommon/confirmation/c;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;I)V

    iput-object v1, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->q:Lcom/mbridge/msdk/mbjscommon/confirmation/e$a;

    .line 194
    iget-object v2, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->k:Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;

    invoke-virtual {v2, v1}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setOnDismissListener(Landroid/content/DialogInterface$OnDismissListener;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    .line 196
    :try_start_3
    iget-object v13, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->i:Lcom/mbridge/msdk/mbjscommon/confirmation/c;

    if-eqz v0, :cond_11

    .line 2366
    invoke-virtual/range {p2 .. p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getApkDisplayInfo()Lcom/mbridge/msdk/out/ApkDisplayInfo;

    move-result-object v1

    if-nez v1, :cond_a

    move-object/from16 v1, p0

    move-object/from16 v2, p2

    move-object v3, v12

    move-object v4, v11

    move-object/from16 v5, p4

    move-object v6, v13

    .line 2367
    invoke-direct/range {v1 .. v6}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/mbjscommon/confirmation/c;)V

    goto/16 :goto_4

    .line 2368
    :cond_a
    invoke-static {v11}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_b

    move-object/from16 v1, p0

    move-object v2, v11

    move-object/from16 v3, p2

    move-object v4, v12

    move-object/from16 v5, p4

    move-object v6, v13

    .line 2369
    invoke-direct/range {v1 .. v6}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->b(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/mbjscommon/confirmation/c;)V

    goto/16 :goto_4

    .line 2372
    :cond_b
    iget-object v1, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    const/4 v14, 0x0

    if-eqz v1, :cond_c

    iget-object v1, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->isDestoryed()Z

    move-result v1

    if-nez v1, :cond_c

    .line 2373
    iget-object v1, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v1

    .line 2374
    instance-of v2, v1, Lcom/mbridge/msdk/mbjscommon/confirmation/a;

    if-eqz v2, :cond_c

    .line 2375
    check-cast v1, Lcom/mbridge/msdk/mbjscommon/confirmation/a;

    .line 2376
    invoke-virtual {v1}, Lcom/mbridge/msdk/mbjscommon/confirmation/a;->c()Ljava/lang/String;

    move-result-object v2

    .line 2377
    invoke-virtual {v1}, Lcom/mbridge/msdk/mbjscommon/confirmation/a;->a()I

    move-result v1

    sget v3, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->b:I

    if-ne v1, v3, :cond_c

    invoke-virtual {v11, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_c

    move v1, v8

    goto :goto_2

    :cond_c
    move v1, v14

    :goto_2
    if-nez v1, :cond_d

    .line 2382
    iget-object v2, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v2, :cond_d

    iget-object v2, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v2}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->isDestoryed()Z

    move-result v2

    if-nez v2, :cond_d

    .line 2383
    iget-object v2, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v2}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v2

    .line 2384
    instance-of v3, v2, Lcom/mbridge/msdk/mbjscommon/confirmation/a;

    if-eqz v3, :cond_d

    .line 2385
    check-cast v2, Lcom/mbridge/msdk/mbjscommon/confirmation/a;

    .line 2386
    invoke-virtual {v2}, Lcom/mbridge/msdk/mbjscommon/confirmation/a;->c()Ljava/lang/String;

    move-result-object v3

    .line 2387
    invoke-virtual {v2}, Lcom/mbridge/msdk/mbjscommon/confirmation/a;->a()I

    move-result v2

    sget v4, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->b:I

    if-ne v2, v4, :cond_d

    invoke-virtual {v11, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_d

    .line 2388
    iget-object v1, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    iput-object v1, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    move v15, v8

    goto :goto_3

    :cond_d
    move v15, v1

    .line 2470
    :goto_3
    iget-object v1, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v1, :cond_e

    iget-object v1, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->isDestoryed()Z

    move-result v1

    if-eqz v1, :cond_f

    .line 2471
    :cond_e
    new-instance v1, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-direct {v1, v12}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;-><init>(Landroid/content/Context;)V

    iput-object v1, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    .line 2472
    invoke-virtual {v1, v14}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setBackgroundColor(I)V

    .line 2473
    iget-object v1, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getBackground()Landroid/graphics/drawable/Drawable;

    move-result-object v1

    if-eqz v1, :cond_f

    .line 2474
    iget-object v1, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getBackground()Landroid/graphics/drawable/Drawable;

    move-result-object v1

    invoke-virtual {v1, v14}, Landroid/graphics/drawable/Drawable;->setAlpha(I)V

    .line 2477
    :cond_f
    new-instance v7, Lcom/mbridge/msdk/mbjscommon/confirmation/e$5;

    move-object v1, v7

    move-object/from16 v2, p0

    move-object v3, v11

    move-object/from16 v4, p2

    move-object v5, v12

    move-object/from16 v6, p4

    move-object v14, v7

    move-object v7, v13

    invoke-direct/range {v1 .. v7}, Lcom/mbridge/msdk/mbjscommon/confirmation/e$5;-><init>(Lcom/mbridge/msdk/mbjscommon/confirmation/e;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/mbjscommon/confirmation/c;)V

    iput-object v14, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->g:Lcom/mbridge/msdk/mbjscommon/confirmation/b;

    .line 2503
    iget-object v1, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->r:Landroid/os/Handler;

    const-wide/16 v2, 0x1f4

    invoke-virtual {v1, v8, v2, v3}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    if-eqz v15, :cond_10

    .line 2505
    new-instance v1, Lcom/mbridge/msdk/mbjscommon/confirmation/a;

    invoke-direct {v1, v0, v11, v10}, Lcom/mbridge/msdk/mbjscommon/confirmation/a;-><init>(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;)V

    .line 2506
    sget v2, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->c:I

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/mbjscommon/confirmation/a;->a(I)V

    .line 2507
    iget-object v2, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v2, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setObject(Ljava/lang/Object;)V

    .line 2508
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v1

    iget-object v2, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;)V

    .line 2509
    iget-object v2, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    move-object/from16 v1, p0

    move-object v3, v11

    move-object/from16 v4, p2

    move-object v5, v12

    move-object/from16 v6, p4

    move-object v7, v13

    invoke-direct/range {v1 .. v7}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/mbjscommon/confirmation/c;)V

    goto :goto_4

    .line 2511
    :cond_10
    iget-object v1, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->m:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v2, 0x0

    invoke-virtual {v1, v8, v2}, Ljava/util/concurrent/atomic/AtomicBoolean;->compareAndSet(ZZ)Z

    .line 2512
    iget-object v2, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->e:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    iget-object v8, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->g:Lcom/mbridge/msdk/mbjscommon/confirmation/b;

    move-object/from16 v1, p0

    move-object v3, v11

    move-object/from16 v4, p2

    move-object v5, v12

    move-object/from16 v6, p4

    move-object v7, v13

    invoke-direct/range {v1 .. v8}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/mbjscommon/confirmation/c;Lcom/mbridge/msdk/mbjscommon/confirmation/b;)V

    goto :goto_4

    :cond_11
    if-eqz v13, :cond_12

    .line 2399
    invoke-virtual {v13}, Lcom/mbridge/msdk/mbjscommon/confirmation/c;->a()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    goto :goto_4

    .line 198
    :catchall_0
    :try_start_4
    iget-object v6, v9, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->i:Lcom/mbridge/msdk/mbjscommon/confirmation/c;

    move-object/from16 v1, p0

    move-object/from16 v2, p2

    move-object v3, v12

    move-object v4, v11

    move-object/from16 v5, p4

    invoke-direct/range {v1 .. v6}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/mbjscommon/confirmation/c;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    .line 200
    :cond_12
    :goto_4
    monitor-exit p0

    return-void

    .line 174
    :cond_13
    :goto_5
    :try_start_5
    invoke-virtual/range {p0 .. p0}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->b()V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    .line 175
    monitor-exit p0

    return-void

    :catchall_1
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final b()V
    .locals 1

    .line 122
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->p:Ljava/util/Timer;

    invoke-virtual {v0}, Ljava/util/Timer;->cancel()V

    const/4 v0, 0x0

    .line 123
    iput-boolean v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->o:Z

    return-void
.end method

.method public final b(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 667
    iget-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->k:Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->isShowing()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 668
    iget-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->k:Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;

    invoke-virtual {p1}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->getListener()Lcom/mbridge/msdk/widget/dialog/a;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 669
    iget-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->k:Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;

    invoke-virtual {p1}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->getListener()Lcom/mbridge/msdk/widget/dialog/a;

    move-result-object p1

    invoke-interface {p1}, Lcom/mbridge/msdk/widget/dialog/a;->c()V

    :cond_0
    return-void
.end method

.method public final c()V
    .locals 2

    .line 791
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->l:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    if-eqz v0, :cond_0

    .line 792
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->l:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    invoke-virtual {v0}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->dismiss()V

    .line 794
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->k:Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;

    if-eqz v0, :cond_1

    .line 795
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->k:Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;

    invoke-virtual {v0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->dismiss()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 798
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "SecondaryConfirmationManager"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public final d()Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;
    .locals 1

    .line 803
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->k:Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;

    return-object v0
.end method
