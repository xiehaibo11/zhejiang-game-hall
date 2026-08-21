.class public Lcom/tkay/expressad/widget/TYAdChoice;
.super Lcom/tkay/expressad/widget/TYImageView;


# static fields
.field private static a:Ljava/lang/String; = "TYAdChoice"


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

    .line 26
    invoke-direct {p0, p1}, Lcom/tkay/expressad/widget/TYImageView;-><init>(Landroid/content/Context;)V

    const-string v0, ""

    .line 19
    iput-object v0, p0, Lcom/tkay/expressad/widget/TYAdChoice;->b:Ljava/lang/String;

    .line 20
    iput-object v0, p0, Lcom/tkay/expressad/widget/TYAdChoice;->c:Ljava/lang/String;

    .line 21
    iput-object v0, p0, Lcom/tkay/expressad/widget/TYAdChoice;->d:Ljava/lang/String;

    .line 27
    iput-object p1, p0, Lcom/tkay/expressad/widget/TYAdChoice;->e:Landroid/content/Context;

    .line 28
    invoke-direct {p0}, Lcom/tkay/expressad/widget/TYAdChoice;->a()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 32
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/widget/TYImageView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const-string p2, ""

    .line 19
    iput-object p2, p0, Lcom/tkay/expressad/widget/TYAdChoice;->b:Ljava/lang/String;

    .line 20
    iput-object p2, p0, Lcom/tkay/expressad/widget/TYAdChoice;->c:Ljava/lang/String;

    .line 21
    iput-object p2, p0, Lcom/tkay/expressad/widget/TYAdChoice;->d:Ljava/lang/String;

    .line 33
    iput-object p1, p0, Lcom/tkay/expressad/widget/TYAdChoice;->e:Landroid/content/Context;

    .line 34
    invoke-direct {p0}, Lcom/tkay/expressad/widget/TYAdChoice;->a()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 38
    invoke-direct {p0, p1, p2, p3}, Lcom/tkay/expressad/widget/TYImageView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    const-string p2, ""

    .line 19
    iput-object p2, p0, Lcom/tkay/expressad/widget/TYAdChoice;->b:Ljava/lang/String;

    .line 20
    iput-object p2, p0, Lcom/tkay/expressad/widget/TYAdChoice;->c:Ljava/lang/String;

    .line 21
    iput-object p2, p0, Lcom/tkay/expressad/widget/TYAdChoice;->d:Ljava/lang/String;

    .line 39
    iput-object p1, p0, Lcom/tkay/expressad/widget/TYAdChoice;->e:Landroid/content/Context;

    .line 40
    invoke-direct {p0}, Lcom/tkay/expressad/widget/TYAdChoice;->a()V

    return-void
.end method

.method private a()V
    .locals 1

    .line 44
    sget-object v0, Landroid/widget/ImageView$ScaleType;->FIT_CENTER:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/widget/TYAdChoice;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    const/4 v0, 0x1

    .line 45
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/widget/TYAdChoice;->setClickable(Z)V

    return-void
.end method

.method private a(Lcom/tkay/expressad/foundation/d/c;)Z
    .locals 3

    const/4 v0, 0x1

    const/4 v1, 0x0

    if-eqz p1, :cond_0

    .line 50
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->v()Lcom/tkay/expressad/foundation/d/c$a;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 51
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->v()Lcom/tkay/expressad/foundation/d/c$a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c$a;->c()Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/expressad/widget/TYAdChoice;->b:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 52
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->v()Lcom/tkay/expressad/foundation/d/c$a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c$a;->b()Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/expressad/widget/TYAdChoice;->d:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 53
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->v()Lcom/tkay/expressad/foundation/d/c$a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c$a;->d()Ljava/lang/String;

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

    .line 55
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    invoke-static {}, Lcom/tkay/expressad/d/b;->b()Lcom/tkay/expressad/d/a;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 57
    invoke-virtual {p1}, Lcom/tkay/expressad/d/a;->H()Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/expressad/widget/TYAdChoice;->b:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 58
    invoke-virtual {p1}, Lcom/tkay/expressad/d/a;->J()Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/expressad/widget/TYAdChoice;->d:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 59
    invoke-virtual {p1}, Lcom/tkay/expressad/d/a;->I()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_1

    goto :goto_1

    :cond_1
    move v0, v1

    :goto_1
    move p1, v0

    .line 61
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/widget/TYAdChoice;->b:Ljava/lang/String;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/widget/TYAdChoice;->setImageUrl(Ljava/lang/String;)V

    return p1
