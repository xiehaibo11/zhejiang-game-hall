.class final Lcom/tkay/expressad/splash/c/c$7;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/splash/c/e$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/splash/c/c;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/foundation/d/c;

.field final synthetic b:I

.field final synthetic c:Lcom/tkay/expressad/splash/c/c;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/splash/c/c;Lcom/tkay/expressad/foundation/d/c;I)V
    .locals 0

    .line 735
    iput-object p1, p0, Lcom/tkay/expressad/splash/c/c$7;->c:Lcom/tkay/expressad/splash/c/c;

    iput-object p2, p0, Lcom/tkay/expressad/splash/c/c$7;->a:Lcom/tkay/expressad/foundation/d/c;

    iput p3, p0, Lcom/tkay/expressad/splash/c/c$7;->b:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 3

    .line 738
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c$7;->a:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->s()Z

    move-result v0

    if-nez v0, :cond_0

    .line 739
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c$7;->c:Lcom/tkay/expressad/splash/c/c;

    iget-object v1, p0, Lcom/tkay/expressad/splash/c/c$7;->a:Lcom/tkay/expressad/foundation/d/c;

    iget v2, p0, Lcom/tkay/expressad/splash/c/c$7;->b:I

    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/splash/c/c;->c(Lcom/tkay/expressad/splash/c/c;Lcom/tkay/expressad/foundation/d/c;I)V

    :cond_0
    return-void
.end method

.method public final a(I)V
    .locals 2

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    .line 751
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/c$7;->c:Lcom/tkay/expressad/splash/c/c;

    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c$7;->a:Lcom/tkay/expressad/foundation/d/c;

    iget v1, p0, Lcom/tkay/expressad/splash/c/c$7;->b:I

    invoke-static {p1, v0, v1}, Lcom/tkay/expressad/splash/c/c;->c(Lcom/tkay/expressad/splash/c/c;Lcom/tkay/expressad/foundation/d/c;I)V

    return-void

    .line 753
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/c$7;->c:Lcom/tkay/expressad/splash/c/c;

    const-string v0, "readyState 2"

    invoke-static {p1, v0}, Lcom/tkay/expressad/splash/c/c;->b(Lcom/tkay/expressad/splash/c/c;Ljava/lang/String;)V

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 1

    .line 745
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/c$7;->c:Lcom/tkay/expressad/splash/c/c;

    invoke-static {v0, p1}, Lcom/tkay/expressad/splash/c/c;->b(Lcom/tkay/expressad/splash/c/c;Ljava/lang/String;)V

    return-void
.end method
