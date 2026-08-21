.class public Lcom/tkay/expressad/video/module/TkayH5EndCardView;
.super Lcom/tkay/expressad/video/module/TkayBaseView;

# interfaces
.implements Lcom/tkay/expressad/atsignalcommon/mraid/IMraidJSBridge;
.implements Lcom/tkay/expressad/video/signal/f;
.implements Lcom/tkay/expressad/video/signal/h;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/video/module/TkayH5EndCardView$c;,
        Lcom/tkay/expressad/video/module/TkayH5EndCardView$b;,
        Lcom/tkay/expressad/video/module/TkayH5EndCardView$f;,
        Lcom/tkay/expressad/video/module/TkayH5EndCardView$e;,
        Lcom/tkay/expressad/video/module/TkayH5EndCardView$d;,
        Lcom/tkay/expressad/video/module/TkayH5EndCardView$a;
    }
.end annotation


# static fields
.field private static final A:Ljava/lang/String; = "tkay_reward_endcard_h5"

.field private static final B:Ljava/lang/String; = "portrait"

.field private static final C:Ljava/lang/String; = "landscape"

.field private static final D:I = 0x1

.field private static final E:I = 0x2

.field private static final F:I = 0x14

.field private static final G:I = 0xf

.field private static final Q:I = 0x64

.field protected static final n:Ljava/lang/String; = "orientation"

.field protected static final o:Ljava/lang/String; = "webviewshow"


# instance fields
.field private H:Lcom/tkay/expressad/widget/FeedBackButton;

.field private I:Z

.field private J:Z

.field private K:I

.field private L:I

.field private M:Z

.field private N:Z

.field private O:I

.field private P:J

.field private R:Z

.field private S:Z

.field private T:Z

.field private U:Z

.field private V:Z

.field private W:Z

.field private aa:Z

.field private ab:Z

.field private ac:Ljava/lang/String;

.field private ad:Lcom/tkay/expressad/video/signal/factory/b;

.field private ae:Z

.field private af:Z

.field protected p:Landroid/view/View;

.field protected q:Landroid/widget/RelativeLayout;

.field protected r:Landroid/widget/ImageView;

.field protected s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

.field protected t:Landroid/os/Handler;

.field protected u:Ljava/lang/String;

.field protected v:Z

.field protected w:Z

.field protected x:Ljava/lang/String;

.field y:Landroid/os/Handler;

