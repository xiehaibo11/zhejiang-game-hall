.class Lcom/igexin/push/core/p;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Landroid/content/ContentValues;

.field final synthetic b:Lcom/igexin/push/core/n;


# direct methods
.method constructor <init>(Lcom/igexin/push/core/n;Landroid/content/ContentValues;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/core/p;->b:Lcom/igexin/push/core/n;

    iput-object p2, p0, Lcom/igexin/push/core/p;->a:Landroid/content/ContentValues;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    invoke-static {}, Lcom/igexin/push/core/c;->a()Lcom/igexin/push/core/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/core/c;->k()Lcom/igexin/push/b/b;

    move-result-object v0

    iget-object v1, p0, Lcom/igexin/push/core/p;->a:Landroid/content/ContentValues;

    const-string v2, "message"

    invoke-virtual {v0, v2, v1}, Lcom/igexin/push/b/b;->a(Ljava/lang/String;Landroid/content/ContentValues;)Z

    return-void
.end method
