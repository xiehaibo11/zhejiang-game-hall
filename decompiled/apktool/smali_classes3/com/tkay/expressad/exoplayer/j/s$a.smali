.class public abstract Lcom/tkay/expressad/exoplayer/j/s$a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/j/s$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/j/s;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x409
    name = "a"
.end annotation


# instance fields
.field private final a:Lcom/tkay/expressad/exoplayer/j/s$f;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 173
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 174
    new-instance v0, Lcom/tkay/expressad/exoplayer/j/s$f;

    invoke-direct {v0}, Lcom/tkay/expressad/exoplayer/j/s$f;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/j/s$a;->a:Lcom/tkay/expressad/exoplayer/j/s$f;

    return-void
.end method


# virtual methods
.method public final synthetic a()Lcom/tkay/expressad/exoplayer/j/h;
    .locals 1

    .line 169
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/j/s$a;->b()Lcom/tkay/expressad/exoplayer/j/s;

    move-result-object v0

    return-object v0
.end method

.method protected abstract a(Lcom/tkay/expressad/exoplayer/j/s$f;)Lcom/tkay/expressad/exoplayer/j/s;
.end method

.method public final a(Ljava/lang/String;)V
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 196
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/s$a;->a:Lcom/tkay/expressad/exoplayer/j/s$f;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/j/s$f;->a(Ljava/lang/String;)V

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 190
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/s$a;->a:Lcom/tkay/expressad/exoplayer/j/s$f;

    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/exoplayer/j/s$f;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final b()Lcom/tkay/expressad/exoplayer/j/s;
    .locals 1

    .line 179
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/s$a;->a:Lcom/tkay/expressad/exoplayer/j/s$f;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/j/s$a;->a(Lcom/tkay/expressad/exoplayer/j/s$f;)Lcom/tkay/expressad/exoplayer/j/s;

    move-result-object v0

    return-object v0
.end method

.method public final c()Lcom/tkay/expressad/exoplayer/j/s$f;
    .locals 1

    .line 184
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/s$a;->a:Lcom/tkay/expressad/exoplayer/j/s$f;

    return-object v0
.end method

.method public final d()V
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 202
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/s$a;->a:Lcom/tkay/expressad/exoplayer/j/s$f;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/j/s$f;->a()V

    return-void
.end method
