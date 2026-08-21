.class public Lcom/sigmob/sdk/videoAd/l;
.super Lcom/sigmob/sdk/videoAd/c;

# interfaces
.implements Lcom/sigmob/sdk/base/common/f$a;
.implements Lcom/sigmob/sdk/base/common/x;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/videoAd/l$a;
    }
.end annotation


# static fields
.field static final f:Ljava/lang/String; = "video_config"

.field private static final h:Ljava/lang/String; = "current_position"

.field private static final i:Ljava/lang/String; = "video_finished"

.field private static final j:Ljava/lang/String; = "companionAd_visable"

.field private static final k:J = 0x32L

.field private static final l:I = -0x1

.field private static final m:I

.field private static n:I


# instance fields
.field private A:Z

.field private B:Landroid/os/Handler;

.field private C:Z

.field private D:Lcom/sigmob/sdk/base/views/d;

.field private E:Ljava/lang/String;

.field private F:I

.field private G:Z

.field private H:Lcom/sigmob/sdk/videoAd/a;

.field private I:I

.field private J:Lcom/sigmob/sdk/videoAd/b;

.field private K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

.field private L:Landroid/view/View;

.field private M:Lcom/sigmob/sdk/base/common/r;

.field private N:Lcom/sigmob/sdk/base/views/y;

.field private O:Lcom/sigmob/sdk/base/views/x;

.field private P:Lcom/sigmob/sdk/base/views/w;

.field private Q:Lcom/sigmob/sdk/base/views/a;

.field private R:Lcom/sigmob/sdk/videoAd/h;

.field private S:Lcom/sigmob/sdk/videoAd/d;

.field private T:I

.field private U:I

.field private V:Z

.field private W:Z

.field private X:I

.field private Y:Z

.field private Z:Landroid/widget/RelativeLayout;

.field private aa:Z

.field private ab:Lcom/sigmob/sdk/base/views/x;

.field private ac:Z

.field private ad:Z

.field private ae:Lcom/czhj/volley/toolbox/ImageLoader$ImageContainer;

.field private af:Lcom/sigmob/sdk/base/views/j;

.field private ag:Z

.field private ah:Z

.field private ai:Z

.field private aj:I

.field private ak:Lcom/sigmob/sdk/base/views/t;

.field private al:Z

.field private am:Lcom/sigmob/sdk/base/views/q;

.field private an:Z

.field private ao:Z

.field g:Ljava/lang/String;

.field private o:Lcom/sigmob/sdk/base/views/b;

.field private p:Lcom/sigmob/sdk/base/common/w;

.field private q:Landroid/widget/ImageView;

.field private r:Landroid/widget/RelativeLayout;

.field private s:I

.field private t:Z

.field private u:I

.field private v:Ljava/lang/String;

.field private w:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private x:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private y:J