.end method

.method private b()V
    .locals 3

    .line 73
    iget-object v0, p0, Lcom/tkay/expressad/widget/TYAdChoice;->e:Landroid/content/Context;

    if-eqz v0, :cond_0

    .line 74
    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/widget/TYAdChoice;->b:Ljava/lang/String;

    new-instance v2, Lcom/tkay/expressad/widget/TYAdChoice$1;

    invoke-direct {v2, p0}, Lcom/tkay/expressad/widget/TYAdChoice$1;-><init>(Lcom/tkay/expressad/widget/TYAdChoice;)V

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    :cond_0
    return-void
.end method

.method private c()V
    .locals 3

    .line 94
    iget-object v0, p0, Lcom/tkay/expressad/widget/TYAdChoice;->d:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 95
    iget-object v0, p0, Lcom/tkay/expressad/widget/TYAdChoice;->e:Landroid/content/Context;

    iget-object v1, p0, Lcom/tkay/expressad/widget/TYAdChoice;->d:Ljava/lang/String;

    const/4 v2, 0x0

    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/foundation/h/s;->a(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/expressad/out/j$c;)V

    :cond_0
    return-void
.end method


# virtual methods
.method public performClick()Z
    .locals 3

    .line 1094
    iget-object v0, p0, Lcom/tkay/expressad/widget/TYAdChoice;->d:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 1095
    iget-object v0, p0, Lcom/tkay/expressad/widget/TYAdChoice;->e:Landroid/content/Context;

    iget-object v1, p0, Lcom/tkay/expressad/widget/TYAdChoice;->d:Ljava/lang/String;

    const/4 v2, 0x0

    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/foundation/h/s;->a(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/expressad/out/j$c;)V

    :cond_0
    const/4 v0, 0x1

    return v0
.end method

.method public setCampaign(Lcom/tkay/expressad/out/d;)V
    .locals 3

    .line 66
    instance-of v0, p1, Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_3

    check-cast p1, Lcom/tkay/expressad/foundation/d/c;

    const/4 v0, 0x1

    const/4 v1, 0x0

    if-eqz p1, :cond_0

    .line 1050
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->v()Lcom/tkay/expressad/foundation/d/c$a;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 1051
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->v()Lcom/tkay/expressad/foundation/d/c$a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c$a;->c()Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/expressad/widget/TYAdChoice;->b:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1052
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->v()Lcom/tkay/expressad/foundation/d/c$a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c$a;->b()Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/expressad/widget/TYAdChoice;->d:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1053
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->v()Lcom/tkay/expressad/foundation/d/c$a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c$a;->d()Ljava/lang/String;

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

    .line 1055
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    invoke-static {}, Lcom/tkay/expressad/d/b;->b()Lcom/tkay/expressad/d/a;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 1057
    invoke-virtual {p1}, Lcom/tkay/expressad/d/a;->H()Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/expressad/widget/TYAdChoice;->b:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 1058
    invoke-virtual {p1}, Lcom/tkay/expressad/d/a;->J()Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/expressad/widget/TYAdChoice;->d:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 1059
    invoke-virtual {p1}, Lcom/tkay/expressad/d/a;->I()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_1

    goto :goto_1

    :cond_1
    move v0, v1

    :goto_1
    move p1, v0

    .line 1061
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/widget/TYAdChoice;->b:Ljava/lang/String;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/widget/TYAdChoice;->setImageUrl(Ljava/lang/String;)V

    if-eqz p1, :cond_3

    .line 1073
    iget-object p1, p0, Lcom/tkay/expressad/widget/TYAdChoice;->e:Landroid/content/Context;

    if-eqz p1, :cond_3

    .line 1074
    invoke-static {p1}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/expressad/widget/TYAdChoice;->b:Ljava/lang/String;

    new-instance v1, Lcom/tkay/expressad/widget/TYAdChoice$1;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/widget/TYAdChoice$1;-><init>(Lcom/tkay/expressad/widget/TYAdChoice;)V

    invoke-virtual {p1, v0, v1}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    :cond_3
    return-void
.end method
