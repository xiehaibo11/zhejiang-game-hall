.class public final Lcom/tkay/expressad/advanced/c/a;
.super Ljava/lang/Object;


# static fields
.field private static a:Ljava/lang/String; = "NativeAdvancedLoadManager"

.field private static final j:I = 0x1

.field private static final k:I = 0x2

.field private static final l:I = 0x3

.field private static final m:I = 0x4

.field private static final n:I = 0x5


# instance fields
.field private A:I

.field private B:Ljava/lang/String;

.field private C:Landroid/os/Handler;

.field private D:Ljava/lang/Runnable;

.field private b:Ljava/lang/String;

.field private c:Ljava/lang/String;

.field private d:J

.field private e:Lcom/tkay/expressad/advanced/b/a;

.field private f:Landroid/content/Context;

.field private g:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

.field private h:Lcom/tkay/expressad/d/c;

.field private i:Lcom/tkay/expressad/foundation/d/c;

.field private o:I

.field private p:I

.field private q:I

.field private r:I

.field private s:Ljava/lang/String;

.field private t:I

.field private u:Z

.field private volatile v:Z

.field private w:Lcom/tkay/expressad/videocommon/d/b;

.field private x:Lcom/tkay/expressad/videocommon/b/g$d;

.field private y:Lcom/tkay/expressad/videocommon/b/g$d;

.field private z:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 159
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, ""

    .line 95
    iput-object v0, p0, Lcom/tkay/expressad/advanced/c/a;->B:Ljava/lang/String;

    .line 97
    new-instance v0, Lcom/tkay/expressad/advanced/c/a$1;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, p0, v1}, Lcom/tkay/expressad/advanced/c/a$1;-><init>(Lcom/tkay/expressad/advanced/c/a;Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/tkay/expressad/advanced/c/a;->C:Landroid/os/Handler;

    .line 151
    new-instance v0, Lcom/tkay/expressad/advanced/c/a$3;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/advanced/c/a$3;-><init>(Lcom/tkay/expressad/advanced/c/a;)V

    iput-object v0, p0, Lcom/tkay/expressad/advanced/c/a;->D:Ljava/lang/Runnable;

    .line 160
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/advanced/c/a;->f:Landroid/content/Context;

    .line 161
    iput-object p1, p0, Lcom/tkay/expressad/advanced/c/a;->c:Ljava/lang/String;

    .line 162
    iput-object p2, p0, Lcom/tkay/expressad/advanced/c/a;->b:Ljava/lang/String;

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/advanced/c/a;)Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;
    .locals 0

    .line 49
    iget-object p0, p0, Lcom/tkay/expressad/advanced/c/a;->g:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    return-object p0
.end method

