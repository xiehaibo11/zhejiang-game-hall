.class Lcom/igexin/push/core/b/j;
.super Lcom/igexin/push/b/d;


# instance fields
.field final synthetic a:Lcom/igexin/push/core/b/i;


# direct methods
.method constructor <init>(Lcom/igexin/push/core/b/i;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/core/b/j;->a:Lcom/igexin/push/core/b/i;

    invoke-direct {p0}, Lcom/igexin/push/b/d;-><init>()V

    return-void
.end method


# virtual methods
.method public a()V
    .locals 4

    iget-object v0, p0, Lcom/igexin/push/core/b/j;->a:Lcom/igexin/push/core/b/i;

    iget-object v1, p0, Lcom/igexin/push/core/b/j;->d:Landroid/database/sqlite/SQLiteDatabase;

    invoke-virtual {v0, v1}, Lcom/igexin/push/core/b/i;->c(Landroid/database/sqlite/SQLiteDatabase;)V

    invoke-static {}, Lcom/igexin/push/core/d/d;->a()Lcom/igexin/push/core/d/d;

    move-result-object v0

    sget-object v1, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    sget-object v2, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/igexin/push/core/d/d;->b(Landroid/content/Context;Ljava/lang/String;)V

    invoke-static {}, Lcom/igexin/push/core/d/d;->a()Lcom/igexin/push/core/d/d;

    move-result-object v0

    sget-object v1, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    sget-wide v2, Lcom/igexin/push/core/d;->t:J

    invoke-virtual {v0, v1, v2, v3}, Lcom/igexin/push/core/d/d;->a(Landroid/content/Context;J)V

    return-void
.end method