.field z:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    .line 178
    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/module/TkayBaseView;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x0

    .line 103
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->I:Z

    .line 105
    new-instance v0, Landroid/os/Handler;

    invoke-direct {v0}, Landroid/os/Handler;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->t:Landroid/os/Handler;

    .line 107
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->v:Z

    .line 108
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->w:Z

    .line 113
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->J:Z

    const/4 v0, 0x1

    .line 118
    iput v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->K:I

    .line 120
    iput v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->L:I

    .line 125
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->M:Z

    .line 127
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->N:Z

    .line 131
    iput v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->O:I

    const-wide/16 v0, 0x0

    .line 137
    iput-wide v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->P:J

    .line 141
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->R:Z

    .line 146
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->S:Z

    .line 150
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->T:Z

    .line 154
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->U:Z

    .line 159
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->V:Z

    .line 164
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->W:Z

    .line 169
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->aa:Z

    .line 171
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->ab:Z

    const-string v0, ""

    .line 173
    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->ac:Ljava/lang/String;

    .line 185
    new-instance v0, Lcom/tkay/expressad/video/module/TkayH5EndCardView$1;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, p0, v1}, Lcom/tkay/expressad/video/module/TkayH5EndCardView$1;-><init>(Lcom/tkay/expressad/video/module/TkayH5EndCardView;Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->y:Landroid/os/Handler;

    .line 562
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->ae:Z

    .line 609
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->af:Z

    .line 1142
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->z:Z

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 2

    .line 182
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/video/module/TkayBaseView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p1, 0x0

    .line 103
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->I:Z

    .line 105
    new-instance p2, Landroid/os/Handler;

    invoke-direct {p2}, Landroid/os/Handler;-><init>()V

    iput-object p2, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->t:Landroid/os/Handler;

    .line 107
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->v:Z

    .line 108
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->w:Z

    .line 113
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->J:Z

    const/4 p2, 0x1

    .line 118
    iput p2, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->K:I

    .line 120
    iput p2, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->L:I

    .line 125
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->M:Z

    .line 127
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->N:Z

    .line 131
    iput p2, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->O:I

    const-wide/16 v0, 0x0

    .line 137
    iput-wide v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->P:J

    .line 141
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->R:Z

    .line 146
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->S:Z

    .line 150
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->T:Z

    .line 154
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->U:Z

    .line 159
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->V:Z

    .line 164
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->W:Z

    .line 169
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->aa:Z

    .line 171
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->ab:Z

    const-string p2, ""

    .line 173
    iput-object p2, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->ac:Ljava/lang/String;

    .line 185
    new-instance p2, Lcom/tkay/expressad/video/module/TkayH5EndCardView$1;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-direct {p2, p0, v0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView$1;-><init>(Lcom/tkay/expressad/video/module/TkayH5EndCardView;Landroid/os/Looper;)V

    iput-object p2, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->y:Landroid/os/Handler;

    .line 562
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->ae:Z

    .line 609
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->af:Z

    .line 1142
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->z:Z

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/video/module/TkayH5EndCardView;I)I
    .locals 0

    .line 63
    iput p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->O:I

    return p1
.end method

.method private a(JZ)V
    .locals 4

    .line 1066
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->M:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    .line 1070
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->M:Z

    const-string v0, "2"

    .line 1072
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/expressad/foundation/h/w;->b(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v1

    const-string v2, ".zip"

    invoke-virtual {v1, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    const-string v0, "1"

    :cond_1
    const/16 v1, 0xa

    const-string v2, "ready yes"

    if-eqz p3, :cond_2

    const/16 v1, 0xc

    const-string v2, "ready timeout"

    goto :goto_0

    .line 1083
    :cond_2
    iget p3, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->O:I

    const/4 v3, 0x2

    if-ne p3, v3, :cond_3

    const/16 v1, 0xb

    const-string v2, "ready no"

    .line 1123
    :cond_3
    :goto_0
    new-instance p3, Ljava/lang/StringBuilder;

    const-string v3, "insertEndCardReadyState result:"

    invoke-direct {p3, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p3, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " endCardLoadTime:"

    invoke-virtual {p3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3, p1, p2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string p1, " endcardurl:"

    invoke-virtual {p3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "  id:"

    invoke-virtual {p3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "  unitid:"

    invoke-virtual {p3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->x:Ljava/lang/String;

    invoke-virtual {p3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "  reason:"

    invoke-virtual {p3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "  type:"

    invoke-virtual {p3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 1125
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/video/module/TkayH5EndCardView;J)V
    .locals 5

    .line 5066
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->M:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    .line 5070
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->M:Z

    const-string v0, "2"

    .line 5072
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/expressad/foundation/h/w;->b(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v1

    const-string v2, ".zip"

    invoke-virtual {v1, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    const-string v0, "1"

    :cond_1
    const/16 v1, 0xa

    const-string v2, "ready yes"

    .line 5083
    iget v3, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->O:I

    const/4 v4, 0x2

    if-ne v3, v4, :cond_2

    const/16 v1, 0xb

    const-string v2, "ready no"

    .line 5123
    :cond_2
    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "insertEndCardReadyState result:"

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " endCardLoadTime:"

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1, p2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string p1, " endcardurl:"

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "  id:"

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "  unitid:"

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->x:Ljava/lang/String;

    invoke-virtual {v3, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "  reason:"

    invoke-virtual {v3, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "  type:"

    invoke-virtual {v3, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p0

    .line 5125
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method private a(Ljava/lang/String;)V
    .locals 3

    .line 1284
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->ad()Ljava/lang/String;

    move-result-object v0

    .line 1286
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 1287
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1, p1}, Lcom/tkay/expressad/foundation/d/c;->p(Ljava/lang/String;)V

    .line 1290
    :cond_0
    new-instance p1, Lcom/tkay/expressad/a/a;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->x:Ljava/lang/String;

    invoke-direct {p1, v1, v2}, Lcom/tkay/expressad/a/a;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    .line 1292
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/foundation/d/c;->p(Ljava/lang/String;)V

    .line 1298
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v0, 0x7e

    const-string v1, ""

    invoke-interface {p1, v0, v1}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 1301
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method private a(Landroid/view/View;)Z
    .locals 2

    const-string v0, "tkay_windwv_close"

    .line 930
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->findID(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->r:Landroid/widget/ImageView;

    const-string v0, "tkay_windwv_content_rl"

    .line 931
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->findID(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/RelativeLayout;

    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->q:Landroid/widget/RelativeLayout;

    .line 932
    new-instance p1, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-direct {p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 933
    new-instance p1, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v0, -0x1

    invoke-direct {p1, v0, v0}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 935
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 936
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->q:Landroid/widget/RelativeLayout;

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {p1, v0}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    const/4 p1, 0x2

    new-array p1, p1, [Landroid/view/View;

    .line 937
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->r:Landroid/widget/ImageView;

    const/4 v1, 0x0

    aput-object v0, p1, v1

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    const/4 v1, 0x1

    aput-object v0, p1, v1

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->isNotNULL([Landroid/view/View;)Z

    move-result p1

    return p1
.end method

.method static synthetic a(Lcom/tkay/expressad/video/module/TkayH5EndCardView;)Z
    .locals 0

    .line 63
    iget-boolean p0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->R:Z

    return p0
.end method

.method static synthetic b(Lcom/tkay/expressad/video/module/TkayH5EndCardView;)J
    .locals 2

    .line 63
    iget-wide v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->P:J

    return-wide v0
.end method

.method static synthetic c(Lcom/tkay/expressad/video/module/TkayH5EndCardView;)Z
    .locals 0

    .line 63
    iget-boolean p0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->N:Z

    return p0
.end method

.method static synthetic d(Lcom/tkay/expressad/video/module/TkayH5EndCardView;)Z
    .locals 1

    const/4 v0, 0x1

    .line 63
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->N:Z

    return v0
.end method

.method static synthetic e(Lcom/tkay/expressad/video/module/TkayH5EndCardView;)Z
    .locals 1

    const/4 v0, 0x1

    .line 63
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->V:Z

    return v0
.end method

.method private f()V
    .locals 7

    const-string v0, "wfr=1"

    const-string v1, "="

    .line 484
    :try_start_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    iput-wide v2, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->P:J

    .line 485
    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v2

    .line 486
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object v3

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v4

    iget-object v5, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->x:Ljava/lang/String;

    invoke-virtual {v3, v4, v5}, Lcom/tkay/expressad/videocommon/e/c;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/videocommon/e/d;

    move-result-object v3

    .line 487
    iget-boolean v4, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->J:Z

    if-eqz v4, :cond_5

    invoke-static {v2}, Lcom/tkay/expressad/foundation/h/w;->b(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_5

    invoke-virtual {v2, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_0

    if-eqz v3, :cond_5

    invoke-virtual {v3}, Lcom/tkay/expressad/videocommon/e/d;->o()I

    move-result v4

    if-lez v4, :cond_5

    .line 491
    :cond_0
    invoke-virtual {v2, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    const/16 v4, 0x14

    if-eqz v0, :cond_2

    const-string v0, "&"

    .line 492
    invoke-virtual {v2, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 493
    array-length v2, v0

    if-lez v2, :cond_3

    .line 494
    array-length v2, v0

    const/4 v3, 0x0

    :goto_0
    if-ge v3, v2, :cond_3

    aget-object v5, v0, v3

    .line 495
    invoke-static {v5}, Lcom/tkay/expressad/foundation/h/w;->b(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_1

    const-string v6, "to"

    invoke-virtual {v5, v6}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v6

    if-eqz v6, :cond_1

    invoke-virtual {v5, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v6

    if-eqz v6, :cond_1

    invoke-virtual {v5, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v6

    array-length v6, v6

    if-lez v6, :cond_1

    .line 496
    invoke-virtual {v5, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x1

    .line 497
    aget-object v0, v0, v1

    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/t;->a(Ljava/lang/Object;)I

    move-result v0

    goto :goto_1

    :cond_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_2
    if-eqz v3, :cond_3

    .line 503
    invoke-virtual {v3}, Lcom/tkay/expressad/videocommon/e/d;->o()I

    move-result v0

    if-lez v0, :cond_3

    .line 504
    invoke-virtual {v3}, Lcom/tkay/expressad/videocommon/e/d;->o()I

    move-result v0

    goto :goto_1

    :cond_3
    move v0, v4

    :goto_1
    if-ltz v0, :cond_4

    .line 507
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->excuteEndCardShowTask(I)V

    return-void

    .line 510
    :cond_4
    invoke-virtual {p0, v4}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->excuteEndCardShowTask(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_5
    return-void

    :catchall_0
    move-exception v0

    .line 515
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method static synthetic f(Lcom/tkay/expressad/video/module/TkayH5EndCardView;)Z
    .locals 1

    const/4 v0, 0x1

    .line 63
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->W:Z

    return v0
.end method

.method private g()V
    .locals 4

    .line 565
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->ae:Z

    if-nez v0, :cond_2

    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->T:Z

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x1

    .line 568
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->ae:Z

    .line 569
    iget v1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->K:I

    if-nez v1, :cond_1

    .line 570
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->V:Z

    return-void

    :cond_1
    const/4 v0, 0x0

    .line 573
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->V:Z

    if-ltz v1, :cond_2

    .line 575
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->t:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/module/TkayH5EndCardView$d;

    invoke-direct {v1, p0, p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView$d;-><init>(Lcom/tkay/expressad/video/module/TkayH5EndCardView;Lcom/tkay/expressad/video/module/TkayH5EndCardView;)V

    iget v2, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->K:I

    mul-int/lit16 v2, v2, 0x3e8

    int-to-long v2, v2

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    :cond_2
    :goto_0
    return-void
.end method

.method static synthetic g(Lcom/tkay/expressad/video/module/TkayH5EndCardView;)V
    .locals 18

    move-object/from16 v1, p0

    const-string v2, "true"

    .line 5165
    iget-object v0, v1, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_4

    iget-object v0, v1, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->H()Z

    move-result v0

    if-eqz v0, :cond_4

    .line 5166
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v0

    iget v0, v0, Landroid/content/res/Configuration;->orientation:I

    const-string v3, "undefined"

    if-eqz v0, :cond_2

    const/4 v4, 0x1

    if-eq v0, v4, :cond_1

    const/4 v4, 0x2

    if-eq v0, v4, :cond_0

    goto :goto_0

    :cond_0
    const-string v3, "landscape"

    goto :goto_0

    :cond_1
    const-string v3, "portrait"

    .line 5179
    :cond_2
    :goto_0
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v0, "orientation"

    .line 5181
    invoke-virtual {v4, v0, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "locked"

    .line 5182
    invoke-virtual {v4, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 5184
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 5187
    :goto_1
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    const-string v3, "placementType"

    const-string v5, "Interstitial"

    .line 5188
    invoke-virtual {v0, v3, v5}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v3, "state"

    const-string v5, "default"

    .line 5189
    invoke-virtual {v0, v3, v5}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v3, "viewable"

    .line 5190
    invoke-virtual {v0, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v2, "currentAppOrientation"

    .line 5191
    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5193
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->getContext()Landroid/content/Context;

    move-result-object v2

    instance-of v2, v2, Landroid/app/Activity;

    if-eqz v2, :cond_3

    .line 5194
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/expressad/foundation/h/k;->e(Landroid/content/Context;)I

    move-result v2

    int-to-float v2, v2

    .line 5195
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3}, Lcom/tkay/expressad/foundation/h/k;->f(Landroid/content/Context;)I

    move-result v3

    int-to-float v3, v3

    .line 5197
    new-instance v4, Landroid/util/DisplayMetrics;

    invoke-direct {v4}, Landroid/util/DisplayMetrics;-><init>()V

    .line 5198
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->getContext()Landroid/content/Context;

    move-result-object v5

    check-cast v5, Landroid/app/Activity;

    invoke-virtual {v5}, Landroid/app/Activity;->getWindowManager()Landroid/view/WindowManager;

    move-result-object v5

    invoke-interface {v5}, Landroid/view/WindowManager;->getDefaultDisplay()Landroid/view/Display;

    move-result-object v5

    invoke-virtual {v5, v4}, Landroid/view/Display;->getMetrics(Landroid/util/DisplayMetrics;)V

    .line 5199
    iget v5, v4, Landroid/util/DisplayMetrics;->widthPixels:I

    int-to-float v5, v5

    .line 5200
    iget v4, v4, Landroid/util/DisplayMetrics;->heightPixels:I

    int-to-float v4, v4

    .line 5202
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v6

    iget-object v7, v1, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v6, v7, v2, v3}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireSetScreenSize(Landroid/webkit/WebView;FF)V

    .line 5203
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v2

    iget-object v3, v1, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v2, v3, v5, v4}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireSetMaxSize(Landroid/webkit/WebView;FF)V

    .line 5206
    :cond_3
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v6

    iget-object v7, v1, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 5207
    invoke-virtual {v7}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getLeft()I

    move-result v2

    int-to-float v8, v2

    iget-object v2, v1, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getTop()I

    move-result v2

    int-to-float v9, v2

    iget-object v2, v1, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getWidth()I

    move-result v2

    int-to-float v10, v2

    iget-object v2, v1, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getHeight()I

    move-result v2

    int-to-float v11, v2

    .line 5206
    invoke-virtual/range {v6 .. v11}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireSetDefaultPosition(Landroid/webkit/WebView;FFFF)V

    .line 5208
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v12

    iget-object v13, v1, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 5209
    invoke-virtual {v13}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getLeft()I

    move-result v2

    int-to-float v14, v2

    iget-object v2, v1, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getTop()I

    move-result v2

    int-to-float v15, v2

    iget-object v2, v1, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getWidth()I

    move-result v2

    int-to-float v2, v2

    iget-object v3, v1, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v3}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getHeight()I

    move-result v3

    int-to-float v3, v3

    move/from16 v16, v2

    move/from16 v17, v3

    .line 5208
    invoke-virtual/range {v12 .. v17}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireSetCurrentPosition(Landroid/webkit/WebView;FFFF)V

    .line 5210
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v2

    iget-object v3, v1, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v2, v3, v0}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireChangeEventForPropertys(Landroid/webkit/WebView;Ljava/util/Map;)V

    .line 5211
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v0

    iget-object v2, v1, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    sget-wide v3, Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver;->a:D

    invoke-virtual {v0, v2, v3, v4}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireAudioVolumeChange(Landroid/webkit/WebView;D)V

    .line 5212
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v0

    iget-object v1, v1, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireReadyEvent(Landroid/webkit/WebView;)V

    :cond_4
    return-void
.end method

.method static synthetic h(Lcom/tkay/expressad/video/module/TkayH5EndCardView;)Ljava/lang/String;
    .locals 0

    .line 63
    iget-object p0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->ac:Ljava/lang/String;

    return-object p0
.end method

.method private h()V
    .locals 4

    .line 612
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->af:Z

    if-nez v0, :cond_2

    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->T:Z

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x1

    .line 615
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->af:Z

    .line 616
    iget v1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->L:I

    if-nez v1, :cond_1

    .line 617
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->W:Z

    return-void

    :cond_1
    const/4 v0, 0x0

    .line 620
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->W:Z

    if-ltz v1, :cond_2

    .line 622
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->t:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/module/TkayH5EndCardView$e;

    invoke-direct {v1, p0, p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView$e;-><init>(Lcom/tkay/expressad/video/module/TkayH5EndCardView;Lcom/tkay/expressad/video/module/TkayH5EndCardView;)V

    iget v2, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->L:I

    mul-int/lit16 v2, v2, 0x3e8

    int-to-long v2, v2

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    :cond_2
    :goto_0
    return-void
.end method

.method private i()V
    .locals 5

    const-string v0, "_2"

    .line 699
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/f/b;->b()Z

    move-result v1

    if-eqz v1, :cond_2

    .line 700
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->x:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "_1"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/foundation/f/b;->c(Ljava/lang/String;)V

    .line 701
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->x:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/foundation/f/b;->b(Ljava/lang/String;)Lcom/tkay/expressad/widget/FeedBackButton;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->H:Lcom/tkay/expressad/widget/FeedBackButton;

    if-eqz v1, :cond_1

    .line 703
    invoke-virtual {v1}, Lcom/tkay/expressad/widget/FeedBackButton;->getParent()Landroid/view/ViewParent;

    move-result-object v1

    check-cast v1, Landroid/view/ViewGroup;

    if-eqz v1, :cond_0

    .line 705
    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->H:Lcom/tkay/expressad/widget/FeedBackButton;

    invoke-virtual {v1, v2}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 707
    :cond_0
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->q:Landroid/widget/RelativeLayout;

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->H:Lcom/tkay/expressad/widget/FeedBackButton;

    invoke-virtual {v1, v2}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    .line 708
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->q:Landroid/widget/RelativeLayout;

    new-instance v2, Lcom/tkay/expressad/video/module/TkayH5EndCardView$5;

    invoke-direct {v2, p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView$5;-><init>(Lcom/tkay/expressad/video/module/TkayH5EndCardView;)V

    const-wide/16 v3, 0xc8

    invoke-virtual {v1, v2, v3, v4}, Landroid/widget/RelativeLayout;->postDelayed(Ljava/lang/Runnable;J)Z

    .line 715
    :cond_1
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->x:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/foundation/d/c;->l(Ljava/lang/String;)V

    .line 716
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->x:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1, v2, v3}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)V

    .line 717
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->x:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-instance v2, Lcom/tkay/expressad/video/module/TkayH5EndCardView$6;

    invoke-direct {v2, p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView$6;-><init>(Lcom/tkay/expressad/video/module/TkayH5EndCardView;)V

    invoke-virtual {v1, v0, v2}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/f/a;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_2
    return-void

    :catch_0
    move-exception v0

    .line 772
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method static synthetic i(Lcom/tkay/expressad/video/module/TkayH5EndCardView;)V
    .locals 5

    const-string v0, "_2"

    .line 5699
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/f/b;->b()Z

    move-result v1

    if-eqz v1, :cond_2

    .line 5700
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->x:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "_1"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/foundation/f/b;->c(Ljava/lang/String;)V

    .line 5701
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->x:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/foundation/f/b;->b(Ljava/lang/String;)Lcom/tkay/expressad/widget/FeedBackButton;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->H:Lcom/tkay/expressad/widget/FeedBackButton;

    if-eqz v1, :cond_1

    .line 5703
    invoke-virtual {v1}, Lcom/tkay/expressad/widget/FeedBackButton;->getParent()Landroid/view/ViewParent;

    move-result-object v1

    check-cast v1, Landroid/view/ViewGroup;

    if-eqz v1, :cond_0

    .line 5705
    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->H:Lcom/tkay/expressad/widget/FeedBackButton;

    invoke-virtual {v1, v2}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 5707
    :cond_0
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->q:Landroid/widget/RelativeLayout;

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->H:Lcom/tkay/expressad/widget/FeedBackButton;

    invoke-virtual {v1, v2}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    .line 5708
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->q:Landroid/widget/RelativeLayout;

    new-instance v2, Lcom/tkay/expressad/video/module/TkayH5EndCardView$5;

    invoke-direct {v2, p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView$5;-><init>(Lcom/tkay/expressad/video/module/TkayH5EndCardView;)V

    const-wide/16 v3, 0xc8

    invoke-virtual {v1, v2, v3, v4}, Landroid/widget/RelativeLayout;->postDelayed(Ljava/lang/Runnable;J)Z

    .line 5715
    :cond_1
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->x:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/foundation/d/c;->l(Ljava/lang/String;)V

    .line 5716
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->x:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1, v2, v3}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)V

    .line 5717
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->x:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-instance v2, Lcom/tkay/expressad/video/module/TkayH5EndCardView$6;

    invoke-direct {v2, p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView$6;-><init>(Lcom/tkay/expressad/video/module/TkayH5EndCardView;)V

    invoke-virtual {v1, v0, v2}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/f/a;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_2
    return-void

    :catch_0
    move-exception p0

    .line 5772
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method static synthetic j(Lcom/tkay/expressad/video/module/TkayH5EndCardView;)Lcom/tkay/expressad/widget/FeedBackButton;
    .locals 0

    .line 63
    iget-object p0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->H:Lcom/tkay/expressad/widget/FeedBackButton;

    return-object p0
.end method

.method private j()V
    .locals 18

    move-object/from16 v1, p0

    const-string v2, "true"

    .line 1165
    iget-object v0, v1, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_4

    iget-object v0, v1, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->H()Z

    move-result v0

    if-eqz v0, :cond_4

    .line 1166
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v0

    iget v0, v0, Landroid/content/res/Configuration;->orientation:I

    const-string v3, "undefined"

    if-eqz v0, :cond_2

    const/4 v4, 0x1

    if-eq v0, v4, :cond_1

    const/4 v4, 0x2

    if-eq v0, v4, :cond_0

    goto :goto_0

    :cond_0
    const-string v3, "landscape"

    goto :goto_0

    :cond_1
    const-string v3, "portrait"

    .line 1179
    :cond_2
    :goto_0
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v0, "orientation"

    .line 1181
    invoke-virtual {v4, v0, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "locked"

    .line 1182
    invoke-virtual {v4, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 1184
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 1187
    :goto_1
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    const-string v3, "placementType"

    const-string v5, "Interstitial"

    .line 1188
    invoke-virtual {v0, v3, v5}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v3, "state"

    const-string v5, "default"

    .line 1189
    invoke-virtual {v0, v3, v5}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v3, "viewable"

    .line 1190
    invoke-virtual {v0, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v2, "currentAppOrientation"

    .line 1191
    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1193
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->getContext()Landroid/content/Context;

    move-result-object v2

    instance-of v2, v2, Landroid/app/Activity;

    if-eqz v2, :cond_3

    .line 1194
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/expressad/foundation/h/k;->e(Landroid/content/Context;)I

    move-result v2

    int-to-float v2, v2

    .line 1195
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3}, Lcom/tkay/expressad/foundation/h/k;->f(Landroid/content/Context;)I

    move-result v3

    int-to-float v3, v3

    .line 1197
    new-instance v4, Landroid/util/DisplayMetrics;

    invoke-direct {v4}, Landroid/util/DisplayMetrics;-><init>()V

    .line 1198
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->getContext()Landroid/content/Context;

    move-result-object v5

    check-cast v5, Landroid/app/Activity;

    invoke-virtual {v5}, Landroid/app/Activity;->getWindowManager()Landroid/view/WindowManager;

    move-result-object v5

    invoke-interface {v5}, Landroid/view/WindowManager;->getDefaultDisplay()Landroid/view/Display;

    move-result-object v5

    invoke-virtual {v5, v4}, Landroid/view/Display;->getMetrics(Landroid/util/DisplayMetrics;)V

    .line 1199
    iget v5, v4, Landroid/util/DisplayMetrics;->widthPixels:I

    int-to-float v5, v5

    .line 1200
    iget v4, v4, Landroid/util/DisplayMetrics;->heightPixels:I

    int-to-float v4, v4

    .line 1202
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v6

    iget-object v7, v1, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v6, v7, v2, v3}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireSetScreenSize(Landroid/webkit/WebView;FF)V

    .line 1203
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v2

    iget-object v3, v1, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v2, v3, v5, v4}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireSetMaxSize(Landroid/webkit/WebView;FF)V

    .line 1206
    :cond_3
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v6

    iget-object v7, v1, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 1207
    invoke-virtual {v7}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getLeft()I

    move-result v2

    int-to-float v8, v2

    iget-object v2, v1, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getTop()I

    move-result v2

    int-to-float v9, v2

    iget-object v2, v1, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getWidth()I

    move-result v2

    int-to-float v10, v2

    iget-object v2, v1, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getHeight()I

    move-result v2

    int-to-float v11, v2

    .line 1206
    invoke-virtual/range {v6 .. v11}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireSetDefaultPosition(Landroid/webkit/WebView;FFFF)V

    .line 1208
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v12

    iget-object v13, v1, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 1209
    invoke-virtual {v13}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getLeft()I

    move-result v2

    int-to-float v14, v2

    iget-object v2, v1, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getTop()I

    move-result v2

    int-to-float v15, v2

    iget-object v2, v1, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getWidth()I

    move-result v2

    int-to-float v2, v2

    iget-object v3, v1, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v3}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getHeight()I

    move-result v3

    int-to-float v3, v3

    move/from16 v16, v2

    move/from16 v17, v3

    .line 1208
    invoke-virtual/range {v12 .. v17}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireSetCurrentPosition(Landroid/webkit/WebView;FFFF)V

    .line 1210
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v2

    iget-object v3, v1, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v2, v3, v0}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireChangeEventForPropertys(Landroid/webkit/WebView;Ljava/util/Map;)V

    .line 1211
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v0

    iget-object v2, v1, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    sget-wide v3, Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver;->a:D

    invoke-virtual {v0, v2, v3, v4}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireAudioVolumeChange(Landroid/webkit/WebView;D)V

    .line 1212
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v0

    iget-object v2, v1, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireReadyEvent(Landroid/webkit/WebView;)V

    :cond_4
    return-void
.end method

.method private static k()V
    .locals 0

    return-void
.end method

.method static synthetic k(Lcom/tkay/expressad/video/module/TkayH5EndCardView;)Z
    .locals 0

    .line 63
    iget-boolean p0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->aa:Z

    return p0
.end method

.method static synthetic l(Lcom/tkay/expressad/video/module/TkayH5EndCardView;)Z
    .locals 1

    const/4 v0, 0x1

    .line 63
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->S:Z

    return v0
.end method

.method static synthetic m(Lcom/tkay/expressad/video/module/TkayH5EndCardView;)Z
    .locals 0

    .line 63
    iget-boolean p0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->M:Z

    return p0
.end method

.method static synthetic n(Lcom/tkay/expressad/video/module/TkayH5EndCardView;)Z
    .locals 1

    const/4 v0, 0x1

    .line 63
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->M:Z

    return v0
.end method


# virtual methods
.method protected a()Ljava/lang/String;
    .locals 6

    .line 853
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    const/4 v1, 0x0

    const/4 v2, 0x0

    if-eqz v0, :cond_8

    const/4 v0, 0x1

    .line 854
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->R:Z

    .line 856
    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->H()Z

    move-result v3

    if-eqz v3, :cond_3

    .line 857
    iput-boolean v2, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->J:Z

    .line 859
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->G()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 860
    new-instance v1, Ljava/io/File;

    invoke-direct {v1, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 863
    :try_start_0
    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-virtual {v1}, Ljava/io/File;->isFile()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-virtual {v1}, Ljava/io/File;->canRead()Z

    move-result v1

    if-eqz v1, :cond_0

    const-string v1, "file:////"

    .line 865
    invoke-static {v0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    .line 868
    :cond_0
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->P()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 871
    sget-boolean v2, Lcom/tkay/expressad/b;->a:Z

    if-eqz v2, :cond_2

    .line 872
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_0

    .line 877
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->P()Ljava/lang/String;

    move-result-object v0

    :cond_2
    :goto_0
    return-object v0

    .line 883
    :cond_3
    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v3

    .line 884
    invoke-static {v3}, Lcom/tkay/expressad/foundation/h/w;->a(Ljava/lang/String;)Z

    move-result v4

    if-nez v4, :cond_7

    .line 885
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->J:Z

    .line 886
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v0

    invoke-virtual {v0, v3}, Lcom/tkay/expressad/videocommon/b/g;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 887
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    const-string v5, "&native_adtype="

    if-eqz v4, :cond_6

    .line 889
    :try_start_1
    invoke-static {v3}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v0

    .line 890
    invoke-virtual {v0}, Landroid/net/Uri;->getPath()Ljava/lang/String;

    move-result-object v0

    .line 891
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_5

    .line 892
    invoke-virtual {v0}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v0

    const-string v4, ".zip"

    invoke-virtual {v0, v4}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_5

    .line 893
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->P()Ljava/lang/String;

    move-result-object v0

    .line 894
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_4

    .line 895
    iput-boolean v2, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->J:Z

    .line 896
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->excuteTask()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    return-object v0

    :cond_4
    return-object v1

    :catchall_1
    move-exception v0

    .line 904
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    .line 908
    :cond_5
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->w()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 912
    :cond_6
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->w()I

    move-result v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 916
    :cond_7
    iput-boolean v2, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->J:Z

    .line 917
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->P()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 923
    :cond_8
    iput-boolean v2, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->R:Z

    return-object v1
.end method

.method protected b()Landroid/widget/RelativeLayout$LayoutParams;
    .locals 2

    .line 837
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    return-object v0
.end method

.method protected final c()V
    .locals 2

    .line 227
    invoke-super {p0}, Lcom/tkay/expressad/video/module/TkayBaseView;->c()V

    .line 228
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->f:Z

    if-eqz v0, :cond_0

    .line 229
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->r:Landroid/widget/ImageView;

    new-instance v1, Lcom/tkay/expressad/video/module/TkayH5EndCardView$2;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView$2;-><init>(Lcom/tkay/expressad/video/module/TkayH5EndCardView;)V

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_0
    return-void
.end method

.method public canBackPress()Z
    .locals 1

    .line 794
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->r:Landroid/widget/ImageView;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/widget/ImageView;->getVisibility()I

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public close()V
    .locals 1

    .line 1323
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->onCloseViewClick()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 1325
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public defaultShow()V
    .locals 0

    .line 521
    invoke-super {p0}, Lcom/tkay/expressad/video/module/TkayBaseView;->defaultShow()V

    return-void
.end method

.method protected e()V
    .locals 1

    .line 844
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->f:Z

    if-eqz v0, :cond_0

    .line 845
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->setMatchParent()V

    :cond_0
    return-void
.end method

.method public excuteEndCardShowTask(I)V
    .locals 4

    .line 996
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->t:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/module/TkayH5EndCardView$c;

    invoke-direct {v1, p0, p1}, Lcom/tkay/expressad/video/module/TkayH5EndCardView$c;-><init>(Lcom/tkay/expressad/video/module/TkayH5EndCardView;I)V

    mul-int/lit16 p1, p1, 0x3e8

    int-to-long v2, p1

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.method public excuteTask()V
    .locals 4

    .line 960
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->J:Z

    if-nez v0, :cond_0

    iget v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->K:I

    if-ltz v0, :cond_0

    .line 961
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->t:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/module/TkayH5EndCardView$f;

    invoke-direct {v1, p0, p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView$f;-><init>(Lcom/tkay/expressad/video/module/TkayH5EndCardView;Lcom/tkay/expressad/video/module/TkayH5EndCardView;)V

    iget v2, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->K:I

    mul-int/lit16 v2, v2, 0x3e8

    int-to-long v2, v2

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    :cond_0
    return-void
.end method

.method public executeEndCardShow(I)V
    .locals 4

    .line 987
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->t:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/module/TkayH5EndCardView$b;

    invoke-direct {v1, p0, p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView$b;-><init>(Lcom/tkay/expressad/video/module/TkayH5EndCardView;Lcom/tkay/expressad/video/module/TkayH5EndCardView;)V

    mul-int/lit16 p1, p1, 0x3e8

    int-to-long v2, p1

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.method public expand(Ljava/lang/String;Z)V
    .locals 0

    return-void
.end method

.method public getMraidCampaign()Lcom/tkay/expressad/foundation/d/c;
    .locals 1

    .line 1337
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    return-object v0
.end method

.method public handlerPlayableException(Ljava/lang/String;)V
    .locals 0

    .line 630
    iget-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->w:Z

    if-nez p1, :cond_0

    const/4 p1, 0x1

    .line 631
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->w:Z

    const/4 p1, 0x0

    .line 632
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->v:Z

    :cond_0
    return-void
.end method

.method public init(Landroid/content/Context;)V
    .locals 3

    const-string p1, "tkay_reward_endcard_h5"

    .line 211
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->findLayout(Ljava/lang/String;)I

    move-result p1

    if-ltz p1, :cond_0

    .line 213
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->c:Landroid/view/LayoutInflater;

    const/4 v1, 0x0

    invoke-virtual {v0, p1, v1}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->p:Landroid/view/View;

    const/4 v0, 0x0

    :try_start_0
    const-string v1, "tkay_windwv_close"

    .line 1930
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->findID(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/ImageView;

    iput-object v1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->r:Landroid/widget/ImageView;

    const-string v1, "tkay_windwv_content_rl"

    .line 1931
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->findID(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/RelativeLayout;

    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->q:Landroid/widget/RelativeLayout;

    .line 1932
    new-instance p1, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {p1, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 1933
    new-instance p1, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {p1, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 1935
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v1, p1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1936
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->q:Landroid/widget/RelativeLayout;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {p1, v1}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    const/4 p1, 0x2

    new-array p1, p1, [Landroid/view/View;

    .line 1937
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->r:Landroid/widget/ImageView;

    aput-object v1, p1, v0

    const/4 v1, 0x1

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    aput-object v2, p1, v1

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->isNotNULL([Landroid/view/View;)Z

    move-result p1

    .line 215
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->f:Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 217
    :catch_0
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->f:Z

    .line 219
    :goto_0
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->p:Landroid/view/View;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b()Landroid/widget/RelativeLayout$LayoutParams;

    move-result-object v0

    invoke-virtual {p0, p1, v0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 220
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->c()V

    .line 221
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->e()V

    :cond_0
    return-void
.end method

.method public install(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 0

    return-void
.end method

.method public isLoadSuccess()Z
    .locals 1

    .line 798
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->v:Z

    return v0
.end method

.method public isPlayable()Z
    .locals 1

    .line 1130
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->J:Z

    return v0
.end method

.method public notifyCloseBtn(I)V
    .locals 1

    const/4 v0, 0x1

    if-eqz p1, :cond_1

    if-eq p1, v0, :cond_0

    goto :goto_0

    .line 536
    :cond_0
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->U:Z

    :goto_0
    return-void

    .line 533
    :cond_1
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->T:Z

    return-void
.end method

.method public onBackPress()V
    .locals 1

    .line 1134
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->S:Z

    if-nez v0, :cond_2

    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->T:Z

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->U:Z

    if-nez v0, :cond_2

    :cond_0
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->T:Z

    if-nez v0, :cond_1

    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->V:Z

    if-eqz v0, :cond_1

    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->z:Z

    if-eqz v0, :cond_2

    :cond_1
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->T:Z

    if-nez v0, :cond_3

    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->W:Z

    if-eqz v0, :cond_3

    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->z:Z

    if-eqz v0, :cond_3

    .line 1138
    :cond_2
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->onCloseViewClick()V

    :cond_3
    return-void
.end method

.method public onCloseViewClick()V
    .locals 5

    const-string v0, ""

    const/16 v1, 0x77

    const/16 v2, 0x67

    .line 240
    :try_start_0
    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v3, :cond_0

    .line 241
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    const-string v4, "onSystemDestory"

    invoke-static {v3, v4, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    .line 242
    new-instance v3, Ljava/lang/Thread;

    new-instance v4, Lcom/tkay/expressad/video/module/TkayH5EndCardView$a;

    invoke-direct {v4, p0, p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView$a;-><init>(Lcom/tkay/expressad/video/module/TkayH5EndCardView;Lcom/tkay/expressad/video/module/TkayH5EndCardView;)V

    invoke-direct {v3, v4}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    invoke-virtual {v3}, Ljava/lang/Thread;->start()V

    return-void

    .line 244
    :cond_0
    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->e:Lcom/tkay/expressad/video/module/a/a;

    invoke-interface {v3, v2, v0}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    .line 245
    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->e:Lcom/tkay/expressad/video/module/a/a;

    const-string v4, "webview is null when closing webview"

    invoke-interface {v3, v1, v4}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v3

    .line 248
    iget-object v4, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->e:Lcom/tkay/expressad/video/module/a/a;

    invoke-interface {v4, v2, v0}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    .line 249
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->e:Lcom/tkay/expressad/video/module/a/a;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v4, "close webview exception"

    invoke-direct {v2, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v1, v2}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    .line 250
    invoke-virtual {v3}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public onSelfConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 0

    .line 205
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/module/TkayBaseView;->onSelfConfigurationChanged(Landroid/content/res/Configuration;)V

    .line 206
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->orientation(Landroid/content/res/Configuration;)V

    return-void
.end method

.method protected onVisibilityChanged(Landroid/view/View;I)V
    .locals 0

    .line 1235
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/module/TkayBaseView;->onVisibilityChanged(Landroid/view/View;I)V

    if-nez p2, :cond_0

    .line 1236
    iget-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->ab:Z

    if-nez p1, :cond_0

    const/4 p1, 0x1

    .line 1237
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->ab:Z

    .line 1238
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->setFocusableInTouchMode(Z)V

    .line 1239
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->requestFocus()Z

    .line 1240
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->requestFocusFromTouch()Z

    :cond_0
    return-void
.end method

.method public onWindowFocusChanged(Z)V
    .locals 2

    .line 1223
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/module/TkayBaseView;->onWindowFocusChanged(Z)V

    .line 1224
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->H()Z

    move-result v0

    if-eqz v0, :cond_1

    if-eqz p1, :cond_0

    .line 1226
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    const-string v1, "true"

    invoke-virtual {p1, v0, v1}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireSetIsViewable(Landroid/webkit/WebView;Ljava/lang/String;)V

    return-void

    .line 1228
    :cond_0
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    const-string v1, "false"

    invoke-virtual {p1, v0, v1}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireSetIsViewable(Landroid/webkit/WebView;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method public open(Ljava/lang/String;)V
    .locals 3

    .line 4284
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->ad()Ljava/lang/String;

    move-result-object v0

    .line 4286
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 4287
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1, p1}, Lcom/tkay/expressad/foundation/d/c;->p(Ljava/lang/String;)V

    .line 4290
    :cond_0
    new-instance p1, Lcom/tkay/expressad/a/a;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->x:Ljava/lang/String;

    invoke-direct {p1, v1, v2}, Lcom/tkay/expressad/a/a;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    .line 4292
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/foundation/d/c;->p(Ljava/lang/String;)V

    .line 4298
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v0, 0x7e

    const-string v1, ""

    invoke-interface {p1, v0, v1}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 4301
    :try_start_1
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    return-void

    :catch_1
    move-exception p1

    .line 1278
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public orientation(Landroid/content/res/Configuration;)V
    .locals 3

    .line 780
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 781
    iget p1, p1, Landroid/content/res/Configuration;->orientation:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v1, 0x2

    const-string v2, "orientation"

    if-ne p1, v1, :cond_0

    :try_start_1
    const-string p1, "landscape"

    .line 782
    invoke-virtual {v0, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_0

    :cond_0
    const-string p1, "portrait"

    .line 784
    invoke-virtual {v0, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 786
    :goto_0
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object p1

    invoke-static {p1, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p1

    .line 787
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-static {v0, v2, p1}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 789
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method public preLoadData(Lcom/tkay/expressad/video/signal/factory/b;)V
    .locals 9

    const-string v0, "wfr=1"

    const-string v1, "="

    .line 285
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->ad:Lcom/tkay/expressad/video/signal/factory/b;

    .line 287
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->a()Ljava/lang/String;

    move-result-object v3

    .line 288
    iget-boolean v2, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->f:Z

    const/4 v8, 0x0

    if-eqz v2, :cond_8

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v2, :cond_8

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_8

    .line 289
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    iput-wide v4, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->P:J

    .line 296
    new-instance v2, Lcom/tkay/expressad/foundation/webview/BrowserView$DownloadListener;

    iget-object v4, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-direct {v2, v4}, Lcom/tkay/expressad/foundation/webview/BrowserView$DownloadListener;-><init>(Lcom/tkay/expressad/foundation/d/c;)V

    .line 297
    iget-object v4, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/d/c;->bb()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Lcom/tkay/expressad/foundation/webview/BrowserView$DownloadListener;->setTitle(Ljava/lang/String;)V

    .line 298
    iget-object v4, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v4, v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setDownloadListener(Landroid/webkit/DownloadListener;)V

    .line 299
    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    iget-object v4, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setCampaignId(Ljava/lang/String;)V

    const/16 v2, 0x8

    .line 300
    invoke-virtual {p0, v2}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->setCloseVisible(I)V

    .line 301
    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v2, p1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setApiManagerJSFactory(Ljava/lang/Object;)V

    .line 302
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->H()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 303
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {p1, p0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setMraidObject(Ljava/lang/Object;)V

    .line 305
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    new-instance v2, Lcom/tkay/expressad/video/module/TkayH5EndCardView$3;

    invoke-direct {v2, p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView$3;-><init>(Lcom/tkay/expressad/video/module/TkayH5EndCardView;)V

    invoke-virtual {p1, v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setWebViewListener(Lcom/tkay/expressad/atsignalcommon/windvane/e;)V

    .line 397
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->G()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_6

    .line 2484
    :try_start_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    iput-wide v4, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->P:J

    .line 2485
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object p1

    .line 2486
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object v2

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v4

    iget-object v5, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->x:Ljava/lang/String;

    invoke-virtual {v2, v4, v5}, Lcom/tkay/expressad/videocommon/e/c;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/videocommon/e/d;

    move-result-object v2

    .line 2487
    iget-boolean v4, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->J:Z

    if-eqz v4, :cond_6

    invoke-static {p1}, Lcom/tkay/expressad/foundation/h/w;->b(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_6

    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_1

    if-eqz v2, :cond_6

    invoke-virtual {v2}, Lcom/tkay/expressad/videocommon/e/d;->o()I

    move-result v4

    if-lez v4, :cond_6

    .line 2491
    :cond_1
    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    const/16 v4, 0x14

    if-eqz v0, :cond_3

    const-string v0, "&"

    .line 2492
    invoke-virtual {p1, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    if-eqz p1, :cond_4

    .line 2493
    array-length v0, p1

    if-lez v0, :cond_4

    .line 2494
    array-length v0, p1

    move v2, v8

    :goto_0
    if-ge v2, v0, :cond_4

    aget-object v5, p1, v2

    .line 2495
    invoke-static {v5}, Lcom/tkay/expressad/foundation/h/w;->b(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_2

    const-string v6, "to"

    invoke-virtual {v5, v6}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v6

    if-eqz v6, :cond_2

    invoke-virtual {v5, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v6

    if-eqz v6, :cond_2

    invoke-virtual {v5, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v6

    array-length v6, v6

    if-lez v6, :cond_2

    .line 2496
    invoke-virtual {v5, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    const/4 v0, 0x1

    .line 2497
    aget-object p1, p1, v0

    invoke-static {p1}, Lcom/tkay/expressad/foundation/h/t;->a(Ljava/lang/Object;)I

    move-result p1

    goto :goto_1

    :cond_2
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_3
    if-eqz v2, :cond_4

    .line 2503
    invoke-virtual {v2}, Lcom/tkay/expressad/videocommon/e/d;->o()I

    move-result p1

    if-lez p1, :cond_4

    .line 2504
    invoke-virtual {v2}, Lcom/tkay/expressad/videocommon/e/d;->o()I

    move-result p1

    goto :goto_1

    :cond_4
    move p1, v4

    :goto_1
    if-ltz p1, :cond_5

    .line 2507
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->excuteEndCardShowTask(I)V

    goto :goto_2

    .line 2510
    :cond_5
    invoke-virtual {p0, v4}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->excuteEndCardShowTask(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception p1

    .line 2515
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    .line 402
    :cond_6
    :goto_2
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/h;->a()Lcom/tkay/expressad/videocommon/b/h;

    move-result-object p1

    invoke-virtual {p1, v3}, Lcom/tkay/expressad/videocommon/b/h;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 403
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->setHtmlSource(Ljava/lang/String;)V

    .line 406
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->u:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_7

    .line 408
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {p1, v3}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->loadUrl(Ljava/lang/String;)V

    goto :goto_3

    .line 411
    :cond_7
    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    iget-object v4, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->u:Ljava/lang/String;

    const/4 v7, 0x0

    const-string v5, "text/html"

    const-string v6, "UTF-8"

    invoke-virtual/range {v2 .. v7}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->loadDataWithBaseURL(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_3

    :cond_8
    const/4 p1, 0x3

    const-string v0, "PL URL IS NULL"

    .line 416
    invoke-virtual {p0, v0, p1}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->reportRenderResult(Ljava/lang/String;I)V

    .line 417
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v0, 0x7f

    const-string v1, ""

    invoke-interface {p1, v0, v1}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    .line 418
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v0, 0x81

    invoke-interface {p1, v0, v1}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    .line 420
    :goto_3
    iput-boolean v8, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->z:Z

    return-void
.end method

.method public readyStatus(I)V
    .locals 0

    return-void
.end method

.method public release()V
    .locals 2

    .line 1149
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->t:Landroid/os/Handler;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 1150
    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    .line 1151
    iput-object v1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->t:Landroid/os/Handler;

    .line 1153
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->y:Landroid/os/Handler;

    if-eqz v0, :cond_1

    .line 1154
    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    .line 1155
    iput-object v1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->y:Landroid/os/Handler;

    .line 1158
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->q:Landroid/widget/RelativeLayout;

    invoke-virtual {v0}, Landroid/widget/RelativeLayout;->removeAllViews()V

    .line 1159
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->release()V

    .line 1160
    iput-object v1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    return-void
.end method

.method public reportRenderResult(Ljava/lang/String;I)V
    .locals 0

    return-void
.end method

.method public setCloseDelayShowTime(I)V
    .locals 0

    .line 806
    iput p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->K:I

    return-void
.end method

.method public setCloseVisible(I)V
    .locals 1

    .line 818
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->f:Z

    if-eqz v0, :cond_0

    .line 819
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->r:Landroid/widget/ImageView;

    invoke-virtual {v0, p1}, Landroid/widget/ImageView;->setVisibility(I)V

    :cond_0
    return-void
.end method

.method public setCloseVisibleForMraid(I)V
    .locals 2

    .line 824
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->f:Z

    if-eqz v0, :cond_1

    const/4 v0, 0x1

    .line 825
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->aa:Z

    const/4 v0, 0x4

    if-ne p1, v0, :cond_0

    .line 828
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->r:Landroid/widget/ImageView;

    new-instance v0, Landroid/graphics/drawable/ColorDrawable;

    const/high16 v1, 0xff0000

    invoke-direct {v0, v1}, Landroid/graphics/drawable/ColorDrawable;-><init>(I)V

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setImageDrawable(Landroid/graphics/drawable/Drawable;)V

    goto :goto_0

    .line 830
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->r:Landroid/widget/ImageView;

    const-string v0, "tkay_reward_close"

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->findDrawable(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setImageResource(I)V

    .line 832
    :goto_0
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->r:Landroid/widget/ImageView;

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setVisibility(I)V

    :cond_1
    return-void
.end method

.method public setError(Z)V
    .locals 0

    .line 280
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->w:Z

    return-void
.end method

.method public setHtmlSource(Ljava/lang/String;)V
    .locals 0

    .line 814
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->u:Ljava/lang/String;

    return-void
.end method

.method public setLoadPlayable(Z)V
    .locals 0

    .line 1145
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->z:Z

    return-void
.end method

.method public setNotchValue(Ljava/lang/String;IIII)V
    .locals 5

    .line 1355
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->f()I

    move-result v0

    const/4 v1, 0x2

    if-eq v0, v1, :cond_0

    .line 1356
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->ac:Ljava/lang/String;

    .line 1357
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "NOTCH H5ENDCARD "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    const/4 v2, 0x4

    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    aput-object v4, v2, v3

    const/4 v3, 0x1

    invoke-static {p3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    aput-object v4, v2, v3

    invoke-static {p4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v2, v1

    const/4 v1, 0x3

    invoke-static {p5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v2, v1

    const-string v1, "%1s-%2s-%3s-%4s"

    invoke-static {v1, v2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1358
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->r:Landroid/widget/ImageView;

    invoke-virtual {p1}, Landroid/widget/ImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object p1

    check-cast p1, Landroid/widget/RelativeLayout$LayoutParams;

    .line 1359
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x41a00000    # 20.0f

    invoke-static {v1, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v1

    add-int/2addr p2, v1

    add-int/2addr p4, v1

    add-int/2addr p3, v1

    add-int/2addr p5, v1

    .line 1360
    invoke-virtual {p1, p2, p4, p3, p5}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    .line 1361
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 1362
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->r:Landroid/widget/ImageView;

    invoke-virtual {p2, p1}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_0
    return-void
.end method

.method public setPlayCloseBtnTm(I)V
    .locals 0

    .line 810
    iput p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->L:I

    return-void
.end method

.method public setUnitId(Ljava/lang/String;)V
    .locals 0

    .line 802
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->x:Ljava/lang/String;

    return-void
.end method

.method public startCounterEndCardShowTimer()V
    .locals 7

    const-string v0, "="

    .line 457
    :try_start_0
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v1

    const/16 v2, 0xf

    .line 459
    invoke-static {v1}, Lcom/tkay/expressad/foundation/h/w;->b(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_2

    const-string v3, "wfl=1"

    invoke-virtual {v1, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_2

    const-string v3, "&"

    .line 460
    invoke-virtual {v1, v3}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 461
    array-length v3, v1

    if-lez v3, :cond_1

    .line 462
    array-length v3, v1

    const/4 v4, 0x0

    :goto_0
    if-ge v4, v3, :cond_1

    aget-object v5, v1, v4

    .line 463
    invoke-static {v5}, Lcom/tkay/expressad/foundation/h/w;->b(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_0

    const-string v6, "timeout"

    invoke-virtual {v5, v6}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v6

    if-eqz v6, :cond_0

    invoke-virtual {v5, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v6

    if-eqz v6, :cond_0

    invoke-virtual {v5, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v6

    array-length v6, v6

    if-lez v6, :cond_0

    .line 464
    invoke-virtual {v5, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v2

    const/4 v5, 0x1

    .line 465
    aget-object v2, v2, v5

    invoke-static {v2}, Lcom/tkay/expressad/foundation/h/t;->a(Ljava/lang/Object;)I

    move-result v2

    :cond_0
    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    .line 470
    :cond_1
    invoke-virtual {p0, v2}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->executeEndCardShow(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_2
    return-void

    :catchall_0
    move-exception v0

    .line 473
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public toggleCloseBtn(I)V
    .locals 4

    .line 543
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->r:Landroid/widget/ImageView;

    invoke-virtual {v0}, Landroid/widget/ImageView;->getVisibility()I

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-eq p1, v2, :cond_6

    const/4 v3, 0x2

    if-eq p1, v3, :cond_0

    goto :goto_0

    .line 550
    :cond_0
    iput-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->S:Z

    const/16 v0, 0x8

    .line 552
    iget-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->z:Z

    if-eqz p1, :cond_3

    .line 2612
    iget-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->af:Z

    if-nez p1, :cond_7

    iget-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->T:Z

    if-eqz p1, :cond_1

    goto :goto_0

    .line 2615
    :cond_1
    iput-boolean v2, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->af:Z

    .line 2616
    iget p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->L:I

    if-nez p1, :cond_2

    .line 2617
    iput-boolean v2, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->W:Z

    goto :goto_0

    .line 2620
    :cond_2
    iput-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->W:Z

    if-ltz p1, :cond_7

    .line 2622
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->t:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/module/TkayH5EndCardView$e;

    invoke-direct {v1, p0, p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView$e;-><init>(Lcom/tkay/expressad/video/module/TkayH5EndCardView;Lcom/tkay/expressad/video/module/TkayH5EndCardView;)V

    iget v2, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->L:I

    mul-int/lit16 v2, v2, 0x3e8

    int-to-long v2, v2

    invoke-virtual {p1, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    goto :goto_0

    .line 3565
    :cond_3
    iget-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->ae:Z

    if-nez p1, :cond_7

    iget-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->T:Z

    if-eqz p1, :cond_4

    goto :goto_0

    .line 3568
    :cond_4
    iput-boolean v2, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->ae:Z

    .line 3569
    iget p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->K:I

    if-nez p1, :cond_5

    .line 3570
    iput-boolean v2, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->V:Z

    goto :goto_0

    .line 3573
    :cond_5
    iput-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->V:Z

    if-ltz p1, :cond_7

    .line 3575
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->t:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/video/module/TkayH5EndCardView$d;

    invoke-direct {v1, p0, p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView$d;-><init>(Lcom/tkay/expressad/video/module/TkayH5EndCardView;Lcom/tkay/expressad/video/module/TkayH5EndCardView;)V

    iget v2, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->K:I

    mul-int/lit16 v2, v2, 0x3e8

    int-to-long v2, v2

    invoke-virtual {p1, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    goto :goto_0

    .line 547
    :cond_6
    iput-boolean v2, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->S:Z

    move v0, v1

    .line 559
    :cond_7
    :goto_0
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->setCloseVisible(I)V

    return-void
.end method

.method public unload()V
    .locals 0

    .line 1332
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->close()V

    return-void
.end method

.method public useCustomClose(Z)V
    .locals 0

    if-eqz p1, :cond_0

    const/4 p1, 0x4

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    .line 1344
    :goto_0
    :try_start_0
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->setCloseVisibleForMraid(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 1346
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public volumeChange(D)V
    .locals 2

    .line 1218
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v0, v1, p1, p2}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireAudioVolumeChange(Landroid/webkit/WebView;D)V

    return-void
.end method

.method public webviewshow()V
    .locals 2

    .line 652
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->s:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_0

    .line 655
    new-instance v1, Lcom/tkay/expressad/video/module/TkayH5EndCardView$4;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView$4;-><init>(Lcom/tkay/expressad/video/module/TkayH5EndCardView;)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->post(Ljava/lang/Runnable;)Z

    :cond_0
    return-void
.end method
