.class public final Lcom/tkay/expressad/video/signal/a/c$b;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/video/signal/c$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/video/signal/a/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "b"
.end annotation


# instance fields
.field private a:Lcom/tkay/expressad/video/signal/c;

.field private b:Lcom/tkay/expressad/video/signal/c$a;


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/video/signal/c;Lcom/tkay/expressad/video/signal/c$a;)V
    .locals 0

    .line 269
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 270
    iput-object p1, p0, Lcom/tkay/expressad/video/signal/a/c$b;->a:Lcom/tkay/expressad/video/signal/c;

    .line 271
    iput-object p2, p0, Lcom/tkay/expressad/video/signal/a/c$b;->b:Lcom/tkay/expressad/video/signal/c$a;

    return-void
.end method


# virtual methods
.method public final a(ILjava/lang/String;)V
    .locals 1

    .line 357
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/c$b;->b:Lcom/tkay/expressad/video/signal/c$a;

    if-eqz v0, :cond_0

    .line 358
    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/video/signal/c$a;->a(ILjava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;)V
    .locals 1

    .line 295
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/c$b;->b:Lcom/tkay/expressad/video/signal/c$a;

    if-eqz v0, :cond_0

    .line 296
    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/video/signal/c$a;->a(Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/d/c;Z)V
    .locals 1

    .line 350
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/c$b;->b:Lcom/tkay/expressad/video/signal/c$a;

    if-eqz v0, :cond_0

    .line 351
    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/video/signal/c$a;->a(Lcom/tkay/expressad/foundation/d/c;Z)V

    :cond_0
    return-void
.end method

.method public final a(Lcom/tkay/expressad/out/d;)V
    .locals 1

    .line 281
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/c$b;->b:Lcom/tkay/expressad/video/signal/c$a;

    if-eqz v0, :cond_0

    .line 282
    invoke-interface {v0, p1}, Lcom/tkay/expressad/video/signal/c$a;->a(Lcom/tkay/expressad/out/d;)V

    :cond_0
    return-void
.end method

.method public final a(Lcom/tkay/expressad/out/d;Ljava/lang/String;)V
    .locals 1

    .line 302
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/c$b;->b:Lcom/tkay/expressad/video/signal/c$a;

    if-eqz v0, :cond_0

    .line 303
    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/video/signal/c$a;->a(Lcom/tkay/expressad/out/d;Ljava/lang/String;)V

    .line 305
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/a/c$b;->a:Lcom/tkay/expressad/video/signal/c;

    if-eqz p1, :cond_1

    .line 306
    invoke-interface {p1}, Lcom/tkay/expressad/video/signal/c;->j()V

    :cond_1
    return-void
.end method

.method public final a()Z
    .locals 1

    .line 276
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/c$b;->b:Lcom/tkay/expressad/video/signal/c$a;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/c$a;->a()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final b()V
    .locals 0

    return-void
.end method

.method public final b(Lcom/tkay/expressad/out/d;)V
    .locals 1

    .line 288
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/c$b;->b:Lcom/tkay/expressad/video/signal/c$a;

    if-eqz v0, :cond_0

    .line 289
    invoke-interface {v0, p1}, Lcom/tkay/expressad/video/signal/c$a;->b(Lcom/tkay/expressad/out/d;)V

    :cond_0
    return-void
.end method

.method public final b(Lcom/tkay/expressad/out/d;Ljava/lang/String;)V
    .locals 1

    .line 312
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/c$b;->b:Lcom/tkay/expressad/video/signal/c$a;

    if-eqz v0, :cond_0

    .line 313
    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/video/signal/c$a;->b(Lcom/tkay/expressad/out/d;Ljava/lang/String;)V

    .line 315
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/a/c$b;->a:Lcom/tkay/expressad/video/signal/c;

    if-eqz p1, :cond_1

    .line 316
    invoke-interface {p1}, Lcom/tkay/expressad/video/signal/c;->j()V

    :cond_1
    return-void
.end method

.method public final c()V
    .locals 1

    .line 343
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/c$b;->b:Lcom/tkay/expressad/video/signal/c$a;

    if-eqz v0, :cond_0

    .line 344
    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/c$a;->c()V

    :cond_0
    return-void
.end method

.method public final c(Lcom/tkay/expressad/out/d;)V
    .locals 1

    .line 322
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/c$b;->b:Lcom/tkay/expressad/video/signal/c$a;

    if-eqz v0, :cond_0

    .line 323
    invoke-interface {v0, p1}, Lcom/tkay/expressad/video/signal/c$a;->c(Lcom/tkay/expressad/out/d;)V

    :cond_0
    return-void
.end method

.method public final d()V
    .locals 1

    .line 364
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/c$b;->b:Lcom/tkay/expressad/video/signal/c$a;

    if-eqz v0, :cond_0

    .line 365
    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/c$a;->d()V

    :cond_0
    return-void
.end method

.method public final d(Lcom/tkay/expressad/out/d;)V
    .locals 1

    .line 329
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/c$b;->b:Lcom/tkay/expressad/video/signal/c$a;

    if-eqz v0, :cond_0

    .line 330
    invoke-interface {v0, p1}, Lcom/tkay/expressad/video/signal/c$a;->d(Lcom/tkay/expressad/out/d;)V

    :cond_0
    return-void
.end method
