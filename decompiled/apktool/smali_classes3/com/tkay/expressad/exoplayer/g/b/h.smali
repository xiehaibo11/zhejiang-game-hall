.class public abstract Lcom/tkay/expressad/exoplayer/g/b/h;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/g/a$a;


# instance fields
.field public final g:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;)V
    .locals 0

    .line 31
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 32
    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/k/a;->a(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/g/b/h;->g:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public describeContents()I
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public toString()Ljava/lang/String;
    .locals 1

    .line 37
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/g/b/h;->g:Ljava/lang/String;

    return-object v0
.end method
