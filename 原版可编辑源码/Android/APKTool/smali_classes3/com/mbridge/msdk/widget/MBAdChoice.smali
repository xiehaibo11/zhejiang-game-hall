.class public Lcom/mbridge/msdk/widget/MBAdChoice;
.super Lcom/mbridge/msdk/widget/MBImageView;
.source "MBAdChoice.java"


# static fields
.field private static a:Ljava/lang/String; = "MBAdChoice"


# instance fields
.field private b:Ljava/lang/String;

.field private c:Ljava/lang/String;

.field private d:Ljava/lang/String;

.field private e:Landroid/content/Context;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 37
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/widget/MBImageView;-><init>(Landroid/content/Context;)V

    const-string v0, ""

    .line 24
    iput-object v0, p0, Lcom/mbridge/msdk/widget/MBAdChoice;->b:Ljava/lang/String;

    .line 28
    iput-object v0, p0, Lcom/mbridge/msdk/widget/MBAdChoice;->c:Ljava/lang/String;

    .line 32
    iput-object v0, p0, Lcom/mbridge/msdk/widget/MBAdChoice;->d:Ljava/lang/String;

    .line 38
    iput-object p1, p0, Lcom/mbridge/msdk/widget/MBAdChoice;->e:Landroid/content/Context;

    .line 39
    invoke-direct {p0}, Lcom/mbridge/msdk/widget/MBAdChoice;->b()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 43
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/widget/MBImageView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const-string p2, ""

    .line 24
    iput-object p2, p0, Lcom/mbridge/msdk/widget/MBAdChoice;->b:Ljava/lang/String;

    .line 28
    iput-object p2, p0, Lcom/mbridge/msdk/widget/MBAdChoice;->c:Ljava/lang/String;

    .line 32
    iput-object p2, p0, Lcom/mbridge/msdk/widget/MBAdChoice;->d:Ljava/lang/String;

    .line 44
    iput-object p1, p0, Lcom/mbridge/msdk/widget/MBAdChoice;->e:Landroid/content/Context;

    .line 45
    invoke-direct {p0}, Lcom/mbridge/msdk/widget/MBAdChoice;->b()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 49
    invoke-direct {p0, p1, p2, p3}, Lcom/mbridge/msdk/widget/MBImageView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    const-string p2, ""

    .line 24
    iput-object p2, p0, Lcom/mbridge/msdk/widget/MBAdChoice;->b:Ljava/lang/String;

    .line 28
    iput-object p2, p0, Lcom/mbridge/msdk/widget/MBAdChoice;->c:Ljava/lang/String;

    .line 32
    iput-object p2, p0, Lcom/mbridge/msdk/widget/MBAdChoice;->d:Ljava/lang/String;

    .line 50
    iput-object p1, p0, Lcom/mbridge/msdk/widget/MBAdChoice;->e:Landroid/content/Context;

    .line 51
    invoke-direct {p0}, Lcom/mbridge/msdk/widget/MBAdChoice;->b()V

    return-void
.end method

.method static synthetic a()Ljava/lang/String;
    .locals 1

    .line 18
    sget-object v0, Lcom/mbridge/msdk/widget/MBAdChoice;->a:Ljava/lang/String;

    return-object v0
.end method

.method private b()V
    .locals 1

    .line 56
    sget-object v0, Landroid/widget/ImageView$ScaleType;->FIT_CENTER:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/widget/MBAdChoice;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    const/4 v0, 0x1

    .line 58
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/widget/MBAdChoice;->setClickable(Z)V

    return-void
.end method


# virtual methods
.method public performClick()Z
    .locals 3

    .line 1110
    iget-object v0, p0, Lcom/mbridge/msdk/widget/MBAdChoice;->d:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 1111
    iget-object v0, p0, Lcom/mbridge/msdk/widget/MBAdChoice;->e:Landroid/content/Context;

    iget-object v1, p0, Lcom/mbridge/msdk/widget/MBAdChoice;->d:Ljava/lang/String;

    const/4 v2, 0x0

    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/out/BaseTrackingListener;)V

    :cond_0
    const/4 v0, 0x1

    return v0
.end method

.method public setCampaign(Lcom/mbridge/msdk/out/Campaign;)V
    .locals 3

    .line 81
    instance-of v0, p1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_3

    check-cast p1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    const/4 v0, 0x1

    const/4 v1, 0x0

    if-eqz p1, :cond_0

    .line 1065
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdchoice()Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1066
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdchoice()Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;->e()Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/mbridge/msdk/widget/MBAdChoice;->b:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1067
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdchoice()Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;->d()Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/mbridge/msdk/widget/MBAdChoice;->d:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1068
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdchoice()Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$a;->f()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    move p1, v0

    goto :goto_0

    :cond_0
    move p1, v1

    :goto_0
    if-nez p1, :cond_2

    .line 1070
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object p1

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v2}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 1072
    invoke-virtual {p1}, Lcom/mbridge/msdk/c/a;->ax()Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/mbridge/msdk/widget/MBAdChoice;->b:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 1073
    invoke-virtual {p1}, Lcom/mbridge/msdk/c/a;->az()Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/mbridge/msdk/widget/MBAdChoice;->d:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 1074
    invoke-virtual {p1}, Lcom/mbridge/msdk/c/a;->ay()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_1

    goto :goto_1

    :cond_1
    move v0, v1

    :goto_1
    move p1, v0

    .line 1076
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/widget/MBAdChoice;->b:Ljava/lang/String;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/widget/MBAdChoice;->setImageUrl(Ljava/lang/String;)V

    if-eqz p1, :cond_3

    .line 1088
    iget-object p1, p0, Lcom/mbridge/msdk/widget/MBAdChoice;->e:Landroid/content/Context;

    if-eqz p1, :cond_3

    .line 1089
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/same/c/b;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/widget/MBAdChoice;->b:Ljava/lang/String;

    new-instance v1, Lcom/mbridge/msdk/widget/MBAdChoice$1;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/widget/MBAdChoice$1;-><init>(Lcom/mbridge/msdk/widget/MBAdChoice;)V

    invoke-virtual {p1, v0, v1}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/c/c;)V

    :cond_3
    return-void
.end method
