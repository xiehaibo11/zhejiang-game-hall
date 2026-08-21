.class Lcom/igexin/push/core/a/f;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/igexin/push/core/a/e;


# direct methods
.method constructor <init>(Lcom/igexin/push/core/a/e;Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/core/a/f;->b:Lcom/igexin/push/core/a/e;

    iput-object p2, p0, Lcom/igexin/push/core/a/f;->a:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    iget-object v0, p0, Lcom/igexin/push/core/a/f;->b:Lcom/igexin/push/core/a/e;

    iget-object v1, p0, Lcom/igexin/push/core/a/f;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/igexin/push/core/a/e;->b(Ljava/lang/String;)V

    return-void
.end method
