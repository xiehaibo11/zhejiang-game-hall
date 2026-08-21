.class Lcom/igexin/assist/action/a;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Z

.field final synthetic c:Lcom/igexin/assist/action/MessageManger;


# direct methods
.method constructor <init>(Lcom/igexin/assist/action/MessageManger;Ljava/lang/String;Z)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/assist/action/a;->c:Lcom/igexin/assist/action/MessageManger;

    iput-object p2, p0, Lcom/igexin/assist/action/a;->a:Ljava/lang/String;

    iput-boolean p3, p0, Lcom/igexin/assist/action/a;->b:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    sget-object v0, Lcom/igexin/push/core/d;->h:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/igexin/assist/action/a;->c:Lcom/igexin/assist/action/MessageManger;

    iget-object v1, p0, Lcom/igexin/assist/action/a;->a:Ljava/lang/String;

    iget-boolean v2, p0, Lcom/igexin/assist/action/a;->b:Z

    invoke-static {v0, v1, v2}, Lcom/igexin/assist/action/MessageManger;->a(Lcom/igexin/assist/action/MessageManger;Ljava/lang/String;Z)V

    :cond_0
    return-void
.end method
