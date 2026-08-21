.class final Lcom/tkay/expressad/foundation/g/f/j$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/foundation/g/f/j;->a(Lcom/tkay/expressad/foundation/g/f/i;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/foundation/g/f/i;

.field final synthetic b:Lcom/tkay/expressad/foundation/g/f/j;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/foundation/g/f/j;Lcom/tkay/expressad/foundation/g/f/i;)V
    .locals 0

    .line 71
    iput-object p1, p0, Lcom/tkay/expressad/foundation/g/f/j$2;->b:Lcom/tkay/expressad/foundation/g/f/j;

    iput-object p2, p0, Lcom/tkay/expressad/foundation/g/f/j$2;->a:Lcom/tkay/expressad/foundation/g/f/i;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 75
    new-instance v0, Lcom/tkay/expressad/foundation/g/f/h;

    iget-object v1, p0, Lcom/tkay/expressad/foundation/g/f/j$2;->b:Lcom/tkay/expressad/foundation/g/f/j;

    .line 76
    invoke-static {v1}, Lcom/tkay/expressad/foundation/g/f/j;->a(Lcom/tkay/expressad/foundation/g/f/j;)Landroid/content/Context;

    iget-object v1, p0, Lcom/tkay/expressad/foundation/g/f/j$2;->b:Lcom/tkay/expressad/foundation/g/f/j;

    invoke-static {v1}, Lcom/tkay/expressad/foundation/g/f/j;->b(Lcom/tkay/expressad/foundation/g/f/j;)Lcom/tkay/expressad/foundation/g/f/c;

    move-result-object v1

    const/4 v2, 0x0

    invoke-direct {v0, v2, v1}, Lcom/tkay/expressad/foundation/g/f/h;-><init>(Ljavax/net/ssl/SSLSocketFactory;Lcom/tkay/expressad/foundation/g/f/c;)V

    .line 77
    iget-object v1, p0, Lcom/tkay/expressad/foundation/g/f/j$2;->a:Lcom/tkay/expressad/foundation/g/f/i;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/g/f/h;->a(Lcom/tkay/expressad/foundation/g/f/i;)V

    return-void
.end method
