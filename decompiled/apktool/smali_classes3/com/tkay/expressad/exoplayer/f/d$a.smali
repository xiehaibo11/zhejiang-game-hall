.class final Lcom/tkay/expressad/exoplayer/f/d$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/f/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "a"
.end annotation


# instance fields
.field public final a:Ljava/lang/String;

.field public final b:Z


# direct methods
.method public constructor <init>(Ljava/lang/String;Z)V
    .locals 0

    .line 630
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 631
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/f/d$a;->a:Ljava/lang/String;

    .line 632
    iput-boolean p2, p0, Lcom/tkay/expressad/exoplayer/f/d$a;->b:Z

    return-void
.end method


# virtual methods
.method public final equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p0, p1, :cond_0

    return v0

    :cond_0
    const/4 v1, 0x0

    if-eqz p1, :cond_2

    .line 649
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    const-class v3, Lcom/tkay/expressad/exoplayer/f/d$a;

    if-eq v2, v3, :cond_1

    goto :goto_0

    .line 652
    :cond_1
    check-cast p1, Lcom/tkay/expressad/exoplayer/f/d$a;

    .line 653
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/f/d$a;->a:Ljava/lang/String;

    iget-object v3, p1, Lcom/tkay/expressad/exoplayer/f/d$a;->a:Ljava/lang/String;

    invoke-static {v2, v3}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_2

    iget-boolean v2, p0, Lcom/tkay/expressad/exoplayer/f/d$a;->b:Z

    iget-boolean p1, p1, Lcom/tkay/expressad/exoplayer/f/d$a;->b:Z

    if-ne v2, p1, :cond_2

    return v0

    :cond_2
    :goto_0
    return v1
.end method

.method public final hashCode()I
    .locals 2

    .line 639
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/d$a;->a:Ljava/lang/String;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    goto :goto_0

    :cond_0
    invoke-virtual {v0}, Ljava/lang/String;->hashCode()I

    move-result v0

    :goto_0
    add-int/lit8 v0, v0, 0x1f

    mul-int/lit8 v0, v0, 0x1f

    .line 640
    iget-boolean v1, p0, Lcom/tkay/expressad/exoplayer/f/d$a;->b:Z

    if-eqz v1, :cond_1

    const/16 v1, 0x4cf

    goto :goto_1

    :cond_1
    const/16 v1, 0x4d5

    :goto_1
    add-int/2addr v0, v1

    return v0
.end method
