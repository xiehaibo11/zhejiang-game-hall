.class final Lcom/tkay/expressad/mbbanner/a/e/a$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/mbbanner/a/e/a;->a(Lcom/tkay/expressad/mbbanner/a/c/b;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/mbbanner/a/c/b;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Lcom/tkay/expressad/mbbanner/a/e/a;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/mbbanner/a/e/a;Lcom/tkay/expressad/mbbanner/a/c/b;Ljava/lang/String;)V
    .locals 0

    .line 60
    iput-object p1, p0, Lcom/tkay/expressad/mbbanner/a/e/a$3;->c:Lcom/tkay/expressad/mbbanner/a/e/a;

    iput-object p2, p0, Lcom/tkay/expressad/mbbanner/a/e/a$3;->a:Lcom/tkay/expressad/mbbanner/a/c/b;

    iput-object p3, p0, Lcom/tkay/expressad/mbbanner/a/e/a$3;->b:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 63
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/e/a$3;->a:Lcom/tkay/expressad/mbbanner/a/c/b;

    if-eqz v0, :cond_0

    .line 64
    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/e/a$3;->c:Lcom/tkay/expressad/mbbanner/a/e/a;

    invoke-static {v1}, Lcom/tkay/expressad/mbbanner/a/e/a;->a(Lcom/tkay/expressad/mbbanner/a/e/a;)Z

    invoke-interface {v0}, Lcom/tkay/expressad/mbbanner/a/c/b;->a()V

    :cond_0
    return-void
.end method
