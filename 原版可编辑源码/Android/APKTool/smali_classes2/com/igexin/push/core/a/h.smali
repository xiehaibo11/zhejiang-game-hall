.class Lcom/igexin/push/core/a/h;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Lcom/igexin/push/core/bean/PushTaskBean;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Lcom/igexin/push/core/a/e;


# direct methods
.method constructor <init>(Lcom/igexin/push/core/a/e;Lcom/igexin/push/core/bean/PushTaskBean;Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/core/a/h;->c:Lcom/igexin/push/core/a/e;

    iput-object p2, p0, Lcom/igexin/push/core/a/h;->a:Lcom/igexin/push/core/bean/PushTaskBean;

    iput-object p3, p0, Lcom/igexin/push/core/a/h;->b:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    iget-object v0, p0, Lcom/igexin/push/core/a/h;->c:Lcom/igexin/push/core/a/e;

    iget-object v1, p0, Lcom/igexin/push/core/a/h;->a:Lcom/igexin/push/core/bean/PushTaskBean;

    iget-object v2, p0, Lcom/igexin/push/core/a/h;->b:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/igexin/push/core/a/e;->b(Lcom/igexin/push/core/bean/PushTaskBean;Ljava/lang/String;)V

    return-void
.end method
