.class Lcom/igexin/push/core/b/f;
.super Lcom/igexin/push/b/d;


# instance fields
.field final synthetic a:Lcom/igexin/push/core/b/e;


# direct methods
.method constructor <init>(Lcom/igexin/push/core/b/e;Landroid/content/ContentValues;)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/core/b/f;->a:Lcom/igexin/push/core/b/e;

    invoke-direct {p0, p2}, Lcom/igexin/push/b/d;-><init>(Landroid/content/ContentValues;)V

    return-void
.end method


# virtual methods
.method public a()V
    .locals 4

    iget-object v0, p0, Lcom/igexin/push/core/b/f;->d:Landroid/database/sqlite/SQLiteDatabase;

    iget-object v1, p0, Lcom/igexin/push/core/b/f;->f:Landroid/content/ContentValues;

    const-string v2, "ral"

    const/4 v3, 0x0

    invoke-virtual {v0, v2, v3, v1}, Landroid/database/sqlite/SQLiteDatabase;->replace(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J

    return-void
.end method
