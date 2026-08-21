.class Lcom/igexin/push/core/q;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Landroid/content/ContentValues;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Lcom/igexin/push/core/n;


# direct methods
.method constructor <init>(Lcom/igexin/push/core/n;Landroid/content/ContentValues;Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/core/q;->c:Lcom/igexin/push/core/n;

    iput-object p2, p0, Lcom/igexin/push/core/q;->a:Landroid/content/ContentValues;

    iput-object p3, p0, Lcom/igexin/push/core/q;->b:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 6

    invoke-static {}, Lcom/igexin/push/core/c;->a()Lcom/igexin/push/core/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/core/c;->k()Lcom/igexin/push/b/b;

    move-result-object v0

    iget-object v1, p0, Lcom/igexin/push/core/q;->a:Landroid/content/ContentValues;

    const-string v2, "taskid"

    filled-new-array {v2}, [Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x1

    new-array v3, v3, [Ljava/lang/String;

    iget-object v4, p0, Lcom/igexin/push/core/q;->b:Ljava/lang/String;

    const/4 v5, 0x0

    aput-object v4, v3, v5

    const-string v4, "message"

    invoke-virtual {v0, v4, v1, v2, v3}, Lcom/igexin/push/b/b;->a(Ljava/lang/String;Landroid/content/ContentValues;[Ljava/lang/String;[Ljava/lang/String;)V

    return-void
.end method