.method private a(J)V
    .locals 2

    .line 272
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a;->C:Landroid/os/Handler;

    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/a;->D:Ljava/lang/Runnable;

    invoke-virtual {v0, v1, p1, p2}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/advanced/c/a;Lcom/tkay/expressad/foundation/d/c;I)V
    .locals 0

    .line 49
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/advanced/c/a;->a(Lcom/tkay/expressad/foundation/d/c;I)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/advanced/c/a;Ljava/lang/String;I)V
    .locals 0

    .line 27554
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/advanced/c/a;->b(Ljava/lang/String;I)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/advanced/c/a;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;I)V
    .locals 4

    .line 23792
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a;->g:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    if-eqz v0, :cond_3

    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->getAdvancedNativeWebview()Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 23796
    new-instance v0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;

    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/a;->g:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    invoke-virtual {v1}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/advanced/c/a;->c:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/expressad/advanced/c/a;->b:Ljava/lang/String;

    invoke-direct {v0, v1, v2, v3}, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    .line 23797
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 23798
    invoke-interface {v1, p2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 23799
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->setCampaignList(Ljava/util/List;)V

    .line 23800
    iget v1, p0, Lcom/tkay/expressad/advanced/c/a;->o:I

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->setAllowSkip(I)V

    .line 23801
    iget v1, p0, Lcom/tkay/expressad/advanced/c/a;->p:I

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->setCountdownS(I)V

    .line 23802
    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/a;->g:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    invoke-virtual {v1, v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->setAdvancedNativeJSBridgeImpl(Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;)V

    .line 23803
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    .line 23804
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a;->g:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->getAdvancedNativeWebview()Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    move-result-object v0

    if-nez v0, :cond_0

    const-string p1, "webview is null"

    .line 24554
    invoke-direct {p0, p1, p3}, Lcom/tkay/expressad/advanced/c/a;->b(Ljava/lang/String;I)V

    return-void

    :cond_0
    if-eqz v0, :cond_1

    .line 23809
    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;->isDestroyed()Z

    move-result v1

    if-eqz v1, :cond_1

    const-string p1, "webview is destroyed"

    .line 25554
    invoke-direct {p0, p1, p3}, Lcom/tkay/expressad/advanced/c/a;->b(Ljava/lang/String;I)V

    return-void

    .line 23813
    :cond_1
    new-instance v1, Lcom/tkay/expressad/advanced/c/a$9;

    invoke-direct {v1, p0, p2, p3}, Lcom/tkay/expressad/advanced/c/a$9;-><init>(Lcom/tkay/expressad/advanced/c/a;Lcom/tkay/expressad/foundation/d/c;I)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;->setWebViewListener(Lcom/tkay/expressad/atsignalcommon/windvane/e;)V

    .line 23860
    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;->isDestroyed()Z

    move-result p2

    if-nez p2, :cond_2

    .line 23862
    iget-object p2, p0, Lcom/tkay/expressad/advanced/c/a;->C:Landroid/os/Handler;

    if-eqz p2, :cond_3

    .line 23863
    new-instance p3, Lcom/tkay/expressad/advanced/c/a$10;

    invoke-direct {p3, p0, v0, p1}, Lcom/tkay/expressad/advanced/c/a$10;-><init>(Lcom/tkay/expressad/advanced/c/a;Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;Ljava/lang/String;)V

    invoke-virtual {p2, p3}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void

    :cond_2
    const-string p1, "webview has destory"

    .line 26554
    invoke-direct {p0, p1, p3}, Lcom/tkay/expressad/advanced/c/a;->b(Ljava/lang/String;I)V

    :cond_3
    return-void
.end method

.method private a(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 6

    .line 526
    iput-object p1, p0, Lcom/tkay/expressad/advanced/c/a;->i:Lcom/tkay/expressad/foundation/d/c;

    .line 527
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a;->g:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    invoke-static {v0, p1}, Lcom/tkay/expressad/advanced/c/c;->a(Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;Lcom/tkay/expressad/foundation/d/c;)Z

    move-result v0

    const/4 v1, 0x2

    if-eqz v0, :cond_0

    .line 528
    invoke-direct {p0, p1, v1}, Lcom/tkay/expressad/advanced/c/a;->a(Lcom/tkay/expressad/foundation/d/c;I)V

    return-void

    .line 11583
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a;->g:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    if-eqz v0, :cond_1

    .line 11584
    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->clearResState()V

    .line 11586
    :cond_1
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->c()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 11587
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v2, "start download zip: "

    invoke-direct {v0, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->c()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 11767
    new-instance v0, Lcom/tkay/expressad/advanced/c/a$8;

    invoke-direct {v0, p0, p1}, Lcom/tkay/expressad/advanced/c/a$8;-><init>(Lcom/tkay/expressad/advanced/c/a;Lcom/tkay/expressad/foundation/d/c;)V

    iput-object v0, p0, Lcom/tkay/expressad/advanced/c/a;->x:Lcom/tkay/expressad/videocommon/b/g$d;

    .line 11788
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->c()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/expressad/advanced/c/a;->x:Lcom/tkay/expressad/videocommon/b/g$d;

    invoke-virtual {v0, v2, v3}, Lcom/tkay/expressad/videocommon/b/g;->b(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V

    .line 11590
    :cond_2
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->d()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    .line 11591
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v2, "start download HTML: "

    invoke-direct {v0, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->d()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 12705
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v2, Lcom/tkay/expressad/advanced/c/a$7;

    invoke-direct {v2, p0, p1}, Lcom/tkay/expressad/advanced/c/a$7;-><init>(Lcom/tkay/expressad/advanced/c/a;Lcom/tkay/expressad/foundation/d/c;)V

    invoke-virtual {v0, v2}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    .line 11594
    :cond_3
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_5

    .line 11595
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v2, "start download Video: "

    invoke-direct {v0, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 12895
    new-instance v0, Lcom/tkay/expressad/advanced/c/a$2;

    invoke-direct {v0, p0, p1}, Lcom/tkay/expressad/advanced/c/a$2;-><init>(Lcom/tkay/expressad/advanced/c/a;Lcom/tkay/expressad/foundation/d/c;)V

    iput-object v0, p0, Lcom/tkay/expressad/advanced/c/a;->w:Lcom/tkay/expressad/videocommon/d/b;

    .line 12914
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 12915
    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 12916
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/expressad/advanced/c/a;->b:Ljava/lang/String;

    iget-object v4, p0, Lcom/tkay/expressad/advanced/c/a;->w:Lcom/tkay/expressad/videocommon/d/b;

    const/16 v5, 0x12a

    invoke-virtual {v2, v3, v0, v5, v4}, Lcom/tkay/expressad/videocommon/b/c;->a(Ljava/lang/String;Ljava/util/List;ILcom/tkay/expressad/videocommon/d/b;)Lcom/tkay/expressad/videocommon/b/n;

    .line 12917
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v0

    iget-object v2, p0, Lcom/tkay/expressad/advanced/c/a;->b:Ljava/lang/String;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->A()Z

    move-result v3

    invoke-virtual {v0, v5, v2, v3}, Lcom/tkay/expressad/videocommon/b/c;->a(ILjava/lang/String;Z)Z

    move-result v0

    if-nez v0, :cond_4

    .line 12919
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/a;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/videocommon/b/c;->d(Ljava/lang/String;)V

    goto :goto_0

    .line 12922
    :cond_4
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a;->g:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    const/4 v2, 0x1

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->setVideoReady(Z)V

    .line 12923
    invoke-direct {p0, p1, v1}, Lcom/tkay/expressad/advanced/c/a;->a(Lcom/tkay/expressad/foundation/d/c;I)V

    .line 11599
    :cond_5
    :goto_0
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_6

    .line 11600
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "start download image: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 13674
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Lcom/tkay/expressad/advanced/c/a$6;

    invoke-direct {v2, p0, p1}, Lcom/tkay/expressad/advanced/c/a$6;-><init>(Lcom/tkay/expressad/advanced/c/a;Lcom/tkay/expressad/foundation/d/c;)V

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    .line 11603
    :cond_6
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_7

    .line 11604
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "start download EndCard: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 14644
    new-instance v0, Lcom/tkay/expressad/advanced/c/a$5;

    invoke-direct {v0, p0, p1}, Lcom/tkay/expressad/advanced/c/a$5;-><init>(Lcom/tkay/expressad/advanced/c/a;Lcom/tkay/expressad/foundation/d/c;)V

    iput-object v0, p0, Lcom/tkay/expressad/advanced/c/a;->y:Lcom/tkay/expressad/videocommon/b/g$d;

    .line 14670
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/advanced/c/a;->y:Lcom/tkay/expressad/videocommon/b/g$d;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/videocommon/b/g;->b(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V

    .line 11607
    :cond_7
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->y()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_8

    .line 11608
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "start download gitUrl: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->y()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 15614
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->y()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Lcom/tkay/expressad/advanced/c/a$4;

    invoke-direct {v2, p0, p1}, Lcom/tkay/expressad/advanced/c/a$4;-><init>(Lcom/tkay/expressad/advanced/c/a;Lcom/tkay/expressad/foundation/d/c;)V

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    :cond_8
    return-void
.end method

.method private a(Lcom/tkay/expressad/foundation/d/c;I)V
    .locals 1

    .line 535
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a;->g:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    invoke-static {v0, p1}, Lcom/tkay/expressad/advanced/c/c;->a(Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;Lcom/tkay/expressad/foundation/d/c;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/tkay/expressad/advanced/c/a;->v:Z

    if-nez v0, :cond_0

    .line 536
    invoke-direct {p0}, Lcom/tkay/expressad/advanced/c/a;->i()V

    const/4 v0, 0x1

    .line 539
    iput-boolean v0, p0, Lcom/tkay/expressad/advanced/c/a;->v:Z

    .line 541
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a;->e:Lcom/tkay/expressad/advanced/b/a;

    if-eqz v0, :cond_0

    .line 542
    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/advanced/b/a;->a(Lcom/tkay/expressad/foundation/d/c;I)V

    :cond_0
    return-void
.end method

.method private a(Ljava/lang/String;I)V
    .locals 0

    .line 554
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/advanced/c/a;->b(Ljava/lang/String;I)V

    return-void
.end method

.method private a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;I)V
    .locals 4

    .line 792
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a;->g:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    if-eqz v0, :cond_3

    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->getAdvancedNativeWebview()Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 796
    new-instance v0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;

    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/a;->g:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    invoke-virtual {v1}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/advanced/c/a;->c:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/expressad/advanced/c/a;->b:Ljava/lang/String;

    invoke-direct {v0, v1, v2, v3}, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    .line 797
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 798
    invoke-interface {v1, p2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 799
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->setCampaignList(Ljava/util/List;)V

    .line 800
    iget v1, p0, Lcom/tkay/expressad/advanced/c/a;->o:I

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->setAllowSkip(I)V

    .line 801
    iget v1, p0, Lcom/tkay/expressad/advanced/c/a;->p:I

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->setCountdownS(I)V

    .line 802
    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/a;->g:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    invoke-virtual {v1, v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->setAdvancedNativeJSBridgeImpl(Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;)V

    .line 803
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    .line 804
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a;->g:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->getAdvancedNativeWebview()Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    move-result-object v0

    if-nez v0, :cond_0

    const-string p1, "webview is null"

    .line 20554
    invoke-direct {p0, p1, p3}, Lcom/tkay/expressad/advanced/c/a;->b(Ljava/lang/String;I)V

    return-void

    :cond_0
    if-eqz v0, :cond_1

    .line 809
    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;->isDestroyed()Z

    move-result v1

    if-eqz v1, :cond_1

    const-string p1, "webview is destroyed"

    .line 21554
    invoke-direct {p0, p1, p3}, Lcom/tkay/expressad/advanced/c/a;->b(Ljava/lang/String;I)V

    return-void

    .line 813
    :cond_1
    new-instance v1, Lcom/tkay/expressad/advanced/c/a$9;

    invoke-direct {v1, p0, p2, p3}, Lcom/tkay/expressad/advanced/c/a$9;-><init>(Lcom/tkay/expressad/advanced/c/a;Lcom/tkay/expressad/foundation/d/c;I)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;->setWebViewListener(Lcom/tkay/expressad/atsignalcommon/windvane/e;)V

    .line 860
    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;->isDestroyed()Z

    move-result p2

    if-nez p2, :cond_2

    .line 862
    iget-object p2, p0, Lcom/tkay/expressad/advanced/c/a;->C:Landroid/os/Handler;

    if-eqz p2, :cond_3

    .line 863
    new-instance p3, Lcom/tkay/expressad/advanced/c/a$10;

    invoke-direct {p3, p0, v0, p1}, Lcom/tkay/expressad/advanced/c/a$10;-><init>(Lcom/tkay/expressad/advanced/c/a;Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;Ljava/lang/String;)V

    invoke-virtual {p2, p3}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void

    :cond_2
    const-string p1, "webview has destory"

    .line 22554
    invoke-direct {p0, p1, p3}, Lcom/tkay/expressad/advanced/c/a;->b(Ljava/lang/String;I)V

    :cond_3
    return-void
.end method

.method static synthetic b(Lcom/tkay/expressad/advanced/c/a;)I
    .locals 0

    .line 49
    iget p0, p0, Lcom/tkay/expressad/advanced/c/a;->t:I

    return p0
.end method

.method private b(Lcom/tkay/expressad/foundation/d/d;)Ljava/util/List;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/expressad/foundation/d/d;",
            ")",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation

    if-eqz p1, :cond_5

    .line 10374
    iget-object v0, p1, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    if-eqz v0, :cond_5

    .line 416
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 11374
    iget-object v1, p1, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    const/4 v2, 0x0

    .line 417
    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/foundation/d/c;

    .line 418
    iget-object v2, p0, Lcom/tkay/expressad/advanced/c/a;->b:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/foundation/d/c;->l(Ljava/lang/String;)V

    .line 420
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/d;->c()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/advanced/c/a;->z:Ljava/lang/String;

    .line 421
    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->O()I

    move-result p1

    const/16 v2, 0x63

    if-eq p1, v2, :cond_6

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->c()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->d()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_6

    .line 422
    :cond_0
    invoke-static {v1}, Lcom/tkay/expressad/foundation/h/t;->a(Lcom/tkay/expressad/foundation/d/c;)Z

    move-result p1

    const/4 v2, 0x1

    if-eqz p1, :cond_2

    .line 423
    iget-object p1, p0, Lcom/tkay/expressad/advanced/c/a;->f:Landroid/content/Context;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->ba()Ljava/lang/String;

    move-result-object v3

    invoke-static {p1, v3}, Lcom/tkay/expressad/foundation/h/t;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_1

    move p1, v2

    goto :goto_0

    :cond_1
    const/4 p1, 0x2

    :goto_0
    invoke-virtual {v1, p1}, Lcom/tkay/expressad/foundation/d/c;->i(I)V

    .line 425
    :cond_2
    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->ae()I

    move-result p1

    if-eq p1, v2, :cond_4

    iget-object p1, p0, Lcom/tkay/expressad/advanced/c/a;->f:Landroid/content/Context;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->ba()Ljava/lang/String;

    move-result-object v2

    invoke-static {p1, v2}, Lcom/tkay/expressad/foundation/h/t;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_3

    goto :goto_1

    .line 429
    :cond_3
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v2, "onload: "

    invoke-direct {p1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->bb()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " has been installed."

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 431
    invoke-static {v1}, Lcom/tkay/expressad/foundation/h/t;->a(Lcom/tkay/expressad/foundation/d/c;)Z

    move-result p1

    if-eqz p1, :cond_6

    .line 432
    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_2

    .line 427
    :cond_4
    :goto_1
    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_2

    :cond_5
    const/4 v0, 0x0

    :cond_6
    :goto_2
    return-object v0
.end method

.method private b(I)V
    .locals 0

    .line 183
    iput p1, p0, Lcom/tkay/expressad/advanced/c/a;->p:I

    return-void
.end method

.method static synthetic b(Lcom/tkay/expressad/advanced/c/a;Lcom/tkay/expressad/foundation/d/c;I)V
    .locals 1

    .line 27883
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a;->g:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->isH5Ready()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 27884
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/advanced/c/a;->a(Lcom/tkay/expressad/foundation/d/c;I)V

    :cond_0
    return-void
.end method

.method static synthetic b(Lcom/tkay/expressad/advanced/c/a;Ljava/lang/String;I)V
    .locals 0

    .line 29554
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/advanced/c/a;->b(Ljava/lang/String;I)V

    return-void
.end method

.method private b(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 5

    .line 583
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a;->g:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    if-eqz v0, :cond_0

    .line 584
    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->clearResState()V

    .line 586
    :cond_0
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->c()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 587
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "start download zip: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->c()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 15767
    new-instance v0, Lcom/tkay/expressad/advanced/c/a$8;

    invoke-direct {v0, p0, p1}, Lcom/tkay/expressad/advanced/c/a$8;-><init>(Lcom/tkay/expressad/advanced/c/a;Lcom/tkay/expressad/foundation/d/c;)V

    iput-object v0, p0, Lcom/tkay/expressad/advanced/c/a;->x:Lcom/tkay/expressad/videocommon/b/g$d;

    .line 15788
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->c()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/advanced/c/a;->x:Lcom/tkay/expressad/videocommon/b/g$d;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/videocommon/b/g;->b(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V

    .line 590
    :cond_1
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->d()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 591
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "start download HTML: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->d()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 16705
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/expressad/advanced/c/a$7;

    invoke-direct {v1, p0, p1}, Lcom/tkay/expressad/advanced/c/a$7;-><init>(Lcom/tkay/expressad/advanced/c/a;Lcom/tkay/expressad/foundation/d/c;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    .line 594
    :cond_2
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    .line 595
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "start download Video: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 16895
    new-instance v0, Lcom/tkay/expressad/advanced/c/a$2;

    invoke-direct {v0, p0, p1}, Lcom/tkay/expressad/advanced/c/a$2;-><init>(Lcom/tkay/expressad/advanced/c/a;Lcom/tkay/expressad/foundation/d/c;)V

    iput-object v0, p0, Lcom/tkay/expressad/advanced/c/a;->w:Lcom/tkay/expressad/videocommon/d/b;

    .line 16914
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 16915
    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 16916
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/advanced/c/a;->b:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/expressad/advanced/c/a;->w:Lcom/tkay/expressad/videocommon/d/b;

    const/16 v4, 0x12a

    invoke-virtual {v1, v2, v0, v4, v3}, Lcom/tkay/expressad/videocommon/b/c;->a(Ljava/lang/String;Ljava/util/List;ILcom/tkay/expressad/videocommon/d/b;)Lcom/tkay/expressad/videocommon/b/n;

    .line 16917
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/a;->b:Ljava/lang/String;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->A()Z

    move-result v2

    invoke-virtual {v0, v4, v1, v2}, Lcom/tkay/expressad/videocommon/b/c;->a(ILjava/lang/String;Z)Z

    move-result v0

    if-nez v0, :cond_3

    .line 16919
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/a;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/videocommon/b/c;->d(Ljava/lang/String;)V

    goto :goto_0

    .line 16922
    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a;->g:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->setVideoReady(Z)V

    const/4 v0, 0x2

    .line 16923
    invoke-direct {p0, p1, v0}, Lcom/tkay/expressad/advanced/c/a;->a(Lcom/tkay/expressad/foundation/d/c;I)V

    .line 599
    :cond_4
    :goto_0
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_5

    .line 600
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "start download image: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 17674
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Lcom/tkay/expressad/advanced/c/a$6;

    invoke-direct {v2, p0, p1}, Lcom/tkay/expressad/advanced/c/a$6;-><init>(Lcom/tkay/expressad/advanced/c/a;Lcom/tkay/expressad/foundation/d/c;)V

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    .line 603
    :cond_5
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_6

    .line 604
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "start download EndCard: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 18644
    new-instance v0, Lcom/tkay/expressad/advanced/c/a$5;

    invoke-direct {v0, p0, p1}, Lcom/tkay/expressad/advanced/c/a$5;-><init>(Lcom/tkay/expressad/advanced/c/a;Lcom/tkay/expressad/foundation/d/c;)V

    iput-object v0, p0, Lcom/tkay/expressad/advanced/c/a;->y:Lcom/tkay/expressad/videocommon/b/g$d;

    .line 18670
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/advanced/c/a;->y:Lcom/tkay/expressad/videocommon/b/g$d;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/videocommon/b/g;->b(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V

    .line 607
    :cond_6
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->y()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_7

    .line 608
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "start download gitUrl: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->y()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 19614
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->y()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Lcom/tkay/expressad/advanced/c/a$4;

    invoke-direct {v2, p0, p1}, Lcom/tkay/expressad/advanced/c/a$4;-><init>(Lcom/tkay/expressad/advanced/c/a;Lcom/tkay/expressad/foundation/d/c;)V

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    :cond_7
    return-void
.end method

.method private b(Lcom/tkay/expressad/foundation/d/c;I)V
    .locals 1

    .line 883
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a;->g:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->isH5Ready()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 884
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/advanced/c/a;->a(Lcom/tkay/expressad/foundation/d/c;I)V

    :cond_0
    return-void
.end method

.method private b(Ljava/lang/String;I)V
    .locals 1

    .line 568
    iget-boolean v0, p0, Lcom/tkay/expressad/advanced/c/a;->v:Z

    if-nez v0, :cond_0

    .line 569
    invoke-direct {p0}, Lcom/tkay/expressad/advanced/c/a;->i()V

    const/4 v0, 0x1

    .line 571
    iput-boolean v0, p0, Lcom/tkay/expressad/advanced/c/a;->v:Z

    .line 572
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a;->e:Lcom/tkay/expressad/advanced/b/a;

    if-eqz v0, :cond_0

    .line 573
    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/advanced/b/a;->a(Ljava/lang/String;I)V

    :cond_0
    return-void
.end method

.method static synthetic c(Lcom/tkay/expressad/advanced/c/a;)Ljava/lang/String;
    .locals 0

    .line 49
    iget-object p0, p0, Lcom/tkay/expressad/advanced/c/a;->s:Ljava/lang/String;

    return-object p0
.end method

.method private c(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 3

    .line 614
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->y()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Lcom/tkay/expressad/advanced/c/a$4;

    invoke-direct {v2, p0, p1}, Lcom/tkay/expressad/advanced/c/a$4;-><init>(Lcom/tkay/expressad/advanced/c/a;Lcom/tkay/expressad/foundation/d/c;)V

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    return-void
.end method

.method private c(Ljava/lang/String;I)V
    .locals 0

    .line 23554
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/advanced/c/a;->b(Ljava/lang/String;I)V

    return-void
.end method

.method static synthetic d(Lcom/tkay/expressad/advanced/c/a;)Landroid/os/Handler;
    .locals 0

    .line 49
    iget-object p0, p0, Lcom/tkay/expressad/advanced/c/a;->C:Landroid/os/Handler;

    return-object p0
.end method

.method static synthetic d()Ljava/lang/String;
    .locals 1

    .line 49
    sget-object v0, Lcom/tkay/expressad/advanced/c/a;->a:Ljava/lang/String;

    return-object v0
.end method

.method private d(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 2

    .line 644
    new-instance v0, Lcom/tkay/expressad/advanced/c/a$5;

    invoke-direct {v0, p0, p1}, Lcom/tkay/expressad/advanced/c/a$5;-><init>(Lcom/tkay/expressad/advanced/c/a;Lcom/tkay/expressad/foundation/d/c;)V

    iput-object v0, p0, Lcom/tkay/expressad/advanced/c/a;->y:Lcom/tkay/expressad/videocommon/b/g$d;

    .line 670
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object p1

    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/a;->y:Lcom/tkay/expressad/videocommon/b/g$d;

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/videocommon/b/g;->b(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V

    return-void
.end method

.method private e()I
    .locals 1

    .line 179
    iget v0, p0, Lcom/tkay/expressad/advanced/c/a;->p:I

    return v0
.end method

.method private e(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 3

    .line 674
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Lcom/tkay/expressad/advanced/c/a$6;

    invoke-direct {v2, p0, p1}, Lcom/tkay/expressad/advanced/c/a$6;-><init>(Lcom/tkay/expressad/advanced/c/a;Lcom/tkay/expressad/foundation/d/c;)V

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    return-void
.end method

.method private f()V
    .locals 2

    .line 281
    :try_start_0
    iget v0, p0, Lcom/tkay/expressad/advanced/c/a;->A:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/tkay/expressad/advanced/c/a;->A:I

    .line 282
    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/a;->h:Lcom/tkay/expressad/d/c;

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/a;->h:Lcom/tkay/expressad/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/d/c;->t()I

    move-result v1

    if-le v0, v1, :cond_1

    :cond_0
    const/4 v0, 0x0

    .line 284
    iput v0, p0, Lcom/tkay/expressad/advanced/c/a;->A:I

    .line 286
    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onload \u7b97\u51fa \u4e0b\u6b21\u7684offset\u662f:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v1, p0, Lcom/tkay/expressad/advanced/c/a;->A:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 289
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method private f(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 2

    .line 705
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/expressad/advanced/c/a$7;

    invoke-direct {v1, p0, p1}, Lcom/tkay/expressad/advanced/c/a$7;-><init>(Lcom/tkay/expressad/advanced/c/a;Lcom/tkay/expressad/foundation/d/c;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method private static g()V
    .locals 0

    return-void
.end method

.method private g(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 2

    .line 767
    new-instance v0, Lcom/tkay/expressad/advanced/c/a$8;

    invoke-direct {v0, p0, p1}, Lcom/tkay/expressad/advanced/c/a$8;-><init>(Lcom/tkay/expressad/advanced/c/a;Lcom/tkay/expressad/foundation/d/c;)V

    iput-object v0, p0, Lcom/tkay/expressad/advanced/c/a;->x:Lcom/tkay/expressad/videocommon/b/g$d;

    .line 788
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->c()Ljava/lang/String;

    move-result-object p1

    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/a;->x:Lcom/tkay/expressad/videocommon/b/g$d;

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/videocommon/b/g;->b(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V

    return-void
.end method

.method private h()V
    .locals 1

    const/4 v0, 0x0

    .line 458
    iput v0, p0, Lcom/tkay/expressad/advanced/c/a;->A:I

    return-void
.end method

.method private h(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 5

    .line 895
    new-instance v0, Lcom/tkay/expressad/advanced/c/a$2;

    invoke-direct {v0, p0, p1}, Lcom/tkay/expressad/advanced/c/a$2;-><init>(Lcom/tkay/expressad/advanced/c/a;Lcom/tkay/expressad/foundation/d/c;)V

    iput-object v0, p0, Lcom/tkay/expressad/advanced/c/a;->w:Lcom/tkay/expressad/videocommon/d/b;

    .line 914
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 915
    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 916
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/advanced/c/a;->b:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/expressad/advanced/c/a;->w:Lcom/tkay/expressad/videocommon/d/b;

    const/16 v4, 0x12a

    invoke-virtual {v1, v2, v0, v4, v3}, Lcom/tkay/expressad/videocommon/b/c;->a(Ljava/lang/String;Ljava/util/List;ILcom/tkay/expressad/videocommon/d/b;)Lcom/tkay/expressad/videocommon/b/n;

    .line 917
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/a;->b:Ljava/lang/String;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->A()Z

    move-result v2

    invoke-virtual {v0, v4, v1, v2}, Lcom/tkay/expressad/videocommon/b/c;->a(ILjava/lang/String;Z)Z

    move-result v0

    if-nez v0, :cond_0

    .line 919
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a;->b:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/videocommon/b/c;->d(Ljava/lang/String;)V

    return-void

    .line 922
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a;->g:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->setVideoReady(Z)V

    const/4 v0, 0x2

    .line 923
    invoke-direct {p0, p1, v0}, Lcom/tkay/expressad/advanced/c/a;->a(Lcom/tkay/expressad/foundation/d/c;I)V

    return-void
.end method

.method private i()V
    .locals 2

    .line 579
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a;->C:Landroid/os/Handler;

    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/a;->D:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    return-void
.end method

.method private static j()V
    .locals 0

    return-void
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 1

    .line 294
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a;->B:Ljava/lang/String;

    return-object v0
.end method

.method public final a(Ljava/lang/String;)Ljava/lang/String;
    .locals 4

    .line 931
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a;->i:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_0

    .line 934
    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/a;->i:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/a;->i:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/a;->i:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->B()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 935
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/advanced/c/a;->b:Ljava/lang/String;

    invoke-virtual {v1, v2, v0}, Lcom/tkay/expressad/videocommon/b/c;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/videocommon/b/a;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 937
    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/b/a;->k()I

    move-result v1

    const/4 v2, 0x5

    if-ne v1, v2, :cond_1

    .line 939
    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/b/a;->e()Ljava/lang/String;

    move-result-object v0

    .line 943
    new-instance v2, Ljava/io/File;

    invoke-direct {v2, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 946
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "download success locally,use local video url:"

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, " state:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-object p1, v0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 997
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_0

    :cond_0
    const-string p1, ""

    :cond_1
    :goto_0
    return-object p1
.end method

.method public final a(I)V
    .locals 0

    .line 175
    iput p1, p0, Lcom/tkay/expressad/advanced/c/a;->o:I

    return-void
.end method

.method public final a(II)V
    .locals 0

    .line 187
    iput p1, p0, Lcom/tkay/expressad/advanced/c/a;->r:I

    .line 188
    iput p2, p0, Lcom/tkay/expressad/advanced/c/a;->q:I

    return-void
.end method

.method public final a(Lcom/tkay/expressad/advanced/b/a;)V
    .locals 0

    .line 503
    iput-object p1, p0, Lcom/tkay/expressad/advanced/c/a;->e:Lcom/tkay/expressad/advanced/b/a;

    return-void
.end method

.method public final a(Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;)V
    .locals 0

    .line 170
    iput-object p1, p0, Lcom/tkay/expressad/advanced/c/a;->g:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    return-void
.end method

.method public final a(Lcom/tkay/expressad/d/c;)V
    .locals 0

    .line 166
    iput-object p1, p0, Lcom/tkay/expressad/advanced/c/a;->h:Lcom/tkay/expressad/d/c;

    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/d/d;)V
    .locals 7

    const/4 v0, 0x2

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-eqz p1, :cond_5

    .line 2374
    iget-object v3, p1, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    if-eqz v3, :cond_5

    .line 1416
    new-instance v3, Ljava/util/ArrayList;

    invoke-direct {v3}, Ljava/util/ArrayList;-><init>()V

    .line 3374
    iget-object v4, p1, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    .line 1417
    invoke-virtual {v4, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/expressad/foundation/d/c;

    .line 1418
    iget-object v5, p0, Lcom/tkay/expressad/advanced/c/a;->b:Ljava/lang/String;

    invoke-virtual {v4, v5}, Lcom/tkay/expressad/foundation/d/c;->l(Ljava/lang/String;)V

    .line 1420
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/d;->c()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/advanced/c/a;->z:Ljava/lang/String;

    .line 1421
    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/d/c;->O()I

    move-result p1

    const/16 v5, 0x63

    if-eq p1, v5, :cond_6

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/d/c;->c()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/d/c;->d()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_6

    .line 1422
    :cond_0
    invoke-static {v4}, Lcom/tkay/expressad/foundation/h/t;->a(Lcom/tkay/expressad/foundation/d/c;)Z

    move-result p1

    if-eqz p1, :cond_2

    .line 1423
    iget-object p1, p0, Lcom/tkay/expressad/advanced/c/a;->f:Landroid/content/Context;

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/d/c;->ba()Ljava/lang/String;

    move-result-object v5

    invoke-static {p1, v5}, Lcom/tkay/expressad/foundation/h/t;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_1

    move p1, v2

    goto :goto_0

    :cond_1
    move p1, v0

    :goto_0
    invoke-virtual {v4, p1}, Lcom/tkay/expressad/foundation/d/c;->i(I)V

    .line 1425
    :cond_2
    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/d/c;->ae()I

    move-result p1

    if-eq p1, v2, :cond_4

    iget-object p1, p0, Lcom/tkay/expressad/advanced/c/a;->f:Landroid/content/Context;

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/d/c;->ba()Ljava/lang/String;

    move-result-object v5

    invoke-static {p1, v5}, Lcom/tkay/expressad/foundation/h/t;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_3

    goto :goto_1

    .line 1429
    :cond_3
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v5, "onload: "

    invoke-direct {p1, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/d/c;->bb()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {p1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, " has been installed."

    invoke-virtual {p1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1431
    invoke-static {v4}, Lcom/tkay/expressad/foundation/h/t;->a(Lcom/tkay/expressad/foundation/d/c;)Z

    move-result p1

    if-eqz p1, :cond_6

    .line 1432
    invoke-interface {v3, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_2

    .line 1427
    :cond_4
    :goto_1
    invoke-interface {v3, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_2

    :cond_5
    const/4 v3, 0x0

    :cond_6
    :goto_2
    if-eqz v3, :cond_14

    .line 393
    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_14

    .line 4281
    :try_start_0
    iget p1, p0, Lcom/tkay/expressad/advanced/c/a;->A:I

    add-int/2addr p1, v2

    iput p1, p0, Lcom/tkay/expressad/advanced/c/a;->A:I

    .line 4282
    iget-object v4, p0, Lcom/tkay/expressad/advanced/c/a;->h:Lcom/tkay/expressad/d/c;

    if-eqz v4, :cond_7

    iget-object v4, p0, Lcom/tkay/expressad/advanced/c/a;->h:Lcom/tkay/expressad/d/c;

    invoke-virtual {v4}, Lcom/tkay/expressad/d/c;->t()I

    move-result v4

    if-le p1, v4, :cond_8

    .line 4284
    :cond_7
    iput v1, p0, Lcom/tkay/expressad/advanced/c/a;->A:I

    .line 4286
    :cond_8
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v4, "onload \u7b97\u51fa \u4e0b\u6b21\u7684offset\u662f:"

    invoke-direct {p1, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v4, p0, Lcom/tkay/expressad/advanced/c/a;->A:I

    invoke-virtual {p1, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_3

    :catch_0
    move-exception p1

    .line 4289
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 395
    :goto_3
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v4, "onload load\u6210\u529f size:"

    invoke-direct {p1, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v4

    invoke-virtual {p1, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 396
    invoke-interface {v3, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/foundation/d/c;

    .line 398
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->c()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_a

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->d()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_9

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->d()Ljava/lang/String;

    move-result-object v3

    const-string v4, "<MBTPLMARK>"

    invoke-virtual {v3, v4}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_9

    goto :goto_4

    .line 402
    :cond_9
    invoke-virtual {p1, v1}, Lcom/tkay/expressad/foundation/d/c;->a(Z)V

    .line 403
    invoke-virtual {p1, v2}, Lcom/tkay/expressad/foundation/d/c;->b(Z)V

    goto :goto_5

    .line 399
    :cond_a
    :goto_4
    invoke-virtual {p1, v2}, Lcom/tkay/expressad/foundation/d/c;->a(Z)V

    .line 400
    invoke-virtual {p1, v1}, Lcom/tkay/expressad/foundation/d/c;->b(Z)V

    .line 4526
    :goto_5
    iput-object p1, p0, Lcom/tkay/expressad/advanced/c/a;->i:Lcom/tkay/expressad/foundation/d/c;

    .line 4527
    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/a;->g:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    invoke-static {v1, p1}, Lcom/tkay/expressad/advanced/c/c;->a(Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;Lcom/tkay/expressad/foundation/d/c;)Z

    move-result v1

    if-eqz v1, :cond_b

    .line 4528
    invoke-direct {p0, p1, v0}, Lcom/tkay/expressad/advanced/c/a;->a(Lcom/tkay/expressad/foundation/d/c;I)V

    return-void

    .line 4583
    :cond_b
    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/a;->g:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    if-eqz v1, :cond_c

    .line 4584
    invoke-virtual {v1}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->clearResState()V

    .line 4586
    :cond_c
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->c()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_d

    .line 4587
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v3, "start download zip: "

    invoke-direct {v1, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->c()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 4767
    new-instance v1, Lcom/tkay/expressad/advanced/c/a$8;

    invoke-direct {v1, p0, p1}, Lcom/tkay/expressad/advanced/c/a$8;-><init>(Lcom/tkay/expressad/advanced/c/a;Lcom/tkay/expressad/foundation/d/c;)V

    iput-object v1, p0, Lcom/tkay/expressad/advanced/c/a;->x:Lcom/tkay/expressad/videocommon/b/g$d;

    .line 4788
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v1

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->c()Ljava/lang/String;

    move-result-object v3

    iget-object v4, p0, Lcom/tkay/expressad/advanced/c/a;->x:Lcom/tkay/expressad/videocommon/b/g$d;

    invoke-virtual {v1, v3, v4}, Lcom/tkay/expressad/videocommon/b/g;->b(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V

    .line 4590
    :cond_d
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->d()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_e

    .line 4591
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v3, "start download HTML: "

    invoke-direct {v1, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->d()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 5705
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v1

    new-instance v3, Lcom/tkay/expressad/advanced/c/a$7;

    invoke-direct {v3, p0, p1}, Lcom/tkay/expressad/advanced/c/a$7;-><init>(Lcom/tkay/expressad/advanced/c/a;Lcom/tkay/expressad/foundation/d/c;)V

    invoke-virtual {v1, v3}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    .line 4594
    :cond_e
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_10

    .line 4595
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v3, "start download Video: "

    invoke-direct {v1, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 5895
    new-instance v1, Lcom/tkay/expressad/advanced/c/a$2;

    invoke-direct {v1, p0, p1}, Lcom/tkay/expressad/advanced/c/a$2;-><init>(Lcom/tkay/expressad/advanced/c/a;Lcom/tkay/expressad/foundation/d/c;)V

    iput-object v1, p0, Lcom/tkay/expressad/advanced/c/a;->w:Lcom/tkay/expressad/videocommon/d/b;

    .line 5914
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 5915
    invoke-interface {v1, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 5916
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v3

    iget-object v4, p0, Lcom/tkay/expressad/advanced/c/a;->b:Ljava/lang/String;

    iget-object v5, p0, Lcom/tkay/expressad/advanced/c/a;->w:Lcom/tkay/expressad/videocommon/d/b;

    const/16 v6, 0x12a

    invoke-virtual {v3, v4, v1, v6, v5}, Lcom/tkay/expressad/videocommon/b/c;->a(Ljava/lang/String;Ljava/util/List;ILcom/tkay/expressad/videocommon/d/b;)Lcom/tkay/expressad/videocommon/b/n;

    .line 5917
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v1

    iget-object v3, p0, Lcom/tkay/expressad/advanced/c/a;->b:Ljava/lang/String;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->A()Z

    move-result v4

    invoke-virtual {v1, v6, v3, v4}, Lcom/tkay/expressad/videocommon/b/c;->a(ILjava/lang/String;Z)Z

    move-result v1

    if-nez v1, :cond_f

    .line 5919
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/a;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/videocommon/b/c;->d(Ljava/lang/String;)V

    goto :goto_6

    .line 5922
    :cond_f
    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/a;->g:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->setVideoReady(Z)V

    .line 5923
    invoke-direct {p0, p1, v0}, Lcom/tkay/expressad/advanced/c/a;->a(Lcom/tkay/expressad/foundation/d/c;I)V

    .line 4599
    :cond_10
    :goto_6
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_11

    .line 4600
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "start download image: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 6674
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Lcom/tkay/expressad/advanced/c/a$6;

    invoke-direct {v2, p0, p1}, Lcom/tkay/expressad/advanced/c/a$6;-><init>(Lcom/tkay/expressad/advanced/c/a;Lcom/tkay/expressad/foundation/d/c;)V

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    .line 4603
    :cond_11
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_12

    .line 4604
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "start download EndCard: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 7644
    new-instance v0, Lcom/tkay/expressad/advanced/c/a$5;

    invoke-direct {v0, p0, p1}, Lcom/tkay/expressad/advanced/c/a$5;-><init>(Lcom/tkay/expressad/advanced/c/a;Lcom/tkay/expressad/foundation/d/c;)V

    iput-object v0, p0, Lcom/tkay/expressad/advanced/c/a;->y:Lcom/tkay/expressad/videocommon/b/g$d;

    .line 7670
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/advanced/c/a;->y:Lcom/tkay/expressad/videocommon/b/g$d;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/videocommon/b/g;->b(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V

    .line 4607
    :cond_12
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->y()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_13

    .line 4608
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "start download gitUrl: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->y()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 8614
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->y()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Lcom/tkay/expressad/advanced/c/a$4;

    invoke-direct {v2, p0, p1}, Lcom/tkay/expressad/advanced/c/a$4;-><init>(Lcom/tkay/expressad/advanced/c/a;Lcom/tkay/expressad/foundation/d/c;)V

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    :cond_13
    return-void

    :cond_14
    const-string p1, "invalid  campaign"

    .line 9554
    invoke-direct {p0, p1, v0}, Lcom/tkay/expressad/advanced/c/a;->b(Ljava/lang/String;I)V

    return-void
.end method

.method public final b()V
    .locals 3

    .line 508
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a;->e:Lcom/tkay/expressad/advanced/b/a;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 509
    iput-object v1, p0, Lcom/tkay/expressad/advanced/c/a;->e:Lcom/tkay/expressad/advanced/b/a;

    .line 511
    :cond_0
    iget v0, p0, Lcom/tkay/expressad/advanced/c/a;->t:I

    const-string v2, "LoadManager release"

    .line 11554
    invoke-direct {p0, v2, v0}, Lcom/tkay/expressad/advanced/c/a;->b(Ljava/lang/String;I)V

    .line 512
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a;->w:Lcom/tkay/expressad/videocommon/d/b;

    if-eqz v0, :cond_1

    .line 513
    iput-object v1, p0, Lcom/tkay/expressad/advanced/c/a;->w:Lcom/tkay/expressad/videocommon/d/b;

    .line 515
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a;->x:Lcom/tkay/expressad/videocommon/b/g$d;

    if-eqz v0, :cond_2

    .line 516
    iput-object v1, p0, Lcom/tkay/expressad/advanced/c/a;->x:Lcom/tkay/expressad/videocommon/b/g$d;

    :cond_2
    return-void
.end method

.method public final c()Lcom/tkay/expressad/foundation/d/c;
    .locals 1

    .line 522
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a;->i:Lcom/tkay/expressad/foundation/d/c;

    return-object v0
.end method
