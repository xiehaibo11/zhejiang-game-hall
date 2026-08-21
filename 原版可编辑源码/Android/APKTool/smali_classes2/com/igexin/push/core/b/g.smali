.class Lcom/igexin/push/core/b/g;
.super Lcom/igexin/push/b/d;


# instance fields
.field final synthetic a:J

.field final synthetic b:Lcom/igexin/push/core/b/e;


# direct methods
.method constructor <init>(Lcom/igexin/push/core/b/e;Landroid/content/ContentValues;J)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/core/b/g;->b:Lcom/igexin/push/core/b/e;

    iput-wide p3, p0, Lcom/igexin/push/core/b/g;->a:J

    invoke-direct {p0, p2}, Lcom/igexin/push/b/d;-><init>(Landroid/content/ContentValues;)V

    return-void
.end method


# virtual methods
.method public a()V
    .locals 4

    iget-object v0, p0, Lcom/igexin/push/core/b/g;->d:Landroid/database/sqlite/SQLiteDatabase;

    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/String;

    iget-wide v2, p0, Lcom/igexin/push/core/b/g;->a:J

    invoke-static {v2, v3}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x0

    aput-object v2, v1, v3

    const-string v2, "ral"

    const-string v3, "id=?"

    invoke-virtual {v0, v2, v3, v1}, Landroid/database/sqlite/SQLiteDatabase;->delete(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I

    return-void
.end method
