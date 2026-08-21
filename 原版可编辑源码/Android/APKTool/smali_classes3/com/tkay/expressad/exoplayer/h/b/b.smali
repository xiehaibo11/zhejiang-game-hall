.class public final Lcom/tkay/expressad/exoplayer/h/b/b;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/h/b/d$b;


# static fields
.field private static final a:Ljava/lang/String; = "BaseMediaChunkOutput"


# instance fields
.field private final b:[I

.field private final c:[Lcom/tkay/expressad/exoplayer/h/x;


# direct methods
.method public constructor <init>([I[Lcom/tkay/expressad/exoplayer/h/x;)V
    .locals 0

    .line 37
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 38
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/b/b;->b:[I

    .line 39
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/h/b/b;->c:[Lcom/tkay/expressad/exoplayer/h/x;

    return-void
.end method


# virtual methods
.method public final a(I)Lcom/tkay/expressad/exoplayer/e/m;
    .locals 3

    const/4 v0, 0x0

    .line 44
    :goto_0
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/b/b;->b:[I

    array-length v2, v1

    if-ge v0, v2, :cond_1

    .line 45
    aget v1, v1, v0

    if-ne p1, v1, :cond_0

    .line 46
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/b/b;->c:[Lcom/tkay/expressad/exoplayer/h/x;

    aget-object p1, p1, v0

    return-object p1

    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 49
    :cond_1
    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    const-string v0, "Unmatched track of type: "

    invoke-virtual {v0, p1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "BaseMediaChunkOutput"

    invoke-static {v0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 50
    new-instance p1, Lcom/tkay/expressad/exoplayer/e/d;

    invoke-direct {p1}, Lcom/tkay/expressad/exoplayer/e/d;-><init>()V

    return-object p1
.end method

.method public final a(J)V
    .locals 4

    .line 71
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/b;->c:[Lcom/tkay/expressad/exoplayer/h/x;

    array-length v1, v0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_1

    aget-object v3, v0, v2

    if-eqz v3, :cond_0

    .line 73
    invoke-virtual {v3, p1, p2}, Lcom/tkay/expressad/exoplayer/h/x;->a(J)V

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method

.method public final a()[I
    .locals 4

    .line 57
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/b;->c:[Lcom/tkay/expressad/exoplayer/h/x;

    array-length v0, v0

    new-array v0, v0, [I

    const/4 v1, 0x0

    .line 58
    :goto_0
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/h/b/b;->c:[Lcom/tkay/expressad/exoplayer/h/x;

    array-length v3, v2

    if-ge v1, v3, :cond_1

    .line 59
    aget-object v3, v2, v1

    if-eqz v3, :cond_0

    .line 60
    aget-object v2, v2, v1

    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/h/x;->b()I

    move-result v2

    aput v2, v0, v1

    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    return-object v0
.end method
