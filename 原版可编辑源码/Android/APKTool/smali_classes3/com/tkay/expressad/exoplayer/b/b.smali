.class public final Lcom/tkay/expressad/exoplayer/b/b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/b/b$a;
    }
.end annotation


# static fields
.field public static final a:Lcom/tkay/expressad/exoplayer/b/b;


# instance fields
.field public final b:I

.field public final c:I

.field public final d:I

.field private e:Landroid/media/AudioAttributes;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 37
    new-instance v0, Lcom/tkay/expressad/exoplayer/b/b$a;

    invoke-direct {v0}, Lcom/tkay/expressad/exoplayer/b/b$a;-><init>()V

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/b/b$a;->a()Lcom/tkay/expressad/exoplayer/b/b;

    move-result-object v0

    sput-object v0, Lcom/tkay/expressad/exoplayer/b/b;->a:Lcom/tkay/expressad/exoplayer/b/b;

    return-void
.end method

.method private constructor <init>(III)V
    .locals 0

    .line 106
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 107
    iput p1, p0, Lcom/tkay/expressad/exoplayer/b/b;->b:I

    .line 108
    iput p2, p0, Lcom/tkay/expressad/exoplayer/b/b;->c:I

    .line 109
    iput p3, p0, Lcom/tkay/expressad/exoplayer/b/b;->d:I

    return-void
.end method

.method synthetic constructor <init>(IIIB)V
    .locals 0

    .line 35
    invoke-direct {p0, p1, p2, p3}, Lcom/tkay/expressad/exoplayer/b/b;-><init>(III)V

    return-void
.end method


# virtual methods
.method final a()Landroid/media/AudioAttributes;
    .locals 2

    .line 114
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/b;->e:Landroid/media/AudioAttributes;

    if-nez v0, :cond_0

    .line 115
    new-instance v0, Landroid/media/AudioAttributes$Builder;

    invoke-direct {v0}, Landroid/media/AudioAttributes$Builder;-><init>()V

    iget v1, p0, Lcom/tkay/expressad/exoplayer/b/b;->b:I

    .line 116
    invoke-virtual {v0, v1}, Landroid/media/AudioAttributes$Builder;->setContentType(I)Landroid/media/AudioAttributes$Builder;

    move-result-object v0

    iget v1, p0, Lcom/tkay/expressad/exoplayer/b/b;->c:I

    .line 117
    invoke-virtual {v0, v1}, Landroid/media/AudioAttributes$Builder;->setFlags(I)Landroid/media/AudioAttributes$Builder;

    move-result-object v0

    iget v1, p0, Lcom/tkay/expressad/exoplayer/b/b;->d:I

    .line 118
    invoke-virtual {v0, v1}, Landroid/media/AudioAttributes$Builder;->setUsage(I)Landroid/media/AudioAttributes$Builder;

    move-result-object v0

    .line 119
    invoke-virtual {v0}, Landroid/media/AudioAttributes$Builder;->build()Landroid/media/AudioAttributes;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/b;->e:Landroid/media/AudioAttributes;

    .line 121
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/b;->e:Landroid/media/AudioAttributes;

    return-object v0
.end method

.method public final equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p0, p1, :cond_0

    return v0

    :cond_0
    const/4 v1, 0x0

    if-eqz p1, :cond_2

    .line 129
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v3

    if-eq v2, v3, :cond_1

    goto :goto_0

    .line 132
    :cond_1
    check-cast p1, Lcom/tkay/expressad/exoplayer/b/b;

    .line 133
    iget v2, p0, Lcom/tkay/expressad/exoplayer/b/b;->b:I

    iget v3, p1, Lcom/tkay/expressad/exoplayer/b/b;->b:I

    if-ne v2, v3, :cond_2

    iget v2, p0, Lcom/tkay/expressad/exoplayer/b/b;->c:I

    iget v3, p1, Lcom/tkay/expressad/exoplayer/b/b;->c:I

    if-ne v2, v3, :cond_2

    iget v2, p0, Lcom/tkay/expressad/exoplayer/b/b;->d:I

    iget p1, p1, Lcom/tkay/expressad/exoplayer/b/b;->d:I

    if-ne v2, p1, :cond_2

    return v0

    :cond_2
    :goto_0
    return v1
.end method

.method public final hashCode()I
    .locals 2

    .line 140
    iget v0, p0, Lcom/tkay/expressad/exoplayer/b/b;->b:I

    add-int/lit16 v0, v0, 0x20f

    mul-int/lit8 v0, v0, 0x1f

    .line 141
    iget v1, p0, Lcom/tkay/expressad/exoplayer/b/b;->c:I

    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x1f

    .line 142
    iget v1, p0, Lcom/tkay/expressad/exoplayer/b/b;->d:I

    add-int/2addr v0, v1

    return v0
.end method
