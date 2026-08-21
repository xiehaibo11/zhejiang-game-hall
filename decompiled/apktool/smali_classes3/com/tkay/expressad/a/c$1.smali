.class final Lcom/tkay/expressad/a/c$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/foundation/g/g/a$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/a/c;->a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/a/e;Lcom/tkay/expressad/c/b;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/a/c;


# direct methods
.method private constructor <init>(Lcom/tkay/expressad/a/c;)V
    .locals 0

    .line 102
    iput-object p1, p0, Lcom/tkay/expressad/a/c$1;->a:Lcom/tkay/expressad/a/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/expressad/foundation/g/g/a$a;)V
    .locals 1

    .line 106
    sget-object v0, Lcom/tkay/expressad/foundation/g/g/a$a;->e:Lcom/tkay/expressad/foundation/g/g/a$a;

    if-ne p1, v0, :cond_1

    .line 107
    iget-object p1, p0, Lcom/tkay/expressad/a/c$1;->a:Lcom/tkay/expressad/a/c;

    invoke-static {p1}, Lcom/tkay/expressad/a/c;->a(Lcom/tkay/expressad/a/c;)Z

    move-result p1

    if-nez p1, :cond_0

    return-void

    .line 111
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/a/c$1;->a:Lcom/tkay/expressad/a/c;

    invoke-static {p1}, Lcom/tkay/expressad/a/c;->c(Lcom/tkay/expressad/a/c;)Landroid/os/Handler;

    move-result-object p1

    new-instance v0, Lcom/tkay/expressad/a/c$1$1;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/a/c$1$1;-><init>(Lcom/tkay/expressad/a/c$1;)V

    invoke-virtual {p1, v0}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :cond_1
    return-void
.end method
