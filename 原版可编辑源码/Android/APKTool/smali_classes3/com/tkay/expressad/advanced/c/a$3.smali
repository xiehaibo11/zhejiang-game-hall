.class final Lcom/tkay/expressad/advanced/c/a$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/advanced/c/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/advanced/c/a;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/advanced/c/a;)V
    .locals 0

    .line 151
    iput-object p1, p0, Lcom/tkay/expressad/advanced/c/a$3;->a:Lcom/tkay/expressad/advanced/c/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 154
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a$3;->a:Lcom/tkay/expressad/advanced/c/a;

    invoke-static {v0}, Lcom/tkay/expressad/advanced/c/a;->c(Lcom/tkay/expressad/advanced/c/a;)Ljava/lang/String;

    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/a$3;->a:Lcom/tkay/expressad/advanced/c/a;

    invoke-static {v1}, Lcom/tkay/expressad/advanced/c/a;->b(Lcom/tkay/expressad/advanced/c/a;)I

    move-result v1

    const-string v2, "load timeout"

    invoke-static {v0, v2, v1}, Lcom/tkay/expressad/advanced/c/a;->a(Lcom/tkay/expressad/advanced/c/a;Ljava/lang/String;I)V

    return-void
.end method