.field private z:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;Lcom/sigmob/sdk/base/models/BaseAdUnit;Landroid/os/Bundle;Landroid/os/Bundle;Ljava/lang/String;Lcom/sigmob/sdk/base/common/j;)V
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/IllegalStateException;
        }
    .end annotation

    invoke-direct {p0, p1, p5, p6}, Lcom/sigmob/sdk/videoAd/c;-><init>(Landroid/app/Activity;Ljava/lang/String;Lcom/sigmob/sdk/base/common/j;)V

    const/4 p5, 0x0

    iput p5, p0, Lcom/sigmob/sdk/videoAd/l;->s:I

    iput-boolean p5, p0, Lcom/sigmob/sdk/videoAd/l;->t:Z

    iput p5, p0, Lcom/sigmob/sdk/videoAd/l;->u:I

    const-string p6, "undone"

    iput-object p6, p0, Lcom/sigmob/sdk/videoAd/l;->v:Ljava/lang/String;

    new-instance p6, Ljava/util/ArrayList;

    invoke-direct {p6}, Ljava/util/ArrayList;-><init>()V

    iput-object p6, p0, Lcom/sigmob/sdk/videoAd/l;->w:Ljava/util/List;

    new-instance p6, Ljava/util/ArrayList;

    invoke-direct {p6}, Ljava/util/ArrayList;-><init>()V

    iput-object p6, p0, Lcom/sigmob/sdk/videoAd/l;->x:Ljava/util/List;

    const-string p6, "none"

    iput-object p6, p0, Lcom/sigmob/sdk/videoAd/l;->z:Ljava/lang/String;

    new-instance p6, Landroid/os/Handler;

    invoke-direct {p6}, Landroid/os/Handler;-><init>()V

    iput-object p6, p0, Lcom/sigmob/sdk/videoAd/l;->B:Landroid/os/Handler;

    const/4 p6, 0x1

    iput-boolean p6, p0, Lcom/sigmob/sdk/videoAd/l;->C:Z

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iput p5, p0, Lcom/sigmob/sdk/videoAd/l;->T:I

    iput-boolean p5, p0, Lcom/sigmob/sdk/videoAd/l;->Y:Z

    iput-boolean p5, p0, Lcom/sigmob/sdk/videoAd/l;->aa:Z

    iput-boolean p5, p0, Lcom/sigmob/sdk/videoAd/l;->ac:Z

    iput-boolean p5, p0, Lcom/sigmob/sdk/videoAd/l;->ad:Z

    iput-boolean p5, p0, Lcom/sigmob/sdk/videoAd/l;->ag:Z

    iput-boolean p5, p0, Lcom/sigmob/sdk/videoAd/l;->al:Z

    iput-boolean p5, p0, Lcom/sigmob/sdk/videoAd/l;->an:Z

    iput-object p2, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAdConfig()Lcom/sigmob/sdk/base/common/h;

    move-result-object p2

    check-cast p2, Lcom/sigmob/sdk/videoAd/a;

    iput-object p2, p0, Lcom/sigmob/sdk/videoAd/l;->H:Lcom/sigmob/sdk/videoAd/a;

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->k()Landroid/app/Activity;

    move-result-object v1

    iget-object v2, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p2, v1, v2, v0}, Lcom/sigmob/sdk/videoAd/a;->a(Landroid/content/Context;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/views/q$b;)V

    iget-object p2, p0, Lcom/sigmob/sdk/videoAd/l;->H:Lcom/sigmob/sdk/videoAd/a;

    invoke-virtual {p2, p0}, Lcom/sigmob/sdk/videoAd/a;->a(Lcom/sigmob/sdk/base/common/x;)V

    iget-object p2, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAdslot_id()Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/sigmob/sdk/videoAd/l;->E:Ljava/lang/String;

    iget-object p2, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getInteractionType()I

    move-result p2

    sput p2, Lcom/sigmob/sdk/videoAd/l;->n:I

    iget-object p2, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object p2

    iget-object p2, p2, Lcom/sigmob/sdk/base/models/rtb/Ad;->display_orientation:Ljava/lang/Integer;

    invoke-virtual {p2}, Ljava/lang/Integer;->intValue()I

    move-result p2

    if-eq p2, p6, :cond_1

    const/4 v0, 0x2

    if-eq p2, v0, :cond_0

    const/4 p2, 0x3

    const-string v0, "REQUESTED_ORIENTATION"

    invoke-virtual {p3, v0, p2}, Landroid/os/Bundle;->getInt(Ljava/lang/String;I)I

    move-result p2

    goto :goto_0

    :cond_0
    const/4 p2, 0x6

    goto :goto_0

    :cond_1
    const/4 p2, 0x7

    :goto_0
    iput p2, p0, Lcom/sigmob/sdk/videoAd/l;->I:I

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->h()Lcom/sigmob/sdk/base/common/j;

    move-result-object p2

    iget v0, p0, Lcom/sigmob/sdk/videoAd/l;->I:I

    invoke-interface {p2, v0}, Lcom/sigmob/sdk/base/common/j;->a(I)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->k()Landroid/app/Activity;

    move-result-object p2

    invoke-virtual {p2, p6}, Landroid/app/Activity;->requestWindowFeature(I)Z

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->k()Landroid/app/Activity;

    move-result-object p2

    invoke-virtual {p2}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object p2

    const/16 v0, 0x400

    invoke-virtual {p2, v0}, Landroid/view/Window;->addFlags(I)V

    iget p2, p0, Lcom/sigmob/sdk/videoAd/l;->I:I

    invoke-virtual {p0, p1, p2, p3}, Lcom/sigmob/sdk/videoAd/l;->b(Landroid/content/Context;ILandroid/os/Bundle;)V

    iget-object p2, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object p2

    check-cast p2, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    const-string p3, "_PLAYLASTFRAME_"

    const-string v0, "1"

    invoke-virtual {p2, p3, v0}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    iget-object p2, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object p2

    iget-object p2, p2, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->creative_type:Ljava/lang/Integer;

    invoke-virtual {p2}, Ljava/lang/Integer;->intValue()I

    move-result p2

    sget-object p3, Lcom/sigmob/sdk/base/common/l;->e:Lcom/sigmob/sdk/base/common/l;

    invoke-virtual {p3}, Lcom/sigmob/sdk/base/common/l;->a()I

    move-result p3

    if-eq p2, p3, :cond_2

    move p2, p6

    goto :goto_1

    :cond_2
    move p2, p5

    :goto_1
    iput-boolean p2, p0, Lcom/sigmob/sdk/videoAd/l;->C:Z

    const/4 p2, -0x1

    if-eqz p4, :cond_3

    const-string p3, "current_position"

    invoke-virtual {p4, p3, p2}, Landroid/os/Bundle;->getInt(Ljava/lang/String;I)I

    move-result p3

    iput p3, p0, Lcom/sigmob/sdk/videoAd/l;->U:I

    const-string p3, "video_finished"

    invoke-virtual {p4, p3, p5}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;Z)Z

    move-result p3

    iput-boolean p3, p0, Lcom/sigmob/sdk/videoAd/l;->V:Z

    const-string p3, "companionAd_visable"

    invoke-virtual {p4, p3, p5}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;Z)Z

    move-result p3

    iput-boolean p3, p0, Lcom/sigmob/sdk/videoAd/l;->Y:Z

    :cond_3
    iget-object p3, p0, Lcom/sigmob/sdk/videoAd/l;->H:Lcom/sigmob/sdk/videoAd/a;

    invoke-virtual {p3}, Lcom/sigmob/sdk/videoAd/a;->e()Ljava/lang/String;

    move-result-object p3

    if-eqz p3, :cond_7

    iget-object p3, p0, Lcom/sigmob/sdk/videoAd/l;->e:Lcom/sigmob/sdk/base/common/e;

    const/high16 p4, -0x1000000

    if-nez p3, :cond_5

    invoke-static {}, Lcom/sigmob/sdk/base/d;->b()I

    move-result p3

    if-eqz p3, :cond_4

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->k()Landroid/app/Activity;

    move-result-object v0

    invoke-virtual {v0, p3}, Landroid/app/Activity;->setTheme(I)V

    :cond_4
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->j()Landroid/view/ViewGroup;

    move-result-object p3

    invoke-virtual {p3, p4}, Landroid/view/ViewGroup;->setBackgroundColor(I)V

    goto :goto_2

    :cond_5
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->j()Landroid/view/ViewGroup;

    move-result-object p3

    invoke-virtual {p3, p5}, Landroid/view/ViewGroup;->setBackgroundColor(I)V

    :goto_2
    new-instance p3, Landroid/widget/RelativeLayout;

    invoke-direct {p3, p1}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    iput-object p3, p0, Lcom/sigmob/sdk/videoAd/l;->r:Landroid/widget/RelativeLayout;

    invoke-virtual {p3, p4}, Landroid/widget/RelativeLayout;->setBackgroundColor(I)V

    invoke-direct {p0, p1, p5}, Lcom/sigmob/sdk/videoAd/l;->a(Landroid/content/Context;I)Lcom/sigmob/sdk/videoAd/b;

    move-result-object p3

    iput-object p3, p0, Lcom/sigmob/sdk/videoAd/l;->J:Lcom/sigmob/sdk/videoAd/b;

    new-instance p3, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 p4, -0x2

    invoke-direct {p3, p2, p4}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 p4, 0xd

    invoke-virtual {p3, p4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    iget-object p4, p0, Lcom/sigmob/sdk/videoAd/l;->r:Landroid/widget/RelativeLayout;

    iget-object p5, p0, Lcom/sigmob/sdk/videoAd/l;->J:Lcom/sigmob/sdk/videoAd/b;

    invoke-virtual {p4, p5, p3}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->j()Landroid/view/ViewGroup;

    move-result-object p3

    iget-object p4, p0, Lcom/sigmob/sdk/videoAd/l;->r:Landroid/widget/RelativeLayout;

    new-instance p5, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {p5, p2, p2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {p3, p4, p5}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    iget-boolean p2, p0, Lcom/sigmob/sdk/videoAd/l;->t:Z

    if-eqz p2, :cond_6

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/videoAd/l;->a(Landroid/content/Context;)V

    invoke-direct {p0}, Lcom/sigmob/sdk/videoAd/l;->z()V

    :cond_6
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->m()V

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l;->r:Landroid/widget/RelativeLayout;

    invoke-virtual {p1, p6}, Landroid/widget/RelativeLayout;->setClickable(Z)V

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l;->r:Landroid/widget/RelativeLayout;

    new-instance p2, Lcom/sigmob/sdk/videoAd/l$1;

    invoke-direct {p2, p0}, Lcom/sigmob/sdk/videoAd/l$1;-><init>(Lcom/sigmob/sdk/videoAd/l;)V

    invoke-virtual {p1, p2}, Landroid/widget/RelativeLayout;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    return-void

    :cond_7
    new-instance p1, Ljava/lang/IllegalStateException;

    const-string p2, "BaseVideoConfig does not have a video disk path"

    invoke-direct {p1, p2}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method static synthetic A(Lcom/sigmob/sdk/videoAd/l;)Ljava/util/List;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/videoAd/l;->w:Ljava/util/List;

    return-object p0
.end method

.method private A()V
    .locals 7

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->Z:Landroid/widget/RelativeLayout;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/widget/RelativeLayout;->getVisibility()I

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->w:Ljava/util/List;

    const/4 v1, 0x1

    new-array v2, v1, [Ljava/lang/Object;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    iget-wide v5, p0, Lcom/sigmob/sdk/videoAd/l;->y:J

    sub-long/2addr v3, v5

    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    const/4 v4, 0x0

    aput-object v3, v2, v4

    const-string v3, "%d"

    invoke-static {v3, v2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->x:Ljava/util/List;

    new-array v1, v1, [Ljava/lang/Object;

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->t()I

    move-result v2

    int-to-float v2, v2

    const/high16 v3, 0x447a0000    # 1000.0f

    div-float/2addr v2, v3

    invoke-static {v2}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v2

    aput-object v2, v1, v4

    const-string v2, "%.2f"

    invoke-static {v2, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    const-string v0, "play"

    iput-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->z:Ljava/lang/String;

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->B:Landroid/os/Handler;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->Z:Landroid/widget/RelativeLayout;

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    :cond_0
    return-void
.end method

.method static synthetic B(Lcom/sigmob/sdk/videoAd/l;)Ljava/util/List;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/videoAd/l;->x:Ljava/util/List;

    return-object p0
.end method

.method private B()V
    .locals 3

    :try_start_0
    iget-boolean v0, p0, Lcom/sigmob/sdk/videoAd/l;->V:Z

    if-nez v0, :cond_3

    invoke-direct {p0}, Lcom/sigmob/sdk/videoAd/l;->I()V

    iget v0, p0, Lcom/sigmob/sdk/videoAd/l;->U:I

    if-lez v0, :cond_0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "video seek to "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/sigmob/sdk/videoAd/l;->U:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->J:Lcom/sigmob/sdk/videoAd/b;

    iget v1, p0, Lcom/sigmob/sdk/videoAd/l;->U:I

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/videoAd/b;->seekTo(I)V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->D:Lcom/sigmob/sdk/base/views/d;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->D:Lcom/sigmob/sdk/base/views/d;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/d;->getVisibility()I

    move-result v0

    if-eqz v0, :cond_2

    :cond_1
    iget-boolean v0, p0, Lcom/sigmob/sdk/videoAd/l;->an:Z

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->J:Lcom/sigmob/sdk/videoAd/b;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoAd/b;->start()V

    :cond_2
    iget v0, p0, Lcom/sigmob/sdk/videoAd/l;->U:I

    const/4 v1, -0x1

    if-eq v0, v1, :cond_3

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->H:Lcom/sigmob/sdk/videoAd/a;

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->i()Landroid/content/Context;

    move-result-object v1

    iget v2, p0, Lcom/sigmob/sdk/videoAd/l;->U:I

    invoke-virtual {v0, v1, v2}, Lcom/sigmob/sdk/videoAd/a;->a(Landroid/content/Context;I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :cond_3
    :goto_0
    return-void
.end method

.method static synthetic C(Lcom/sigmob/sdk/videoAd/l;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/videoAd/l;->z:Ljava/lang/String;

    return-object p0
.end method

.method private C()V
    .locals 3

    :try_start_0
    iget-boolean v0, p0, Lcom/sigmob/sdk/videoAd/l;->V:Z

    if-nez v0, :cond_0

    invoke-direct {p0}, Lcom/sigmob/sdk/videoAd/l;->J()V

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->J:Lcom/sigmob/sdk/videoAd/b;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoAd/b;->pause()V

    const-string v0, "videoView.pause()"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->t()I

    move-result v0

    iput v0, p0, Lcom/sigmob/sdk/videoAd/l;->U:I

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->n()Lcom/sigmob/sdk/base/common/r;

    move-result-object v0

    sget-object v1, Lcom/sigmob/sdk/base/common/a;->k:Lcom/sigmob/sdk/base/common/a;

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->t()I

    move-result v2

    invoke-virtual {v0, v1, v2}, Lcom/sigmob/sdk/base/common/r;->a(Lcom/sigmob/sdk/base/common/a;I)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->H:Lcom/sigmob/sdk/videoAd/a;

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->i()Landroid/content/Context;

    move-result-object v1

    iget v2, p0, Lcom/sigmob/sdk/videoAd/l;->U:I

    invoke-virtual {v0, v1, v2}, Lcom/sigmob/sdk/videoAd/a;->b(Landroid/content/Context;I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method

.method private D()F
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->t()I

    move-result v0

    int-to-float v0, v0

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->s()I

    move-result v1

    int-to-float v1, v1

    div-float/2addr v0, v1

    return v0
.end method

.method static synthetic D(Lcom/sigmob/sdk/videoAd/l;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/videoAd/l;->v:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic E(Lcom/sigmob/sdk/videoAd/l;)Landroid/content/Context;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/videoAd/l;->b:Landroid/content/Context;

    return-object p0
.end method

.method private E()V
    .locals 2

    :try_start_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->s()I

    move-result v0

    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l;->H:Lcom/sigmob/sdk/videoAd/a;

    invoke-virtual {v1, v0}, Lcom/sigmob/sdk/videoAd/a;->j(I)I

    move-result v0

    iput v0, p0, Lcom/sigmob/sdk/videoAd/l;->T:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method static synthetic F(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/common/j;
    .locals 0

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->h()Lcom/sigmob/sdk/base/common/j;

    move-result-object p0

    return-object p0
.end method

.method private F()V
    .locals 4

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    new-instance v1, Lcom/sigmob/sdk/videoAd/l$18;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/videoAd/l$18;-><init>(Lcom/sigmob/sdk/videoAd/l;)V

    const-string v2, "play_loading"

    const/4 v3, 0x0

    invoke-static {v2, v3, v0, v1}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    return-void
.end method

.method private G()V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->H:Lcom/sigmob/sdk/videoAd/a;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoAd/a;->s()I

    move-result v0

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->s()I

    move-result v1

    add-int/lit8 v1, v1, -0x2

    const v2, 0x5f5e0ff

    if-ne v0, v2, :cond_0

    const/4 v0, 0x0

    :goto_0
    invoke-direct {p0, v0}, Lcom/sigmob/sdk/videoAd/l;->a(I)V

    goto :goto_1

    :cond_0
    const v2, -0x5f5e0ff

    if-ne v0, v2, :cond_1

    invoke-direct {p0, v1}, Lcom/sigmob/sdk/videoAd/l;->a(I)V

    goto :goto_1

    :cond_1
    if-lez v0, :cond_2

    goto :goto_0

    :cond_2
    add-int/2addr v0, v1

    goto :goto_0

    :goto_1
    return-void
.end method

.method static synthetic G(Lcom/sigmob/sdk/videoAd/l;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/sigmob/sdk/videoAd/l;->C:Z

    return p0
.end method

.method static synthetic H(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/common/r;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/videoAd/l;->M:Lcom/sigmob/sdk/base/common/r;

    return-object p0
.end method

.method private H()V
    .locals 5

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->u()V

    iget-boolean v0, p0, Lcom/sigmob/sdk/videoAd/l;->C:Z

    const/4 v1, 0x0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->q:Landroid/widget/ImageView;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Landroid/widget/ImageView;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_0

    instance-of v2, v0, Landroid/view/ViewGroup;

    if-eqz v2, :cond_0

    check-cast v0, Landroid/view/ViewGroup;

    iget-object v2, p0, Lcom/sigmob/sdk/videoAd/l;->q:Landroid/widget/ImageView;

    invoke-virtual {v0, v2}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->j()Landroid/view/ViewGroup;

    move-result-object v0

    iget-object v2, p0, Lcom/sigmob/sdk/videoAd/l;->q:Landroid/widget/ImageView;

    invoke-virtual {v0, v2, v1}, Landroid/view/ViewGroup;->addView(Landroid/view/View;I)V

    :cond_1
    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->e()Lcom/sigmob/sdk/base/common/f;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/sigmob/sdk/base/common/f;->b(Lcom/sigmob/sdk/base/common/f$a;)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->O:Lcom/sigmob/sdk/base/views/x;

    if-nez v0, :cond_2

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->i()Landroid/content/Context;

    move-result-object v0

    invoke-direct {p0, v0, v1}, Lcom/sigmob/sdk/videoAd/l;->e(Landroid/content/Context;I)V

    goto :goto_0

    :cond_2
    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/views/x;->setVisibility(I)V

    :goto_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->o:Lcom/sigmob/sdk/base/views/b;

    const/16 v2, 0x8

    if-eqz v0, :cond_3

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/base/views/b;->setVisibility(I)V

    :cond_3
    invoke-direct {p0}, Lcom/sigmob/sdk/videoAd/l;->F()V

    invoke-direct {p0}, Lcom/sigmob/sdk/videoAd/l;->A()V

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->L:Landroid/view/View;

    if-nez v0, :cond_4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "endcard can\'t show "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v3}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getEndCardIndexPath()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    const-string v3, "error"

    const-string v4, "endcard can\'t show"

    invoke-virtual {v0, v3, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v3, "com.sigmob.action.rewardedvideo.playFail"

    invoke-virtual {p0, v3, v0}, Lcom/sigmob/sdk/videoAd/l;->a(Ljava/lang/String;Ljava/util/Map;)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->d:Lcom/sigmob/sdk/base/common/j;

    invoke-interface {v0}, Lcom/sigmob/sdk/base/common/j;->a()V

    :cond_4
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->L:Landroid/view/View;

    if-eqz v0, :cond_5

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->L:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->bringToFront()V

    :cond_5
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->r:Landroid/widget/RelativeLayout;

    if-eqz v0, :cond_6

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    const-string v0, "com.sigmob.action.rewardedvideo.Close"

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/videoAd/l;->a(Ljava/lang/String;)V

    :cond_6
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->P:Lcom/sigmob/sdk/base/views/w;

    if-eqz v0, :cond_7

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/base/views/w;->setVisibility(I)V

    :cond_7
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->ab:Lcom/sigmob/sdk/base/views/x;

    if-eqz v0, :cond_8

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/base/views/x;->setVisibility(I)V

    :cond_8
    iget-boolean v0, p0, Lcom/sigmob/sdk/videoAd/l;->ag:Z

    if-eqz v0, :cond_9

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->N:Lcom/sigmob/sdk/base/views/y;

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/base/views/y;->setVisibility(I)V

    :cond_9
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->af:Lcom/sigmob/sdk/base/views/j;

    if-eqz v0, :cond_a

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/base/views/j;->setVisibility(I)V

    :cond_a
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/sigmob/sdk/videoAd/l;->Y:Z

    return-void
.end method

.method static synthetic I(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/t;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/videoAd/l;->ak:Lcom/sigmob/sdk/base/views/t;

    return-object p0
.end method

.method private I()V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->S:Lcom/sigmob/sdk/videoAd/d;

    if-eqz v0, :cond_0

    const-wide/16 v1, 0x32

    invoke-virtual {v0, v1, v2}, Lcom/sigmob/sdk/videoAd/d;->startRepeating(J)V

    :cond_0
    return-void
.end method

.method static synthetic J(Lcom/sigmob/sdk/videoAd/l;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->i()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method private J()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->S:Lcom/sigmob/sdk/videoAd/d;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoAd/d;->stop()V

    :cond_0
    return-void
.end method

.method static synthetic K(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/common/j;
    .locals 0

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->h()Lcom/sigmob/sdk/base/common/j;

    move-result-object p0

    return-object p0
.end method

.method private K()V
    .locals 2

    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    new-instance v1, Lcom/sigmob/sdk/videoAd/l$11;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/videoAd/l$11;-><init>(Lcom/sigmob/sdk/videoAd/l;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method static synthetic L(Lcom/sigmob/sdk/videoAd/l;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/sigmob/sdk/videoAd/l;->ao:Z

    return p0
.end method

.method static synthetic M(Lcom/sigmob/sdk/videoAd/l;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/sigmob/sdk/videoAd/l;->al:Z

    return p0
.end method

.method static synthetic N(Lcom/sigmob/sdk/videoAd/l;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->i()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method static synthetic O(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/common/j;
    .locals 0

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->h()Lcom/sigmob/sdk/base/common/j;

    move-result-object p0

    return-object p0
.end method

.method static synthetic P(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/w;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/videoAd/l;->P:Lcom/sigmob/sdk/base/views/w;

    return-object p0
.end method

.method static synthetic Q(Lcom/sigmob/sdk/videoAd/l;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/sigmob/sdk/videoAd/l;->ad:Z

    return p0
.end method

.method static synthetic R(Lcom/sigmob/sdk/videoAd/l;)Landroid/content/Context;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/videoAd/l;->b:Landroid/content/Context;

    return-object p0
.end method

.method static synthetic S(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/a;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/videoAd/l;->Q:Lcom/sigmob/sdk/base/views/a;

    return-object p0
.end method

.method static synthetic T(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/q;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/videoAd/l;->am:Lcom/sigmob/sdk/base/views/q;

    return-object p0
.end method

.method static synthetic U(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/x;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/videoAd/l;->O:Lcom/sigmob/sdk/base/views/x;

    return-object p0
.end method

.method static synthetic V(Lcom/sigmob/sdk/videoAd/l;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/sigmob/sdk/videoAd/l;->aa:Z

    return p0
.end method

.method static synthetic W(Lcom/sigmob/sdk/videoAd/l;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/sigmob/sdk/videoAd/l;->A:Z

    return p0
.end method

.method static synthetic X(Lcom/sigmob/sdk/videoAd/l;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/sigmob/sdk/videoAd/l;->ah:Z

    return p0
.end method

.method static synthetic Y(Lcom/sigmob/sdk/videoAd/l;)V
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/videoAd/l;->K()V

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/videoAd/l;I)I
    .locals 0

    iput p1, p0, Lcom/sigmob/sdk/videoAd/l;->X:I

    return p1
.end method

.method private a(Landroid/content/Context;Lcom/sigmob/sdk/videoAd/h;I)Landroid/view/View;
    .locals 5

    invoke-static {p1}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;)Z

    if-nez p2, :cond_0

    new-instance p2, Landroid/view/View;

    invoke-direct {p2, p1}, Landroid/view/View;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x4

    invoke-virtual {p2, p1}, Landroid/view/View;->setVisibility(I)V

    return-object p2

    :cond_0
    new-instance v0, Landroid/widget/RelativeLayout;

    invoke-direct {v0, p1}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    const/16 v1, 0x11

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setGravity(I)V

    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v2, -0x1

    invoke-direct {v1, v2, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->j()Landroid/view/ViewGroup;

    move-result-object v3

    const/4 v4, 0x0

    invoke-virtual {v3, v0, v4, v1}, Landroid/view/ViewGroup;->addView(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V

    invoke-direct {p0, p1, p2}, Lcom/sigmob/sdk/videoAd/l;->a(Landroid/content/Context;Lcom/sigmob/sdk/videoAd/h;)Lcom/sigmob/sdk/base/views/l;

    move-result-object p2

    invoke-virtual {p2, p3}, Lcom/sigmob/sdk/base/views/l;->setVisibility(I)V

    new-instance p3, Landroid/widget/LinearLayout$LayoutParams;

    invoke-direct {p3, v2, v2}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v0, p2, p3}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    iget-object p3, p0, Lcom/sigmob/sdk/videoAd/l;->Q:Lcom/sigmob/sdk/base/views/a;

    if-nez p3, :cond_1

    new-instance p3, Lcom/sigmob/sdk/base/views/a;

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getRequestId()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAdslot_id()Ljava/lang/String;

    move-result-object v1

    invoke-direct {p3, p1, v0, v1}, Lcom/sigmob/sdk/base/views/a;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    iput-object p3, p0, Lcom/sigmob/sdk/videoAd/l;->Q:Lcom/sigmob/sdk/base/views/a;

    :cond_1
    new-instance p1, Lcom/sigmob/sdk/videoAd/l$6;

    invoke-direct {p1, p0}, Lcom/sigmob/sdk/videoAd/l$6;-><init>(Lcom/sigmob/sdk/videoAd/l;)V

    invoke-virtual {p2, p1}, Lcom/sigmob/sdk/base/views/l;->setLogoClickListener(Landroid/view/View$OnClickListener;)V

    return-object p2
.end method

.method static synthetic a(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/models/BaseAdUnit;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    return-object p0
.end method

.method private a(Landroid/content/Context;Lcom/sigmob/sdk/videoAd/h;)Lcom/sigmob/sdk/base/views/l;
    .locals 3

    invoke-static {p1}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;)Z

    invoke-static {p2}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;)Z

    invoke-virtual {p2}, Lcom/sigmob/sdk/videoAd/h;->a()Lcom/sigmob/sdk/base/views/k;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;)Z

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_source_logo()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getInvisibleAdLabel()Z

    move-result v1

    const/4 v2, 0x0

    invoke-static {p1, v0, v2, v1}, Lcom/sigmob/sdk/base/views/l;->a(Landroid/content/Context;Ljava/lang/String;ZZ)Lcom/sigmob/sdk/base/views/l;

    move-result-object p1

    new-instance v0, Lcom/sigmob/sdk/videoAd/l$a;

    invoke-direct {v0}, Lcom/sigmob/sdk/videoAd/l$a;-><init>()V

    const-string v1, "sigVersion"

    invoke-virtual {p1, v0, v1}, Lcom/sigmob/sdk/base/views/l;->addJavascriptInterface(Ljava/lang/Object;Ljava/lang/String;)V

    new-instance v0, Lcom/sigmob/sdk/videoAd/l$8;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/videoAd/l$8;-><init>(Lcom/sigmob/sdk/videoAd/l;)V

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/views/l;->setWebViewClickListener(Lcom/sigmob/sdk/base/views/l$a;)V

    new-instance v0, Lcom/sigmob/sdk/videoAd/l$9;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/videoAd/l$9;-><init>(Lcom/sigmob/sdk/videoAd/l;)V

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/views/l;->setDownloadListener(Landroid/webkit/DownloadListener;)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/views/l;->setAdUnit(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    new-instance v0, Lcom/sigmob/sdk/videoAd/l$10;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/videoAd/l$10;-><init>(Lcom/sigmob/sdk/videoAd/l;)V

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/views/l;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    invoke-virtual {p2}, Lcom/sigmob/sdk/videoAd/h;->a()Lcom/sigmob/sdk/base/views/k;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/sigmob/sdk/base/views/k;->a(Lcom/sigmob/sdk/base/views/l;)V

    const/4 p2, 0x0

    invoke-virtual {p1, p2}, Lcom/sigmob/sdk/base/views/l;->a(Lcom/sigmob/sdk/base/common/m$a;)V

    return-object p1
.end method

.method static synthetic a(Lcom/sigmob/sdk/videoAd/l;Lcom/sigmob/sdk/base/views/q;)Lcom/sigmob/sdk/base/views/q;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/videoAd/l;->am:Lcom/sigmob/sdk/base/views/q;

    return-object p1
.end method

.method private a(Landroid/content/Context;I)Lcom/sigmob/sdk/videoAd/b;
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->H:Lcom/sigmob/sdk/videoAd/a;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoAd/a;->e()Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_2

    new-instance v0, Lcom/sigmob/sdk/videoAd/b;

    invoke-direct {v0, p1}, Lcom/sigmob/sdk/videoAd/b;-><init>(Landroid/content/Context;)V

    new-instance v1, Lcom/sigmob/sdk/videoAd/l$15;

    invoke-direct {v1, p0, v0}, Lcom/sigmob/sdk/videoAd/l$15;-><init>(Lcom/sigmob/sdk/videoAd/l;Lcom/sigmob/sdk/videoAd/b;)V

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/videoAd/b;->setOnPreparedListener(Landroid/media/MediaPlayer$OnPreparedListener;)V

    :try_start_0
    iget-boolean v1, p0, Lcom/sigmob/sdk/videoAd/l;->C:Z

    if-nez v1, :cond_0

    iget-object v1, v0, Lcom/sigmob/sdk/videoAd/b;->a:Landroid/media/MediaMetadataRetriever;

    iget-object v2, p0, Lcom/sigmob/sdk/videoAd/l;->H:Lcom/sigmob/sdk/videoAd/a;

    invoke-virtual {v2}, Lcom/sigmob/sdk/videoAd/a;->e()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/media/MediaMetadataRetriever;->setDataSource(Ljava/lang/String;)V

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/videoAd/l;->b(Landroid/content/Context;)Landroid/widget/ImageView;

    move-result-object p1

    iput-object p1, p0, Lcom/sigmob/sdk/videoAd/l;->q:Landroid/widget/ImageView;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    new-instance p1, Lcom/sigmob/sdk/videoAd/l$16;

    invoke-direct {p1, p0}, Lcom/sigmob/sdk/videoAd/l$16;-><init>(Lcom/sigmob/sdk/videoAd/l;)V

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/videoAd/b;->setOnCompletionListener(Landroid/media/MediaPlayer$OnCompletionListener;)V

    new-instance p1, Lcom/sigmob/sdk/videoAd/l$17;

    invoke-direct {p1, p0, v0}, Lcom/sigmob/sdk/videoAd/l$17;-><init>(Lcom/sigmob/sdk/videoAd/l;Lcom/sigmob/sdk/videoAd/b;)V

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/videoAd/b;->setOnErrorListener(Landroid/media/MediaPlayer$OnErrorListener;)V

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->isVideoExist()Z

    move-result p1

    if-eqz p1, :cond_1

    new-instance p1, Ljava/io/File;

    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l;->H:Lcom/sigmob/sdk/videoAd/a;

    invoke-virtual {v1}, Lcom/sigmob/sdk/videoAd/a;->e()Ljava/lang/String;

    move-result-object v1

    invoke-direct {p1, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {p1}, Landroid/net/Uri;->fromFile(Ljava/io/File;)Landroid/net/Uri;

    move-result-object p1

    goto :goto_0

    :cond_1
    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/sigmob/sdk/videoAd/l;->t:Z

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->e()Lcom/sigmob/sdk/base/common/f;

    move-result-object p1

    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    const/4 v2, 0x0

    invoke-virtual {p1, v1, v2}, Lcom/sigmob/sdk/base/common/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/f$b;)V

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getProxyVideoUrl()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1

    :goto_0
    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/videoAd/b;->setVideoURI(Landroid/net/Uri;)V

    invoke-virtual {v0, p2}, Lcom/sigmob/sdk/videoAd/b;->setVisibility(I)V

    return-object v0

    :cond_2
    new-instance p1, Ljava/lang/IllegalStateException;

    const-string p2, "BaseVideoConfig does not have a video disk path"

    invoke-direct {p1, p2}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method static synthetic a(Lcom/sigmob/sdk/videoAd/l;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/videoAd/l;->z:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic a(Lcom/sigmob/sdk/videoAd/l;Ljava/util/List;)Ljava/lang/String;
    .locals 0

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/videoAd/l;->a(Ljava/util/List;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private a(Ljava/util/List;)Ljava/lang/String;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)",
            "Ljava/lang/String;"
        }
    .end annotation

    if-eqz p1, :cond_3

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const/4 v1, 0x0

    const/16 v2, 0x5b

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    :cond_1
    if-eqz v1, :cond_2

    const/16 v2, 0x2c

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    :cond_2
    invoke-interface {p1, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v1, v1, 0x1

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v2

    if-lt v1, v2, :cond_1

    const/16 p1, 0x5d

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    return-object p1

    :cond_3
    :goto_0
    const-string p1, ""

    return-object p1
.end method

.method private a(I)V
    .locals 3

    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "get video image begin"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->J:Lcom/sigmob/sdk/videoAd/b;

    iget-object v0, v0, Lcom/sigmob/sdk/videoAd/b;->a:Landroid/media/MediaMetadataRetriever;

    mul-int/lit16 p1, p1, 0x3e8

    int-to-long v1, p1

    const/4 p1, 0x2

    invoke-virtual {v0, v1, v2, p1}, Landroid/media/MediaMetadataRetriever;->getFrameAtTime(JI)Landroid/graphics/Bitmap;

    move-result-object p1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "get video image end"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->q:Landroid/widget/ImageView;

    sget-object v1, Landroid/widget/ImageView$ScaleType;->FIT_XY:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->q:Landroid/widget/ImageView;

    invoke-virtual {v0, p1}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V
    :try_end_0
    .catch Ljava/lang/RuntimeException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/RuntimeException;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method private a(ILandroid/widget/RelativeLayout$LayoutParams;)V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->b:Landroid/content/Context;

    const/high16 v1, 0x41200000    # 10.0f

    invoke-static {v1, v0}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result v0

    const/16 v1, 0xa

    invoke-virtual {p2, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l;->ab:Lcom/sigmob/sdk/base/views/x;

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/views/x;->getId()I

    move-result v1

    invoke-virtual {p2, p1, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    mul-int/lit8 v0, v0, 0x2

    const/4 p1, 0x0

    invoke-virtual {p2, p1, v0, p1, p1}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    goto :goto_0

    :cond_0
    invoke-virtual {v1}, Lcom/sigmob/sdk/base/views/x;->getId()I

    move-result v1

    invoke-virtual {p2, p1, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    mul-int/lit8 p1, v0, 0x2

    invoke-virtual {p2, v0, p1, v0, v0}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    :goto_0
    return-void
.end method

.method private a(IZ)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->P:Lcom/sigmob/sdk/base/views/w;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/w;->a()Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->P:Lcom/sigmob/sdk/base/views/w;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/w;->b()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->n()Lcom/sigmob/sdk/base/common/r;

    move-result-object v0

    invoke-virtual {v0, p2, p1}, Lcom/sigmob/sdk/base/common/r;->a(ZI)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->n()Lcom/sigmob/sdk/base/common/r;

    move-result-object p2

    sget-object v0, Lcom/sigmob/sdk/base/common/a;->L:Lcom/sigmob/sdk/base/common/a;

    invoke-virtual {p2, v0, p1}, Lcom/sigmob/sdk/base/common/r;->a(Lcom/sigmob/sdk/base/common/a;I)V

    :cond_0
    return-void
.end method

.method private a(Landroid/view/MotionEvent;Landroid/view/MotionEvent;)V
    .locals 6

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickAreaSetting()Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;

    move-result-object v0

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->left:Ljava/lang/Float;

    invoke-virtual {v1}, Ljava/lang/Float;->floatValue()F

    move-result v1

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v2

    invoke-virtual {v2}, Lcom/czhj/sdk/common/ClientMetadata;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v2

    iget v2, v2, Landroid/util/DisplayMetrics;->widthPixels:I

    int-to-float v2, v2

    mul-float/2addr v1, v2

    iget-object v2, v0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->right:Ljava/lang/Float;

    invoke-virtual {v2}, Ljava/lang/Float;->floatValue()F

    move-result v2

    const/high16 v3, 0x3f800000    # 1.0f

    sub-float v2, v3, v2

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v4

    invoke-virtual {v4}, Lcom/czhj/sdk/common/ClientMetadata;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v4

    iget v4, v4, Landroid/util/DisplayMetrics;->widthPixels:I

    int-to-float v4, v4

    mul-float/2addr v2, v4

    iget-object v4, v0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->top:Ljava/lang/Float;

    invoke-virtual {v4}, Ljava/lang/Float;->floatValue()F

    move-result v4

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v5

    invoke-virtual {v5}, Lcom/czhj/sdk/common/ClientMetadata;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v5

    iget v5, v5, Landroid/util/DisplayMetrics;->heightPixels:I

    int-to-float v5, v5

    mul-float/2addr v4, v5

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->bottom:Ljava/lang/Float;

    invoke-virtual {v0}, Ljava/lang/Float;->floatValue()F

    move-result v0

    sub-float/2addr v3, v0

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/sdk/common/ClientMetadata;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v0

    iget v0, v0, Landroid/util/DisplayMetrics;->heightPixels:I

    int-to-float v0, v0

    mul-float/2addr v3, v0

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getRawX()F

    move-result v0

    cmpg-float v0, v1, v0

    const/4 v1, 0x0

    const/4 v5, 0x1

    if-gez v0, :cond_2

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getRawX()F

    move-result v0

    cmpg-float v0, v0, v2

    if-gez v0, :cond_2

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getRawY()F

    move-result v0

    cmpg-float v0, v4, v0

    if-gez v0, :cond_2

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getRawY()F

    move-result v0

    cmpg-float v0, v0, v3

    if-gez v0, :cond_2

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object v0

    instance-of v2, v0, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    if-eqz v2, :cond_0

    check-cast v0, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->t()I

    move-result v2

    mul-int/lit8 v2, v2, 0x64

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->s()I

    move-result v3

    div-int/2addr v2, v3

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    const-string v3, "_PROGRESS_"

    invoke-virtual {v0, v3, v2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getRawX()F

    move-result v2

    float-to-int v2, v2

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    const-string v3, "_DOWNX_"

    invoke-virtual {v0, v3, v2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getRawY()F

    move-result v2

    float-to-int v2, v2

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    const-string v3, "_DOWNY_"

    invoke-virtual {v0, v3, v2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getRawX()F

    move-result v2

    float-to-int v2, v2

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    const-string v3, "_UPX_"

    invoke-virtual {v0, v3, v2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getRawY()F

    move-result v2

    float-to-int v2, v2

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    const-string v3, "_UPY_"

    invoke-virtual {v0, v3, v2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    const/4 v0, 0x4

    new-array v0, v0, [Ljava/lang/Object;

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getRawX()F

    move-result v2

    float-to-int v2, v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    aput-object v2, v0, v1

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getRawY()F

    move-result p1

    float-to-int p1, p1

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    aput-object p1, v0, v5

    const/4 p1, 0x2

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getRawX()F

    move-result v1

    float-to-int v1, v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    aput-object v1, v0, p1

    const/4 p1, 0x3

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getRawY()F

    move-result v1

    float-to-int v1, v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    aput-object v1, v0, p1

    const-string p1, "%d,%d,%d,%d"

    invoke-static {p1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/sigmob/sdk/videoAd/l;->g:Ljava/lang/String;

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l;->R:Lcom/sigmob/sdk/videoAd/h;

    if-nez p1, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->u()V

    :cond_1
    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l;->H:Lcom/sigmob/sdk/videoAd/a;

    sget-object v0, Lcom/sigmob/sdk/base/a;->c:Lcom/sigmob/sdk/base/a;

    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l;->g:Ljava/lang/String;

    invoke-virtual {p1, v0, v1, v5}, Lcom/sigmob/sdk/videoAd/a;->a(Lcom/sigmob/sdk/base/a;Ljava/lang/String;Z)V

    move v1, v5

    :cond_2
    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    const-string v0, "useless_video_click"

    invoke-static {p1, p2, v0, v1}, Lcom/sigmob/sdk/base/common/z;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Landroid/view/MotionEvent;Ljava/lang/String;Z)V

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/videoAd/l;IZ)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/sigmob/sdk/videoAd/l;->a(IZ)V

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/videoAd/l;Landroid/content/Context;I)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/sigmob/sdk/videoAd/l;->c(Landroid/content/Context;I)V

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/videoAd/l;Landroid/view/MotionEvent;Landroid/view/MotionEvent;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/sigmob/sdk/videoAd/l;->a(Landroid/view/MotionEvent;Landroid/view/MotionEvent;)V

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/videoAd/l;Ljava/lang/String;Ljava/util/Map;)V
    .locals 0

    invoke-virtual {p0, p1, p2}, Lcom/sigmob/sdk/videoAd/l;->a(Ljava/lang/String;Ljava/util/Map;)V

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/videoAd/l;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/videoAd/l;->ai:Z

    return p1
.end method

.method static synthetic b(Lcom/sigmob/sdk/videoAd/l;I)I
    .locals 0

    iput p1, p0, Lcom/sigmob/sdk/videoAd/l;->aj:I

    return p1
.end method

.method private b(Landroid/content/Context;)Landroid/widget/ImageView;
    .locals 2

    new-instance v0, Landroid/widget/ImageView;

    invoke-direct {v0, p1}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    new-instance p1, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {p1, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v0, p1}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    return-object v0
.end method

.method static synthetic b(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/d;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/videoAd/l;->D:Lcom/sigmob/sdk/base/views/d;

    return-object p0
.end method

.method static synthetic b(Lcom/sigmob/sdk/videoAd/l;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/videoAd/l;->v:Ljava/lang/String;

    return-object p1
.end method

.method private b(I)V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->am:Lcom/sigmob/sdk/base/views/q;

    if-nez v0, :cond_0

    new-instance v0, Lcom/sigmob/sdk/base/views/q;

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->k()Landroid/app/Activity;

    move-result-object v1

    iget-object v2, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-direct {v0, v1, v2}, Lcom/sigmob/sdk/base/views/q;-><init>(Landroid/content/Context;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    iput-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->am:Lcom/sigmob/sdk/base/views/q;

    new-instance v1, Lcom/sigmob/sdk/videoAd/l$7;

    invoke-direct {v1, p0, p1}, Lcom/sigmob/sdk/videoAd/l$7;-><init>(Lcom/sigmob/sdk/videoAd/l;I)V

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/views/q;->a(Lcom/sigmob/sdk/base/views/q$b;)V

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l;->am:Lcom/sigmob/sdk/base/views/q;

    if-eqz p1, :cond_1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/views/q;->a()Z

    move-result p1

    if-eqz p1, :cond_1

    iget-boolean p1, p0, Lcom/sigmob/sdk/videoAd/l;->an:Z

    if-nez p1, :cond_1

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l;->am:Lcom/sigmob/sdk/base/views/q;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/views/q;->show()V

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/sigmob/sdk/videoAd/l;->an:Z

    :cond_1
    return-void
.end method

.method private b(ILandroid/widget/RelativeLayout$LayoutParams;)V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->b:Landroid/content/Context;

    const/high16 v1, 0x41200000    # 10.0f

    invoke-static {v1, v0}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result v0

    const/4 v1, 0x1

    const/16 v2, 0xa

    if-eq p1, v1, :cond_1

    const/4 v1, 0x2

    if-eq p1, v1, :cond_1

    const/4 v1, 0x3

    if-eq p1, v1, :cond_0

    const/4 v1, 0x4

    if-eq p1, v1, :cond_0

    goto :goto_1

    :cond_0
    invoke-virtual {p2, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    const/16 p1, 0xb

    goto :goto_0

    :cond_1
    invoke-virtual {p2, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    const/16 p1, 0x9

    :goto_0
    invoke-virtual {p2, p1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    mul-int/lit8 p1, v0, 0x2

    invoke-virtual {p2, v0, p1, v0, v0}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    :goto_1
    return-void
.end method

.method private b(Landroid/content/Context;I)V
    .locals 1

    new-instance v0, Lcom/sigmob/sdk/base/views/y;

    invoke-direct {v0, p1}, Lcom/sigmob/sdk/base/views/y;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->N:Lcom/sigmob/sdk/base/views/y;

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l;->J:Lcom/sigmob/sdk/videoAd/b;

    invoke-virtual {p1}, Lcom/sigmob/sdk/videoAd/b;->getId()I

    move-result p1

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/base/views/y;->setAnchorId(I)V

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l;->N:Lcom/sigmob/sdk/base/views/y;

    invoke-virtual {p1, p2}, Lcom/sigmob/sdk/base/views/y;->setVisibility(I)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->j()Landroid/view/ViewGroup;

    move-result-object p1

    iget-object p2, p0, Lcom/sigmob/sdk/videoAd/l;->N:Lcom/sigmob/sdk/base/views/y;

    invoke-virtual {p1, p2}, Landroid/view/ViewGroup;->addView(Landroid/view/View;)V

    return-void
.end method

.method static synthetic b(Lcom/sigmob/sdk/videoAd/l;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/videoAd/l;->W:Z

    return p1
.end method

.method static synthetic c(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/j;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/videoAd/l;->af:Lcom/sigmob/sdk/base/views/j;

    return-object p0
.end method

.method private c(Landroid/content/Context;I)V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->D:Lcom/sigmob/sdk/base/views/d;

    if-eqz v0, :cond_0

    return-void

    :cond_0
    new-instance v0, Lcom/sigmob/sdk/base/views/d;

    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l;->H:Lcom/sigmob/sdk/videoAd/a;

    invoke-virtual {v1}, Lcom/sigmob/sdk/videoAd/a;->u()Lcom/sigmob/sdk/videoAd/e;

    move-result-object v1

    invoke-direct {v0, p1, v1}, Lcom/sigmob/sdk/base/views/d;-><init>(Landroid/content/Context;Lcom/sigmob/sdk/videoAd/e;)V

    iput-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->D:Lcom/sigmob/sdk/base/views/d;

    invoke-virtual {v0, p2}, Lcom/sigmob/sdk/base/views/d;->setVisibility(I)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->j()Landroid/view/ViewGroup;

    move-result-object p1

    iget-object p2, p0, Lcom/sigmob/sdk/videoAd/l;->D:Lcom/sigmob/sdk/base/views/d;

    invoke-virtual {p1, p2}, Landroid/view/ViewGroup;->addView(Landroid/view/View;)V

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l;->D:Lcom/sigmob/sdk/base/views/d;

    new-instance p2, Lcom/sigmob/sdk/videoAd/l$19;

    invoke-direct {p2, p0}, Lcom/sigmob/sdk/videoAd/l$19;-><init>(Lcom/sigmob/sdk/videoAd/l;)V

    invoke-virtual {p1, p2}, Lcom/sigmob/sdk/base/views/d;->setDialogListener(Lcom/sigmob/sdk/base/views/d$a;)V

    return-void
.end method

.method static synthetic c(Lcom/sigmob/sdk/videoAd/l;I)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/videoAd/l;->a(I)V

    return-void
.end method

.method static synthetic c(Lcom/sigmob/sdk/videoAd/l;Ljava/lang/String;)V
    .locals 0

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/videoAd/l;->a(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic c(Lcom/sigmob/sdk/videoAd/l;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/videoAd/l;->V:Z

    return p1
.end method

.method static synthetic d(Lcom/sigmob/sdk/videoAd/l;)Landroid/os/Handler;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/videoAd/l;->B:Landroid/os/Handler;

    return-object p0
.end method

.method private d(Landroid/content/Context;I)V
    .locals 22

    move-object/from16 v0, p0

    move-object/from16 v15, p1

    iget-object v1, v0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v1

    iget-object v1, v1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->companion:Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;

    if-eqz v1, :cond_a

    iget-object v2, v1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->icon_url:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_a

    iget-object v2, v1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->title:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_a

    iget-object v2, v1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->desc:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_0

    iget-object v2, v1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->score:Ljava/lang/Float;

    invoke-virtual {v2}, Ljava/lang/Float;->floatValue()F

    move-result v2

    const/high16 v3, 0x3f800000    # 1.0f

    cmpg-float v2, v2, v3

    if-gez v2, :cond_0

    goto/16 :goto_8

    :cond_0
    sget v2, Lcom/sigmob/sdk/base/views/n;->a:I

    const/16 v3, 0xe5

    const/4 v4, -0x1

    :try_start_0
    iget-object v5, v1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->button_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    const/high16 v6, 0x437f0000    # 255.0f

    const-wide v7, 0x3f847ae147ae147bL    # 0.01

    if-eqz v5, :cond_1

    iget-object v5, v1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->button_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    iget-object v5, v5, Lcom/sigmob/sdk/base/models/rtb/Color;->alpha:Ljava/lang/Float;

    invoke-virtual {v5}, Ljava/lang/Float;->floatValue()F

    move-result v5
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    float-to-double v9, v5

    cmpl-double v5, v9, v7

    if-lez v5, :cond_1

    :try_start_1
    iget-object v5, v1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->button_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    iget-object v5, v5, Lcom/sigmob/sdk/base/models/rtb/Color;->alpha:Ljava/lang/Float;

    invoke-virtual {v5}, Ljava/lang/Float;->floatValue()F

    move-result v5

    mul-float/2addr v5, v6

    float-to-int v5, v5

    iget-object v9, v1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->button_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    iget-object v9, v9, Lcom/sigmob/sdk/base/models/rtb/Color;->red:Ljava/lang/Integer;

    invoke-virtual {v9}, Ljava/lang/Integer;->intValue()I

    move-result v9

    iget-object v10, v1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->button_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    iget-object v10, v10, Lcom/sigmob/sdk/base/models/rtb/Color;->green:Ljava/lang/Integer;

    invoke-virtual {v10}, Ljava/lang/Integer;->intValue()I

    move-result v10

    iget-object v11, v1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->button_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    iget-object v11, v11, Lcom/sigmob/sdk/base/models/rtb/Color;->blue:Ljava/lang/Integer;

    invoke-virtual {v11}, Ljava/lang/Integer;->intValue()I

    move-result v11

    invoke-static {v5, v9, v10, v11}, Landroid/graphics/Color;->argb(IIII)I

    move-result v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    :cond_1
    :try_start_2
    iget-object v5, v1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->button_text_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    if-eqz v5, :cond_2

    iget-object v5, v1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->button_text_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    iget-object v5, v5, Lcom/sigmob/sdk/base/models/rtb/Color;->alpha:Ljava/lang/Float;

    invoke-virtual {v5}, Ljava/lang/Float;->floatValue()F

    move-result v5
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    float-to-double v9, v5

    cmpl-double v5, v9, v7

    if-lez v5, :cond_2

    :try_start_3
    iget-object v5, v1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->button_text_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    iget-object v5, v5, Lcom/sigmob/sdk/base/models/rtb/Color;->alpha:Ljava/lang/Float;

    invoke-virtual {v5}, Ljava/lang/Float;->floatValue()F

    move-result v5

    mul-float/2addr v5, v6

    float-to-int v5, v5

    iget-object v9, v1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->button_text_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    iget-object v9, v9, Lcom/sigmob/sdk/base/models/rtb/Color;->red:Ljava/lang/Integer;

    invoke-virtual {v9}, Ljava/lang/Integer;->intValue()I

    move-result v9

    iget-object v10, v1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->button_text_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    iget-object v10, v10, Lcom/sigmob/sdk/base/models/rtb/Color;->green:Ljava/lang/Integer;

    invoke-virtual {v10}, Ljava/lang/Integer;->intValue()I

    move-result v10

    iget-object v11, v1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->button_text_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    iget-object v11, v11, Lcom/sigmob/sdk/base/models/rtb/Color;->blue:Ljava/lang/Integer;

    invoke-virtual {v11}, Ljava/lang/Integer;->intValue()I

    move-result v11

    invoke-static {v5, v9, v10, v11}, Landroid/graphics/Color;->argb(IIII)I

    move-result v5
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    goto :goto_0

    :catchall_1
    :cond_2
    move v5, v4

    :goto_0
    :try_start_4
    iget-object v9, v1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->bar_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    if-eqz v9, :cond_3

    iget-object v9, v1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->bar_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    iget-object v9, v9, Lcom/sigmob/sdk/base/models/rtb/Color;->alpha:Ljava/lang/Float;

    invoke-virtual {v9}, Ljava/lang/Float;->floatValue()F

    move-result v9

    float-to-double v9, v9

    cmpl-double v7, v9, v7

    if-lez v7, :cond_3

    iget-object v7, v1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->bar_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    iget-object v7, v7, Lcom/sigmob/sdk/base/models/rtb/Color;->alpha:Ljava/lang/Float;

    invoke-virtual {v7}, Ljava/lang/Float;->floatValue()F

    move-result v3

    mul-float/2addr v3, v6

    float-to-int v3, v3

    iget-object v6, v1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->button_text_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    iget-object v6, v6, Lcom/sigmob/sdk/base/models/rtb/Color;->red:Ljava/lang/Integer;

    invoke-virtual {v6}, Ljava/lang/Integer;->intValue()I

    move-result v6

    iget-object v7, v1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->button_text_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    iget-object v7, v7, Lcom/sigmob/sdk/base/models/rtb/Color;->green:Ljava/lang/Integer;

    invoke-virtual {v7}, Ljava/lang/Integer;->intValue()I

    move-result v7

    iget-object v8, v1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->button_text_color:Lcom/sigmob/sdk/base/models/rtb/Color;

    iget-object v8, v8, Lcom/sigmob/sdk/base/models/rtb/Color;->blue:Ljava/lang/Integer;

    invoke-virtual {v8}, Ljava/lang/Integer;->intValue()I

    move-result v8

    invoke-static {v6, v7, v8}, Landroid/graphics/Color;->rgb(III)I

    move-result v4
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_3

    goto :goto_1

    :catchall_2
    move v5, v4

    :catchall_3
    :cond_3
    :goto_1
    move v11, v2

    move/from16 v16, v3

    move v14, v4

    move v12, v5

    const/4 v13, 0x0

    :try_start_5
    iget-object v2, v1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->click_type:Ljava/lang/Integer;

    if-eqz v2, :cond_4

    iget-object v2, v1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->click_type:Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_4

    goto :goto_2

    :cond_4
    move v2, v13

    :goto_2
    move/from16 v17, v2

    goto :goto_3

    :catchall_4
    move/from16 v17, v13

    :goto_3
    const/high16 v10, 0x428c0000    # 70.0f

    iget-object v2, v1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->button_text:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    const/4 v9, 0x2

    if-nez v3, :cond_6

    invoke-virtual {v2}, Ljava/lang/String;->length()I

    move-result v3

    const/4 v4, 0x4

    if-le v3, v4, :cond_5

    goto :goto_5

    :cond_5
    :goto_4
    move-object v5, v2

    goto :goto_6

    :cond_6
    :goto_5
    invoke-virtual/range {p0 .. p0}, Lcom/sigmob/sdk/videoAd/l;->a()Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v2

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getInteractionType()I

    move-result v2

    if-ne v2, v9, :cond_7

    const-string v2, "\u4e0b\u8f7d"

    goto :goto_4

    :cond_7
    const-string v2, "\u8be6\u60c5"

    goto :goto_4

    :goto_6
    new-instance v8, Lcom/sigmob/sdk/base/views/j;

    iget-object v3, v0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iget-object v4, v1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->title:Ljava/lang/String;

    iget-object v2, v1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->score:Ljava/lang/Float;

    invoke-virtual {v2}, Ljava/lang/Float;->floatValue()F

    move-result v6

    iget-object v7, v1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->desc:Ljava/lang/String;

    iget-object v2, v1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->animate_type:Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v18

    iget-object v2, v0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v2

    iget-object v2, v2, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->template_type:Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v19

    iget-object v2, v1, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->icon_url:Ljava/lang/String;

    const/high16 v20, 0x428c0000    # 70.0f

    move-object v1, v8

    move-object/from16 v21, v2

    move-object/from16 v2, p1

    move-object v0, v8

    move/from16 v8, v18

    move-object/from16 p2, v0

    move v0, v9

    move/from16 v9, v19

    move v0, v10

    move-object/from16 v10, v21

    move/from16 v13, v17

    move-object v0, v15

    move/from16 v15, v16

    move/from16 v16, v20

    invoke-direct/range {v1 .. v16}, Lcom/sigmob/sdk/base/views/j;-><init>(Landroid/content/Context;Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Ljava/lang/String;FLjava/lang/String;IILjava/lang/String;IIIIIF)V

    move-object/from16 v1, p0

    move-object/from16 v2, p2

    iput-object v2, v1, Lcom/sigmob/sdk/videoAd/l;->af:Lcom/sigmob/sdk/base/views/j;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->generateViewId()I

    move-result v3

    invoke-virtual {v2, v3}, Lcom/sigmob/sdk/base/views/j;->setId(I)V

    iget-object v2, v1, Lcom/sigmob/sdk/videoAd/l;->af:Lcom/sigmob/sdk/base/views/j;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/views/j;->getFourElementsLayout()Landroid/widget/LinearLayout;

    move-result-object v2

    const/4 v3, 0x1

    if-eqz v2, :cond_8

    invoke-virtual {v2, v3}, Landroid/widget/LinearLayout;->setClickable(Z)V

    new-instance v4, Lcom/sigmob/sdk/videoAd/l$20;

    invoke-direct {v4, v1}, Lcom/sigmob/sdk/videoAd/l$20;-><init>(Lcom/sigmob/sdk/videoAd/l;)V

    invoke-virtual {v2, v4}, Landroid/widget/LinearLayout;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_8
    invoke-virtual/range {p1 .. p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v2

    iget v2, v2, Landroid/util/DisplayMetrics;->widthPixels:I

    invoke-virtual/range {p1 .. p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v4

    invoke-virtual {v4}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v4

    iget v4, v4, Landroid/util/DisplayMetrics;->heightPixels:I

    new-instance v5, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-static {v2, v4}, Ljava/lang/Math;->max(II)I

    move-result v2

    mul-int/lit8 v2, v2, 0x3

    div-int/lit8 v2, v2, 0x5

    const/high16 v4, 0x428c0000    # 70.0f

    invoke-static {v4, v0}, Lcom/czhj/sdk/common/utils/Dips;->asIntPixels(FLandroid/content/Context;)I

    move-result v4

    invoke-direct {v5, v2, v4}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/high16 v2, 0x41000000    # 8.0f

    invoke-static {v2, v0}, Lcom/czhj/sdk/common/utils/Dips;->asIntPixels(FLandroid/content/Context;)I

    move-result v0

    iget-object v2, v1, Lcom/sigmob/sdk/videoAd/l;->o:Lcom/sigmob/sdk/base/views/b;

    const/16 v4, 0xb

    if-eqz v2, :cond_9

    const/4 v2, 0x0

    invoke-virtual {v5, v0, v2, v0, v2}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    invoke-virtual {v5, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    iget-object v0, v1, Lcom/sigmob/sdk/videoAd/l;->o:Lcom/sigmob/sdk/base/views/b;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/b;->getId()I

    move-result v0

    const/4 v4, 0x2

    invoke-virtual {v5, v4, v0}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    goto :goto_7

    :cond_9
    const/4 v2, 0x0

    iget v6, v1, Lcom/sigmob/sdk/videoAd/l;->s:I

    add-int/2addr v6, v0

    invoke-virtual {v5, v0, v2, v0, v6}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    invoke-virtual {v5, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    const/16 v0, 0xc

    invoke-virtual {v5, v0}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    :goto_7
    invoke-virtual/range {p0 .. p0}, Lcom/sigmob/sdk/videoAd/l;->j()Landroid/view/ViewGroup;

    move-result-object v0

    iget-object v4, v1, Lcom/sigmob/sdk/videoAd/l;->af:Lcom/sigmob/sdk/base/views/j;

    invoke-virtual {v0, v4, v5}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    iput-boolean v2, v1, Lcom/sigmob/sdk/videoAd/l;->G:Z

    iget-object v0, v1, Lcom/sigmob/sdk/videoAd/l;->af:Lcom/sigmob/sdk/base/views/j;

    invoke-virtual {v0, v3}, Lcom/sigmob/sdk/base/views/j;->setClickable(Z)V

    iget-object v0, v1, Lcom/sigmob/sdk/videoAd/l;->af:Lcom/sigmob/sdk/base/views/j;

    new-instance v2, Lcom/sigmob/sdk/videoAd/l$21;

    invoke-direct {v2, v1}, Lcom/sigmob/sdk/videoAd/l$21;-><init>(Lcom/sigmob/sdk/videoAd/l;)V

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/base/views/j;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    return-void

    :cond_a
    :goto_8
    move-object v1, v0

    const-string v0, "ompanionEnd lose informations of UI Display"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic d(Lcom/sigmob/sdk/videoAd/l;I)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/videoAd/l;->b(I)V

    return-void
.end method

.method static synthetic d(Lcom/sigmob/sdk/videoAd/l;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/videoAd/l;->aa:Z

    return p1
.end method

.method static synthetic e(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/videoAd/h;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/videoAd/l;->R:Lcom/sigmob/sdk/videoAd/h;

    return-object p0
.end method

.method private e(Landroid/content/Context;I)V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->O:Lcom/sigmob/sdk/base/views/x;

    if-eqz v0, :cond_0

    return-void

    :cond_0
    new-instance v0, Lcom/sigmob/sdk/base/views/x;

    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l;->H:Lcom/sigmob/sdk/videoAd/a;

    invoke-virtual {v1}, Lcom/sigmob/sdk/videoAd/a;->n()I

    move-result v1

    invoke-direct {v0, p1, v1}, Lcom/sigmob/sdk/base/views/x;-><init>(Landroid/content/Context;I)V

    iput-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->O:Lcom/sigmob/sdk/base/views/x;

    invoke-virtual {v0, p2}, Lcom/sigmob/sdk/base/views/x;->setVisibility(I)V

    new-instance p2, Landroid/widget/RelativeLayout$LayoutParams;

    const/high16 v0, 0x41f00000    # 30.0f

    invoke-static {v0, p1}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result v1

    invoke-static {v0, p1}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result p1

    invoke-direct {p2, v1, p1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l;->H:Lcom/sigmob/sdk/videoAd/a;

    invoke-virtual {p1}, Lcom/sigmob/sdk/videoAd/a;->n()I

    move-result p1

    invoke-direct {p0, p1, p2}, Lcom/sigmob/sdk/videoAd/l;->b(ILandroid/widget/RelativeLayout$LayoutParams;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->j()Landroid/view/ViewGroup;

    move-result-object p1

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->O:Lcom/sigmob/sdk/base/views/x;

    invoke-virtual {p1, v0, p2}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    if-eqz p1, :cond_1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCloseCardHtmlData()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_1

    iget-boolean p1, p0, Lcom/sigmob/sdk/videoAd/l;->ao:Z

    if-nez p1, :cond_1

    new-instance p1, Lcom/sigmob/sdk/base/views/t;

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->k()Landroid/app/Activity;

    move-result-object p2

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l;->H:Lcom/sigmob/sdk/videoAd/a;

    invoke-direct {p1, p2, v0, v1}, Lcom/sigmob/sdk/base/views/t;-><init>(Landroid/content/Context;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/videoAd/a;)V

    iput-object p1, p0, Lcom/sigmob/sdk/videoAd/l;->ak:Lcom/sigmob/sdk/base/views/t;

    new-instance p2, Lcom/sigmob/sdk/videoAd/l$2;

    invoke-direct {p2, p0}, Lcom/sigmob/sdk/videoAd/l$2;-><init>(Lcom/sigmob/sdk/videoAd/l;)V

    invoke-virtual {p1, p2}, Lcom/sigmob/sdk/base/views/t;->a(Lcom/sigmob/sdk/base/views/t$a;)V

    :cond_1
    new-instance p1, Lcom/sigmob/sdk/videoAd/l$3;

    invoke-direct {p1, p0}, Lcom/sigmob/sdk/videoAd/l$3;-><init>(Lcom/sigmob/sdk/videoAd/l;)V

    iget-object p2, p0, Lcom/sigmob/sdk/videoAd/l;->O:Lcom/sigmob/sdk/base/views/x;

    invoke-virtual {p2, p1}, Lcom/sigmob/sdk/base/views/x;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l;->O:Lcom/sigmob/sdk/base/views/x;

    iget-object p2, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1, p2}, Lcom/sigmob/sdk/base/views/x;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l;->H:Lcom/sigmob/sdk/videoAd/a;

    invoke-virtual {p1}, Lcom/sigmob/sdk/videoAd/a;->h()Ljava/lang/String;

    move-result-object p1

    if-eqz p1, :cond_2

    iget-object p2, p0, Lcom/sigmob/sdk/videoAd/l;->O:Lcom/sigmob/sdk/base/views/x;

    invoke-virtual {p2, p1}, Lcom/sigmob/sdk/base/views/x;->a(Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method static synthetic e(Lcom/sigmob/sdk/videoAd/l;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/videoAd/l;->al:Z

    return p1
.end method

.method static synthetic f(Lcom/sigmob/sdk/videoAd/l;)I
    .locals 0

    iget p0, p0, Lcom/sigmob/sdk/videoAd/l;->X:I

    return p0
.end method

.method private f(Landroid/content/Context;I)V
    .locals 3

    new-instance v0, Lcom/sigmob/sdk/base/views/w;

    invoke-direct {v0, p1}, Lcom/sigmob/sdk/base/views/w;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->P:Lcom/sigmob/sdk/base/views/w;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->generateViewId()I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/views/w;->setId(I)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->P:Lcom/sigmob/sdk/base/views/w;

    invoke-virtual {v0, p2}, Lcom/sigmob/sdk/base/views/w;->setVisibility(I)V

    new-instance p2, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v0, -0x2

    invoke-direct {p2, v0, v0}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->H:Lcom/sigmob/sdk/videoAd/a;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoAd/a;->p()I

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x2

    if-gt v0, v2, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->H:Lcom/sigmob/sdk/videoAd/a;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoAd/a;->o()I

    move-result v0

    if-gt v0, v2, :cond_1

    const/4 v0, 0x1

    invoke-direct {p0, v0, p2}, Lcom/sigmob/sdk/videoAd/l;->a(ILandroid/widget/RelativeLayout$LayoutParams;)V

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->H:Lcom/sigmob/sdk/videoAd/a;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoAd/a;->o()I

    move-result v0

    if-le v0, v2, :cond_1

    invoke-direct {p0, v1, p2}, Lcom/sigmob/sdk/videoAd/l;->a(ILandroid/widget/RelativeLayout$LayoutParams;)V

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->H:Lcom/sigmob/sdk/videoAd/a;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoAd/a;->o()I

    move-result v0

    invoke-direct {p0, v0, p2}, Lcom/sigmob/sdk/videoAd/l;->b(ILandroid/widget/RelativeLayout$LayoutParams;)V

    :goto_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->j()Landroid/view/ViewGroup;

    move-result-object v0

    iget-object v2, p0, Lcom/sigmob/sdk/videoAd/l;->P:Lcom/sigmob/sdk/base/views/w;

    invoke-virtual {v0, v2, p2}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    iget-object p2, p0, Lcom/sigmob/sdk/videoAd/l;->P:Lcom/sigmob/sdk/base/views/w;

    new-instance v0, Lcom/sigmob/sdk/videoAd/l$4;

    invoke-direct {v0, p0, p1}, Lcom/sigmob/sdk/videoAd/l$4;-><init>(Lcom/sigmob/sdk/videoAd/l;Landroid/content/Context;)V

    invoke-virtual {p2, v0}, Lcom/sigmob/sdk/base/views/w;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l;->H:Lcom/sigmob/sdk/videoAd/a;

    invoke-virtual {p1}, Lcom/sigmob/sdk/videoAd/a;->w()I

    move-result p1

    if-nez p1, :cond_2

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l;->H:Lcom/sigmob/sdk/videoAd/a;

    invoke-virtual {p1}, Lcom/sigmob/sdk/videoAd/a;->y()I

    move-result p1

    if-ltz p1, :cond_3

    :cond_2
    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l;->H:Lcom/sigmob/sdk/videoAd/a;

    invoke-virtual {p1}, Lcom/sigmob/sdk/videoAd/a;->y()I

    move-result p1

    if-nez p1, :cond_4

    :cond_3
    invoke-direct {p0, v1, v1}, Lcom/sigmob/sdk/videoAd/l;->a(IZ)V

    :cond_4
    return-void
.end method

.method static synthetic f(Lcom/sigmob/sdk/videoAd/l;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/videoAd/l;->ac:Z

    return p1
.end method

.method private g(Landroid/content/Context;I)V
    .locals 2

    new-instance v0, Lcom/sigmob/sdk/base/views/x;

    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l;->H:Lcom/sigmob/sdk/videoAd/a;

    invoke-virtual {v1}, Lcom/sigmob/sdk/videoAd/a;->p()I

    move-result v1

    invoke-direct {v0, p1, v1}, Lcom/sigmob/sdk/base/views/x;-><init>(Landroid/content/Context;I)V

    iput-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->ab:Lcom/sigmob/sdk/base/views/x;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->generateViewId()I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/views/x;->setId(I)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->ab:Lcom/sigmob/sdk/base/views/x;

    invoke-virtual {v0, p2}, Lcom/sigmob/sdk/base/views/x;->setVisibility(I)V

    new-instance p2, Landroid/widget/RelativeLayout$LayoutParams;

    const/high16 v0, 0x41f00000    # 30.0f

    invoke-static {v0, p1}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result v1

    invoke-static {v0, p1}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result p1

    invoke-direct {p2, v1, p1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l;->H:Lcom/sigmob/sdk/videoAd/a;

    invoke-virtual {p1}, Lcom/sigmob/sdk/videoAd/a;->p()I

    move-result p1

    invoke-direct {p0, p1, p2}, Lcom/sigmob/sdk/videoAd/l;->b(ILandroid/widget/RelativeLayout$LayoutParams;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->j()Landroid/view/ViewGroup;

    move-result-object p1

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->ab:Lcom/sigmob/sdk/base/views/x;

    invoke-virtual {p1, v0, p2}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    new-instance p1, Lcom/sigmob/sdk/videoAd/l$5;

    invoke-direct {p1, p0}, Lcom/sigmob/sdk/videoAd/l$5;-><init>(Lcom/sigmob/sdk/videoAd/l;)V

    iget-object p2, p0, Lcom/sigmob/sdk/videoAd/l;->ab:Lcom/sigmob/sdk/base/views/x;

    invoke-virtual {p2, p1}, Lcom/sigmob/sdk/base/views/x;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l;->H:Lcom/sigmob/sdk/videoAd/a;

    invoke-virtual {p1}, Lcom/sigmob/sdk/videoAd/a;->r()I

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l;->ab:Lcom/sigmob/sdk/base/views/x;

    sget-object p2, Lcom/sigmob/sdk/base/views/o;->b:Lcom/sigmob/sdk/base/views/o;

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/views/o;->a()Landroid/graphics/Bitmap;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/sigmob/sdk/base/views/x;->a(Landroid/graphics/Bitmap;)V

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l;->J:Lcom/sigmob/sdk/videoAd/b;

    const/4 p2, 0x0

    invoke-virtual {p1, p2}, Lcom/sigmob/sdk/videoAd/b;->setVolume(F)V

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/sigmob/sdk/videoAd/l;->ac:Z

    goto :goto_0

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l;->ab:Lcom/sigmob/sdk/base/views/x;

    sget-object p2, Lcom/sigmob/sdk/base/views/o;->c:Lcom/sigmob/sdk/base/views/o;

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/views/o;->a()Landroid/graphics/Bitmap;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/sigmob/sdk/base/views/x;->a(Landroid/graphics/Bitmap;)V

    :goto_0
    return-void
.end method

.method static synthetic g(Lcom/sigmob/sdk/videoAd/l;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/sigmob/sdk/videoAd/l;->V:Z

    return p0
.end method

.method static synthetic g(Lcom/sigmob/sdk/videoAd/l;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/videoAd/l;->an:Z

    return p1
.end method

.method static synthetic h(Lcom/sigmob/sdk/videoAd/l;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/sigmob/sdk/videoAd/l;->an:Z

    return p0
.end method

.method static synthetic h(Lcom/sigmob/sdk/videoAd/l;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/videoAd/l;->A:Z

    return p1
.end method

.method static synthetic i(Lcom/sigmob/sdk/videoAd/l;)V
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/videoAd/l;->A()V

    return-void
.end method

.method static synthetic i(Lcom/sigmob/sdk/videoAd/l;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/videoAd/l;->ah:Z

    return p1
.end method

.method static synthetic j(Lcom/sigmob/sdk/videoAd/l;)V
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/videoAd/l;->I()V

    return-void
.end method

.method static synthetic k(Lcom/sigmob/sdk/videoAd/l;)I
    .locals 0

    iget p0, p0, Lcom/sigmob/sdk/videoAd/l;->aj:I

    return p0
.end method

.method public static l()I
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method static synthetic l(Lcom/sigmob/sdk/videoAd/l;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/sigmob/sdk/videoAd/l;->ac:Z

    return p0
.end method

.method static synthetic m(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/x;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/videoAd/l;->ab:Lcom/sigmob/sdk/base/views/x;

    return-object p0
.end method

.method static synthetic n(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/videoAd/b;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/videoAd/l;->J:Lcom/sigmob/sdk/videoAd/b;

    return-object p0
.end method

.method static synthetic o(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/videoAd/a;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/videoAd/l;->H:Lcom/sigmob/sdk/videoAd/a;

    return-object p0
.end method

.method static synthetic p(Lcom/sigmob/sdk/videoAd/l;)I
    .locals 0

    iget p0, p0, Lcom/sigmob/sdk/videoAd/l;->U:I

    return p0
.end method

.method static synthetic q(Lcom/sigmob/sdk/videoAd/l;)V
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/videoAd/l;->E()V

    return-void
.end method

.method static synthetic r(Lcom/sigmob/sdk/videoAd/l;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/sigmob/sdk/videoAd/l;->ag:Z

    return p0
.end method

.method static synthetic s(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/y;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/videoAd/l;->N:Lcom/sigmob/sdk/base/views/y;

    return-object p0
.end method

.method static synthetic t(Lcom/sigmob/sdk/videoAd/l;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/sigmob/sdk/videoAd/l;->t:Z

    return p0
.end method

.method static synthetic u(Lcom/sigmob/sdk/videoAd/l;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/sigmob/sdk/videoAd/l;->ai:Z

    return p0
.end method

.method static synthetic v(Lcom/sigmob/sdk/videoAd/l;)V
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/videoAd/l;->z()V

    return-void
.end method

.method static synthetic w(Lcom/sigmob/sdk/videoAd/l;)V
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/videoAd/l;->J()V

    return-void
.end method

.method static synthetic x(Lcom/sigmob/sdk/videoAd/l;)F
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/videoAd/l;->D()F

    move-result p0

    return p0
.end method

.method static synthetic y()I
    .locals 1

    sget v0, Lcom/sigmob/sdk/videoAd/l;->n:I

    return v0
.end method

.method static synthetic y(Lcom/sigmob/sdk/videoAd/l;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->i()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method private z()V
    .locals 4

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->Z:Landroid/widget/RelativeLayout;

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Landroid/widget/RelativeLayout;->getVisibility()I

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/sigmob/sdk/videoAd/l;->y:J

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->Z:Landroid/widget/RelativeLayout;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    const-string v0, "loading"

    iput-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->z:Ljava/lang/String;

    iget v0, p0, Lcom/sigmob/sdk/videoAd/l;->u:I

    const/4 v1, 0x1

    add-int/2addr v0, v1

    iput v0, p0, Lcom/sigmob/sdk/videoAd/l;->u:I

    const/4 v2, 0x2

    if-le v0, v2, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->t()I

    move-result v0

    invoke-direct {p0, v0, v1}, Lcom/sigmob/sdk/videoAd/l;->a(IZ)V

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->B:Landroid/os/Handler;

    new-instance v1, Lcom/sigmob/sdk/videoAd/l$12;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/videoAd/l$12;-><init>(Lcom/sigmob/sdk/videoAd/l;)V

    const-wide/16 v2, 0x1388

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    :cond_2
    :goto_0
    return-void
.end method

.method static synthetic z(Lcom/sigmob/sdk/videoAd/l;)V
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/videoAd/l;->H()V

    return-void
.end method


# virtual methods
.method public a()Lcom/sigmob/sdk/base/models/BaseAdUnit;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    return-object v0
.end method

.method public a(IILandroid/content/Intent;)V
    .locals 0

    const/4 p1, -0x1

    if-ne p2, p1, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->h()Lcom/sigmob/sdk/base/common/j;

    move-result-object p1

    invoke-interface {p1}, Lcom/sigmob/sdk/base/common/j;->a()V

    :cond_0
    return-void
.end method

.method public a(Landroid/content/Context;)V
    .locals 8

    new-instance v0, Landroid/widget/RelativeLayout;

    invoke-direct {v0, p1}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->Z:Landroid/widget/RelativeLayout;

    new-instance v0, Landroid/widget/ImageView;

    invoke-direct {v0, p1}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    sget-object p1, Lcom/sigmob/sdk/base/views/o;->a:Lcom/sigmob/sdk/base/views/o;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/views/o;->a()Landroid/graphics/Bitmap;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->generateViewId()I

    move-result p1

    invoke-virtual {v0, p1}, Landroid/widget/ImageView;->setId(I)V

    new-instance p1, Landroid/view/animation/RotateAnimation;

    const v1, 0x36ee80

    int-to-float v3, v1

    const/4 v2, 0x0

    const/4 v4, 0x1

    const/high16 v5, 0x3f000000    # 0.5f

    const/4 v6, 0x1

    const/high16 v7, 0x3f000000    # 0.5f

    move-object v1, p1

    invoke-direct/range {v1 .. v7}, Landroid/view/animation/RotateAnimation;-><init>(FFIFIF)V

    const v1, 0x7a1200

    int-to-long v1, v1

    invoke-virtual {p1, v1, v2}, Landroid/view/animation/RotateAnimation;->setDuration(J)V

    new-instance v1, Landroid/view/animation/LinearInterpolator;

    invoke-direct {v1}, Landroid/view/animation/LinearInterpolator;-><init>()V

    invoke-virtual {p1, v1}, Landroid/view/animation/RotateAnimation;->setInterpolator(Landroid/view/animation/Interpolator;)V

    const/4 v1, -0x1

    invoke-virtual {p1, v1}, Landroid/view/animation/RotateAnimation;->setRepeatCount(I)V

    const/4 v1, 0x1

    invoke-virtual {p1, v1}, Landroid/view/animation/RotateAnimation;->setRepeatMode(I)V

    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v2, -0x2

    invoke-direct {v1, v2, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v3, 0xd

    invoke-virtual {v1, v3}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    invoke-virtual {v0, p1}, Landroid/widget/ImageView;->setAnimation(Landroid/view/animation/Animation;)V

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l;->Z:Landroid/widget/RelativeLayout;

    invoke-virtual {p1, v0, v1}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l;->Z:Landroid/widget/RelativeLayout;

    const/4 v0, 0x4

    invoke-virtual {p1, v0}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    new-instance p1, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {p1, v2, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {p1, v3}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->j()Landroid/view/ViewGroup;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l;->Z:Landroid/widget/RelativeLayout;

    invoke-virtual {v0, v1, p1}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method public a(Landroid/content/res/Configuration;)V
    .locals 2

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l;->H:Lcom/sigmob/sdk/videoAd/a;

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l;->R:Lcom/sigmob/sdk/videoAd/h;

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/a;->g(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Lcom/sigmob/sdk/videoAd/h;

    move-result-object p1

    iput-object p1, p0, Lcom/sigmob/sdk/videoAd/l;->R:Lcom/sigmob/sdk/videoAd/h;

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->H:Lcom/sigmob/sdk/videoAd/a;

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/videoAd/h;->a(Lcom/sigmob/sdk/videoAd/a;)V

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->n()Lcom/sigmob/sdk/base/common/r;

    move-result-object p1

    if-eqz p1, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->n()Lcom/sigmob/sdk/base/common/r;

    move-result-object p1

    sget-object v0, Lcom/sigmob/sdk/base/common/a;->D:Lcom/sigmob/sdk/base/common/a;

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->t()I

    move-result v1

    invoke-virtual {p1, v0, v1}, Lcom/sigmob/sdk/base/common/r;->a(Lcom/sigmob/sdk/base/common/a;I)V

    :cond_1
    return-void
.end method

.method public a(Landroid/os/Bundle;)V
    .locals 2

    :try_start_0
    const-string v0, "video_finished"

    iget-boolean v1, p0, Lcom/sigmob/sdk/videoAd/l;->V:Z

    invoke-virtual {p1, v0, v1}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    const-string v0, "current_position"

    iget v1, p0, Lcom/sigmob/sdk/videoAd/l;->U:I

    invoke-virtual {p1, v0, v1}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    const-string v0, "companionAd_visable"

    iget-boolean v1, p0, Lcom/sigmob/sdk/videoAd/l;->Y:Z

    invoke-virtual {p1, v0, v1}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method a(Lcom/sigmob/sdk/base/common/a;)V
    .locals 2

    sget-object v0, Lcom/sigmob/sdk/base/common/a;->a:Lcom/sigmob/sdk/base/common/a;

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/base/common/a;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, "com.sigmob.action.interstitial.show"

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/videoAd/l;->a(Ljava/lang/String;)V

    const-string v0, "com.sigmob.action.rewardedvideo.play"

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/videoAd/l;->a(Ljava/lang/String;)V

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->n()Lcom/sigmob/sdk/base/common/r;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->n()Lcom/sigmob/sdk/base/common/r;

    move-result-object v0

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->t()I

    move-result v1

    invoke-virtual {v0, p1, v1}, Lcom/sigmob/sdk/base/common/r;->a(Lcom/sigmob/sdk/base/common/a;I)V

    :cond_1
    return-void
.end method

.method public a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 2

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getUuid()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getUuid()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->isEndCardIndexExist()Z

    move-result p1

    if-eqz p1, :cond_1

    new-instance p1, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-direct {p1, v0}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    new-instance v0, Lcom/sigmob/sdk/videoAd/l$13;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/videoAd/l$13;-><init>(Lcom/sigmob/sdk/videoAd/l;)V

    invoke-virtual {p1, v0}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :cond_1
    return-void
.end method

.method public a(ZLcom/sigmob/sdk/base/a;)V
    .locals 8

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/sigmob/sdk/videoAd/l;->ao:Z

    invoke-direct {p0}, Lcom/sigmob/sdk/videoAd/l;->K()V

    if-nez p1, :cond_0

    return-void

    :cond_0
    sget-object p1, Lcom/sigmob/sdk/videoAd/l$14;->a:[I

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/a;->ordinal()I

    move-result p2

    aget p1, p1, p2

    if-eq p1, v0, :cond_2

    const/4 p2, 0x2

    if-eq p1, p2, :cond_1

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object p1

    sget-object v0, Lcom/sigmob/sdk/base/a;->b:Lcom/sigmob/sdk/base/a;

    iget-object v2, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/ClickCommon;->isDeeplink:Ljava/lang/String;

    iget-object v4, p1, Lcom/sigmob/sdk/base/models/ClickCommon;->clickUrl:Ljava/lang/String;

    iget-object v5, p1, Lcom/sigmob/sdk/base/models/ClickCommon;->clickCoordinate:Ljava/lang/String;

    iget p1, p0, Lcom/sigmob/sdk/videoAd/l;->X:I

    int-to-long v6, p1

    const-string v1, "click"

    invoke-static/range {v0 .. v7}, Lcom/sigmob/sdk/base/common/z;->a(Lcom/sigmob/sdk/base/a;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;J)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->n()Lcom/sigmob/sdk/base/common/r;

    move-result-object p1

    sget-object p2, Lcom/sigmob/sdk/base/common/a;->c:Lcom/sigmob/sdk/base/common/a;

    goto :goto_0

    :cond_1
    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object p1

    sget-object v0, Lcom/sigmob/sdk/base/a;->c:Lcom/sigmob/sdk/base/a;

    iget-object v2, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/ClickCommon;->isDeeplink:Ljava/lang/String;

    iget-object v4, p1, Lcom/sigmob/sdk/base/models/ClickCommon;->clickUrl:Ljava/lang/String;

    iget-object v5, p1, Lcom/sigmob/sdk/base/models/ClickCommon;->clickCoordinate:Ljava/lang/String;

    iget p1, p0, Lcom/sigmob/sdk/videoAd/l;->X:I

    int-to-long v6, p1

    const-string v1, "click"

    invoke-static/range {v0 .. v7}, Lcom/sigmob/sdk/base/common/z;->a(Lcom/sigmob/sdk/base/a;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;J)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->n()Lcom/sigmob/sdk/base/common/r;

    move-result-object p1

    sget-object p2, Lcom/sigmob/sdk/base/common/a;->v:Lcom/sigmob/sdk/base/common/a;

    goto :goto_0

    :cond_2
    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object p1

    sget-object v0, Lcom/sigmob/sdk/base/a;->a:Lcom/sigmob/sdk/base/a;

    iget-object v2, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/ClickCommon;->isDeeplink:Ljava/lang/String;

    iget-object v4, p1, Lcom/sigmob/sdk/base/models/ClickCommon;->clickUrl:Ljava/lang/String;

    iget-object v5, p1, Lcom/sigmob/sdk/base/models/ClickCommon;->clickCoordinate:Ljava/lang/String;

    iget p1, p0, Lcom/sigmob/sdk/videoAd/l;->X:I

    int-to-long v6, p1

    const-string v1, "click"

    invoke-static/range {v0 .. v7}, Lcom/sigmob/sdk/base/common/z;->a(Lcom/sigmob/sdk/base/a;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;J)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->n()Lcom/sigmob/sdk/base/common/r;

    move-result-object p1

    sget-object p2, Lcom/sigmob/sdk/base/common/a;->u:Lcom/sigmob/sdk/base/common/a;

    :goto_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->t()I

    move-result v0

    invoke-virtual {p1, p2, v0}, Lcom/sigmob/sdk/base/common/r;->a(Lcom/sigmob/sdk/base/common/a;I)V

    return-void
.end method

.method public b()V
    .locals 3

    invoke-super {p0}, Lcom/sigmob/sdk/videoAd/c;->b()V

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/ClientMetadata;->getInsetBottom()I

    move-result v1

    iput v1, p0, Lcom/sigmob/sdk/videoAd/l;->s:I

    iget-boolean v1, p0, Lcom/sigmob/sdk/videoAd/l;->Y:Z

    if-nez v1, :cond_3

    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l;->H:Lcom/sigmob/sdk/videoAd/a;

    if-eqz v1, :cond_2

    iget-boolean v1, p0, Lcom/sigmob/sdk/videoAd/l;->ag:Z

    const/4 v2, 0x4

    if-eqz v1, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->i()Landroid/content/Context;

    move-result-object v1

    invoke-direct {p0, v1, v2}, Lcom/sigmob/sdk/videoAd/l;->b(Landroid/content/Context;I)V

    :cond_0
    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->has_companion_endcard:Ljava/lang/Boolean;

    if-eqz v1, :cond_1

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->has_companion_endcard:Ljava/lang/Boolean;

    invoke-virtual {v1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    if-eqz v1, :cond_1

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->companion:Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;

    if-eqz v1, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->i()Landroid/content/Context;

    move-result-object v1

    invoke-direct {p0, v1, v2}, Lcom/sigmob/sdk/videoAd/l;->d(Landroid/content/Context;I)V

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->companion:Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/CompanionEndcard;->show_delay_secs:Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    iput v0, p0, Lcom/sigmob/sdk/videoAd/l;->F:I

    :cond_1
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->i()Landroid/content/Context;

    move-result-object v0

    const/4 v1, 0x0

    invoke-direct {p0, v0, v1}, Lcom/sigmob/sdk/videoAd/l;->g(Landroid/content/Context;I)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->i()Landroid/content/Context;

    move-result-object v0

    invoke-direct {p0, v0, v1}, Lcom/sigmob/sdk/videoAd/l;->f(Landroid/content/Context;I)V

    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    new-instance v1, Lcom/sigmob/sdk/videoAd/d;

    iget-object v2, p0, Lcom/sigmob/sdk/videoAd/l;->H:Lcom/sigmob/sdk/videoAd/a;

    invoke-direct {v1, p0, v2, v0}, Lcom/sigmob/sdk/videoAd/d;-><init>(Lcom/sigmob/sdk/videoAd/l;Lcom/sigmob/sdk/videoAd/a;Landroid/os/Handler;)V

    iput-object v1, p0, Lcom/sigmob/sdk/videoAd/l;->S:Lcom/sigmob/sdk/videoAd/d;

    const-string v0, "com.sigmob.action.interstitial.vopen"

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/videoAd/l;->a(Ljava/lang/String;)V

    goto :goto_0

    :cond_2
    new-instance v0, Ljava/lang/IllegalStateException;

    const-string v1, "BaseVideoConfig does not have a video disk path"

    invoke-direct {v0, v1}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw v0

    :cond_3
    invoke-direct {p0}, Lcom/sigmob/sdk/videoAd/l;->H()V

    :goto_0
    return-void
.end method

.method public b(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 0

    return-void
.end method

.method public b(Z)V
    .locals 4

    iget-boolean v0, p0, Lcom/sigmob/sdk/videoAd/l;->ad:Z

    if-nez v0, :cond_0

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/videoAd/l;->c(Z)V

    :cond_0
    iget-boolean v0, p0, Lcom/sigmob/sdk/videoAd/l;->ad:Z

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->H:Lcom/sigmob/sdk/videoAd/a;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoAd/a;->m()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->h()Lcom/sigmob/sdk/base/common/j;

    move-result-object p1

    invoke-interface {p1}, Lcom/sigmob/sdk/base/common/j;->a()V

    return-void

    :cond_1
    iget-boolean v0, p0, Lcom/sigmob/sdk/videoAd/l;->C:Z

    if-nez v0, :cond_3

    if-eqz p1, :cond_2

    invoke-direct {p0}, Lcom/sigmob/sdk/videoAd/l;->G()V

    goto :goto_0

    :cond_2
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->t()I

    move-result v0

    invoke-direct {p0, v0}, Lcom/sigmob/sdk/videoAd/l;->a(I)V

    :cond_3
    :goto_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->J:Lcom/sigmob/sdk/videoAd/b;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoAd/b;->stopPlayback()V

    invoke-direct {p0}, Lcom/sigmob/sdk/videoAd/l;->J()V

    if-eqz p1, :cond_4

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object p1

    check-cast p1, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    const-string v0, "_PLAYLASTFRAME_"

    const-string v1, "1"

    invoke-virtual {p1, v0, v1}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l;->H:Lcom/sigmob/sdk/videoAd/a;

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->b:Landroid/content/Context;

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->t()I

    move-result v1

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->s()I

    move-result v2

    iget-object v3, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1, v0, v1, v2, v3}, Lcom/sigmob/sdk/videoAd/a;->a(Landroid/content/Context;IILcom/sigmob/sdk/base/models/BaseAdUnit;)V

    iget-boolean p1, p0, Lcom/sigmob/sdk/videoAd/l;->W:Z

    if-nez p1, :cond_4

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->n()Lcom/sigmob/sdk/base/common/r;

    move-result-object p1

    sget-object v0, Lcom/sigmob/sdk/base/common/a;->r:Lcom/sigmob/sdk/base/common/a;

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->t()I

    move-result v1

    invoke-virtual {p1, v0, v1}, Lcom/sigmob/sdk/base/common/r;->a(Lcom/sigmob/sdk/base/common/a;I)V

    :cond_4
    invoke-direct {p0}, Lcom/sigmob/sdk/videoAd/l;->H()V

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/sigmob/sdk/videoAd/l;->V:Z

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l;->M:Lcom/sigmob/sdk/base/common/r;

    if-eqz p1, :cond_5

    sget-object v0, Lcom/sigmob/sdk/base/common/a;->h:Lcom/sigmob/sdk/base/common/a;

    const/4 v1, 0x0

    invoke-virtual {p1, v0, v1}, Lcom/sigmob/sdk/base/common/r;->a(Lcom/sigmob/sdk/base/common/a;I)V

    :cond_5
    return-void
.end method

.method public c()V
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/videoAd/l;->aa:Z

    if-eqz v0, :cond_0

    const-string v0, "com.sigmob.action.interstitial.dismiss"

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/videoAd/l;->a(Ljava/lang/String;)V

    return-void

    :cond_0
    iget-boolean v0, p0, Lcom/sigmob/sdk/videoAd/l;->Y:Z

    if-nez v0, :cond_1

    invoke-direct {p0}, Lcom/sigmob/sdk/videoAd/l;->C()V

    :cond_1
    return-void
.end method

.method c(Z)V
    .locals 4

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_type()I

    move-result v0

    const/4 v1, 0x4

    if-ne v0, v1, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/sigmob/sdk/videoAd/l;->ad:Z

    if-eqz p1, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->s()I

    move-result p1

    goto :goto_0

    :cond_1
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->t()I

    move-result p1

    :goto_0
    const-string v0, "com.sigmob.action.rewardedvideo.complete"

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/videoAd/l;->a(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->n()Lcom/sigmob/sdk/base/common/r;

    move-result-object v0

    sget-object v1, Lcom/sigmob/sdk/base/common/a;->b:Lcom/sigmob/sdk/base/common/a;

    invoke-virtual {v0, v1, p1}, Lcom/sigmob/sdk/base/common/r;->a(Lcom/sigmob/sdk/base/common/a;I)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->H:Lcom/sigmob/sdk/videoAd/a;

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->i()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->s()I

    move-result v2

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->a()Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v3

    invoke-virtual {v0, v1, p1, v2, v3}, Lcom/sigmob/sdk/videoAd/a;->c(Landroid/content/Context;IILcom/sigmob/sdk/base/models/BaseAdUnit;)V

    return-void
.end method

.method public d()V
    .locals 2

    iget-boolean v0, p0, Lcom/sigmob/sdk/videoAd/l;->Y:Z

    if-nez v0, :cond_0

    invoke-direct {p0}, Lcom/sigmob/sdk/videoAd/l;->B()V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->L:Landroid/view/View;

    if-eqz v0, :cond_1

    instance-of v1, v0, Lcom/sigmob/sdk/base/views/l;

    if-eqz v1, :cond_1

    check-cast v0, Lcom/sigmob/sdk/base/views/l;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/l;->resumeTimers()V

    :cond_1
    return-void
.end method

.method public e()V
    .locals 4

    :try_start_0
    const-string v0, "VideoViewController onDestroy() called"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-direct {p0}, Lcom/sigmob/sdk/videoAd/l;->J()V

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->e()Lcom/sigmob/sdk/base/common/f;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/sigmob/sdk/base/common/f;->b(Lcom/sigmob/sdk/base/common/f$a;)V

    iget-boolean v0, p0, Lcom/sigmob/sdk/videoAd/l;->aa:Z

    if-nez v0, :cond_0

    const-string v0, "com.sigmob.action.interstitial.dismiss"

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/videoAd/l;->a(Ljava/lang/String;)V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->H:Lcom/sigmob/sdk/videoAd/a;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoAd/a;->k()V

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->Q:Lcom/sigmob/sdk/base/views/a;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->Q:Lcom/sigmob/sdk/base/views/a;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/a;->a()V

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->ae:Lcom/czhj/volley/toolbox/ImageLoader$ImageContainer;

    const/4 v1, 0x0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->ae:Lcom/czhj/volley/toolbox/ImageLoader$ImageContainer;

    invoke-virtual {v0}, Lcom/czhj/volley/toolbox/ImageLoader$ImageContainer;->cancelRequest()V

    iput-object v1, p0, Lcom/sigmob/sdk/videoAd/l;->ae:Lcom/czhj/volley/toolbox/ImageLoader$ImageContainer;

    :cond_2
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->M:Lcom/sigmob/sdk/base/common/r;

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->M:Lcom/sigmob/sdk/base/common/r;

    sget-object v2, Lcom/sigmob/sdk/base/common/a;->x:Lcom/sigmob/sdk/base/common/a;

    const/4 v3, 0x0

    invoke-virtual {v0, v2, v3}, Lcom/sigmob/sdk/base/common/r;->a(Lcom/sigmob/sdk/base/common/a;I)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->M:Lcom/sigmob/sdk/base/common/r;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/common/r;->a()V

    iput-object v1, p0, Lcom/sigmob/sdk/videoAd/l;->M:Lcom/sigmob/sdk/base/common/r;

    :cond_3
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->R:Lcom/sigmob/sdk/videoAd/h;

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->R:Lcom/sigmob/sdk/videoAd/h;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/videoAd/h;->a(Lcom/sigmob/sdk/videoAd/h$a;)V

    :cond_4
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->J:Lcom/sigmob/sdk/videoAd/b;

    iget-object v0, v0, Lcom/sigmob/sdk/videoAd/b;->a:Landroid/media/MediaMetadataRetriever;

    if-eqz v0, :cond_5

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->J:Lcom/sigmob/sdk/videoAd/b;

    iget-object v0, v0, Lcom/sigmob/sdk/videoAd/b;->a:Landroid/media/MediaMetadataRetriever;

    invoke-virtual {v0}, Landroid/media/MediaMetadataRetriever;->release()V

    :cond_5
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->O:Lcom/sigmob/sdk/base/views/x;

    if-eqz v0, :cond_6

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->O:Lcom/sigmob/sdk/base/views/x;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/views/x;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    :cond_6
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->P:Lcom/sigmob/sdk/base/views/w;

    if-eqz v0, :cond_7

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->P:Lcom/sigmob/sdk/base/views/w;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/views/w;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    :cond_7
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->ab:Lcom/sigmob/sdk/base/views/x;

    if-eqz v0, :cond_8

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->ab:Lcom/sigmob/sdk/base/views/x;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/views/x;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    :cond_8
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->J:Lcom/sigmob/sdk/videoAd/b;

    if-eqz v0, :cond_9

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->J:Lcom/sigmob/sdk/videoAd/b;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoAd/b;->a()V

    :cond_9
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->L:Landroid/view/View;

    if-eqz v0, :cond_a

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->L:Landroid/view/View;

    instance-of v0, v0, Lcom/sigmob/sdk/base/views/l;

    if-eqz v0, :cond_a

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->L:Landroid/view/View;

    check-cast v0, Lcom/sigmob/sdk/base/views/l;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/views/l;->setWebViewClickListener(Lcom/sigmob/sdk/base/views/l$a;)V

    :cond_a
    iput-object v1, p0, Lcom/sigmob/sdk/videoAd/l;->L:Landroid/view/View;

    iput-object v1, p0, Lcom/sigmob/sdk/videoAd/l;->N:Lcom/sigmob/sdk/base/views/y;

    invoke-super {p0}, Lcom/sigmob/sdk/videoAd/c;->e()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public f()V
    .locals 0

    return-void
.end method

.method public g()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public m()V
    .locals 4

    new-instance v0, Lcom/sigmob/sdk/base/views/b;

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->i()Landroid/content/Context;

    move-result-object v1

    const/4 v2, 0x0

    invoke-direct {v0, v1, v2}, Lcom/sigmob/sdk/base/views/b;-><init>(Landroid/content/Context;I)V

    iput-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->o:Lcom/sigmob/sdk/base/views/b;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->generateViewId()I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/views/b;->setId(I)V

    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->i()Landroid/content/Context;

    move-result-object v1

    const/high16 v3, 0x41800000    # 16.0f

    invoke-static {v3, v1}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result v1

    const/4 v3, -0x2

    invoke-direct {v0, v3, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l;->b:Landroid/content/Context;

    const/high16 v3, 0x41200000    # 10.0f

    invoke-static {v3, v1}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result v1

    iget-object v3, p0, Lcom/sigmob/sdk/videoAd/l;->af:Lcom/sigmob/sdk/base/views/j;

    if-eqz v3, :cond_0

    const/16 v1, 0x8

    invoke-virtual {v3}, Lcom/sigmob/sdk/base/views/j;->getId()I

    move-result v2

    invoke-virtual {v0, v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    goto :goto_0

    :cond_0
    const/16 v3, 0xc

    invoke-virtual {v0, v3}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    invoke-virtual {v0, v2, v2, v2, v1}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    :goto_0
    :try_start_0
    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l;->o:Lcom/sigmob/sdk/base/views/b;

    iget-object v2, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_source_logo()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/sigmob/sdk/base/views/b;->a(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getInvisibleAdLabel()Z

    move-result v1

    if-nez v1, :cond_1

    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l;->o:Lcom/sigmob/sdk/base/views/b;

    invoke-static {}, Lcom/sigmob/sdk/base/d;->g()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/sigmob/sdk/base/views/b;->b(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_1
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->j()Landroid/view/ViewGroup;

    move-result-object v1

    iget-object v2, p0, Lcom/sigmob/sdk/videoAd/l;->o:Lcom/sigmob/sdk/base/views/b;

    invoke-virtual {v1, v2, v0}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method public n()Lcom/sigmob/sdk/base/common/r;
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->M:Lcom/sigmob/sdk/base/common/r;

    if-nez v0, :cond_0

    new-instance v0, Lcom/sigmob/sdk/base/common/r;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/common/r;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->M:Lcom/sigmob/sdk/base/common/r;

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->a()Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/common/r;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->M:Lcom/sigmob/sdk/base/common/r;

    return-object v0
.end method

.method public o()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->E:Ljava/lang/String;

    return-object v0
.end method

.method public p()Z
    .locals 7

    const/4 v0, 0x1

    :try_start_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->t()I

    move-result v1

    int-to-long v1, v1

    iget-object v3, p0, Lcom/sigmob/sdk/videoAd/l;->H:Lcom/sigmob/sdk/videoAd/a;

    invoke-virtual {v3}, Lcom/sigmob/sdk/videoAd/a;->y()I

    move-result v3

    const/4 v4, -0x1

    const/4 v5, 0x0

    const/high16 v6, 0x447a0000    # 1000.0f

    if-le v3, v4, :cond_1

    long-to-float v1, v1

    div-float/2addr v1, v6

    const v2, 0x3e99999a    # 0.3f

    add-float/2addr v1, v2

    iget-object v2, p0, Lcom/sigmob/sdk/videoAd/l;->H:Lcom/sigmob/sdk/videoAd/a;

    invoke-virtual {v2}, Lcom/sigmob/sdk/videoAd/a;->y()I

    move-result v2

    int-to-float v2, v2

    cmpl-float v1, v1, v2

    if-ltz v1, :cond_0

    goto :goto_0

    :cond_0
    move v0, v5

    goto :goto_0

    :cond_1
    iget v3, p0, Lcom/sigmob/sdk/videoAd/l;->T:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    int-to-float v3, v3

    div-float/2addr v3, v6

    long-to-float v1, v1

    div-float/2addr v1, v6

    cmpg-float v1, v3, v1

    if-gez v1, :cond_0

    :goto_0
    return v0

    :catchall_0
    move-exception v1

    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    return v0
.end method

.method public q()Z
    .locals 6

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->af:Lcom/sigmob/sdk/base/views/j;

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/j;->a()Z

    move-result v0

    if-eqz v0, :cond_0

    return v1

    :cond_0
    :try_start_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->t()I

    move-result v0

    int-to-long v2, v0

    const-wide/16 v4, 0x3e8

    div-long/2addr v2, v4

    iget v0, p0, Lcom/sigmob/sdk/videoAd/l;->F:I

    int-to-long v4, v0

    cmp-long v0, v2, v4

    if-ltz v0, :cond_1

    move v0, v1

    goto :goto_0

    :cond_1
    const/4 v0, 0x0

    :goto_0
    if-eqz v0, :cond_2

    const-string v2, "showAble CompanionAds"

    invoke-static {v2}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_2
    return v0

    :catchall_0
    move-exception v0

    const-string v2, "shouldBeShowCompanionAds"

    invoke-static {v2, v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    return v1
.end method

.method public r()V
    .locals 2

    iget-boolean v0, p0, Lcom/sigmob/sdk/videoAd/l;->G:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->af:Lcom/sigmob/sdk/base/views/j;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/j;->bringToFront()V

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->af:Lcom/sigmob/sdk/base/views/j;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/views/j;->setVisibility(I)V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/sigmob/sdk/videoAd/l;->G:Z

    :cond_1
    return-void
.end method

.method s()I
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->J:Lcom/sigmob/sdk/videoAd/b;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return v0

    :cond_0
    iget v1, p0, Lcom/sigmob/sdk/videoAd/l;->X:I

    if-lez v1, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->H:Lcom/sigmob/sdk/videoAd/a;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/videoAd/a;->b(I)I

    move-result v0

    return v0

    :cond_1
    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l;->H:Lcom/sigmob/sdk/videoAd/a;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoAd/b;->getDuration()I

    move-result v0

    invoke-virtual {v1, v0}, Lcom/sigmob/sdk/videoAd/a;->b(I)I

    move-result v0

    return v0
.end method

.method t()I
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->J:Lcom/sigmob/sdk/videoAd/b;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return v0

    :cond_0
    invoke-virtual {v0}, Lcom/sigmob/sdk/videoAd/b;->getCurrentPosition()I

    move-result v0

    return v0
.end method

.method u()V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->L:Landroid/view/View;

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->isEndCardIndexExist()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/a;->g(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Lcom/sigmob/sdk/videoAd/h;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->R:Lcom/sigmob/sdk/videoAd/h;

    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l;->H:Lcom/sigmob/sdk/videoAd/a;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/videoAd/h;->a(Lcom/sigmob/sdk/videoAd/a;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->k()Landroid/app/Activity;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l;->R:Lcom/sigmob/sdk/videoAd/h;

    const/4 v2, 0x4

    invoke-direct {p0, v0, v1, v2}, Lcom/sigmob/sdk/videoAd/l;->a(Landroid/content/Context;Lcom/sigmob/sdk/videoAd/h;I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->L:Landroid/view/View;

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->R:Lcom/sigmob/sdk/videoAd/h;

    iget v1, p0, Lcom/sigmob/sdk/videoAd/l;->X:I

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/videoAd/h;->a(I)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->i()Landroid/content/Context;

    move-result-object v0

    invoke-direct {p0, v0, v2}, Lcom/sigmob/sdk/videoAd/l;->e(Landroid/content/Context;I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    const/4 v1, 0x0

    iput-object v1, p0, Lcom/sigmob/sdk/videoAd/l;->R:Lcom/sigmob/sdk/videoAd/h;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v2, "error"

    invoke-virtual {v1, v2, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "com.sigmob.action.rewardedvideo.playFail"

    invoke-virtual {p0, v0, v1}, Lcom/sigmob/sdk/videoAd/l;->a(Ljava/lang/String;Ljava/util/Map;)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->d:Lcom/sigmob/sdk/base/common/j;

    invoke-interface {v0}, Lcom/sigmob/sdk/base/common/j;->a()V

    :cond_1
    :goto_0
    return-void
.end method

.method v()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l;->K:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->disable_auto_deeplink:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->u()V

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->t()I

    move-result v0

    const/4 v1, 0x0

    invoke-direct {p0, v0, v1}, Lcom/sigmob/sdk/videoAd/l;->a(IZ)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->s()I

    move-result v0

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->t()I

    move-result v1

    sub-int/2addr v0, v1

    int-to-float v0, v0

    const/high16 v1, 0x447a0000    # 1000.0f

    div-float/2addr v0, v1

    const/high16 v1, 0x3f000000    # 0.5f

    add-float/2addr v0, v1

    float-to-int v0, v0

    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l;->P:Lcom/sigmob/sdk/base/views/w;

    invoke-virtual {v1, v0}, Lcom/sigmob/sdk/base/views/w;->a(I)V

    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l;->D:Lcom/sigmob/sdk/base/views/d;

    if-eqz v1, :cond_1

    invoke-virtual {v1, v0}, Lcom/sigmob/sdk/base/views/d;->setduration(I)V

    :cond_1
    return-void
.end method

.method w()Z
    .locals 2

    iget-boolean v0, p0, Lcom/sigmob/sdk/videoAd/l;->ad:Z

    if-nez v0, :cond_0

    invoke-direct {p0}, Lcom/sigmob/sdk/videoAd/l;->D()F

    move-result v0

    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l;->H:Lcom/sigmob/sdk/videoAd/a;

    invoke-virtual {v1}, Lcom/sigmob/sdk/videoAd/a;->q()F

    move-result v1

    cmpl-float v0, v0, v1

    if-ltz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method x()V
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->s()I

    move-result v0

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->t()I

    move-result v1

    sub-int/2addr v0, v1

    int-to-float v0, v0

    const/high16 v1, 0x447a0000    # 1000.0f

    div-float/2addr v0, v1

    const/high16 v1, 0x3f000000    # 0.5f

    add-float/2addr v0, v1

    float-to-int v0, v0

    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l;->P:Lcom/sigmob/sdk/base/views/w;

    invoke-virtual {v1, v0}, Lcom/sigmob/sdk/base/views/w;->a(I)V

    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l;->D:Lcom/sigmob/sdk/base/views/d;

    if-eqz v1, :cond_0

    invoke-virtual {v1, v0}, Lcom/sigmob/sdk/base/views/d;->setduration(I)V

    :cond_0
    iget-boolean v0, p0, Lcom/sigmob/sdk/videoAd/l;->ag:Z

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/l;->t()I

    move-result v0

    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l;->N:Lcom/sigmob/sdk/base/views/y;

    invoke-virtual {v1, v0}, Lcom/sigmob/sdk/base/views/y;->a(I)V

    :cond_1
    return-void
.end method
