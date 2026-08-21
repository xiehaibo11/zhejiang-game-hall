.class public Lcom/xiaomi/push/cj$c;
.super Lcom/xiaomi/push/cj$a;


# instance fields
.field private a:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/xiaomi/push/cj$a;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/util/ArrayList;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/ArrayList<",
            "Lcom/xiaomi/push/cj$a;",
            ">;)V"
        }
    .end annotation

    invoke-direct {p0, p1}, Lcom/xiaomi/push/cj$a;-><init>(Ljava/lang/String;)V

    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/xiaomi/push/cj$c;->a:Ljava/util/ArrayList;

    invoke-virtual {p1, p2}, Ljava/util/ArrayList;->addAll(Ljava/util/Collection;)Z

    return-void
.end method


# virtual methods
.method public final a(Landroid/content/Context;)V
    .locals 2

    invoke-super {p0, p1}, Lcom/xiaomi/push/cj$a;->a(Landroid/content/Context;)V

    iget-object v0, p0, Lcom/xiaomi/push/cj$c;->a:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/xiaomi/push/cj$a;

    if-eqz v1, :cond_0

    invoke-virtual {v1, p1}, Lcom/xiaomi/push/cj$a;->a(Landroid/content/Context;)V

    goto :goto_0

    :cond_1
    return-void
.end method

.method public a(Landroid/content/Context;Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 2

    iget-object v0, p0, Lcom/xiaomi/push/cj$c;->a:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/xiaomi/push/cj$a;

    if-eqz v1, :cond_0

    invoke-virtual {v1, p1, p2}, Lcom/xiaomi/push/cj$a;->a(Landroid/content/Context;Landroid/database/sqlite/SQLiteDatabase;)V

    goto :goto_0

    :cond_1
    return-void
.end method
