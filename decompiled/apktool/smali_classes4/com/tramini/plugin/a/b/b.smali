.class public abstract Lcom/tramini/plugin/a/b/b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tramini/plugin/a/b/b$a;
    }
.end annotation


# instance fields
.field private a:Lcom/tramini/plugin/a/b/b$a;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    .line 20
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 21
    new-instance v0, Lcom/tramini/plugin/a/b/b$a;

    invoke-virtual {p0}, Lcom/tramini/plugin/a/b/b;->c()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, p0, p1, v1}, Lcom/tramini/plugin/a/b/b$a;-><init>(Lcom/tramini/plugin/a/b/b;Landroid/content/Context;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/tramini/plugin/a/b/b;->a:Lcom/tramini/plugin/a/b/b$a;

    return-void
.end method


# virtual methods
.method public final a()Landroid/database/sqlite/SQLiteDatabase;
    .locals 1

    .line 25
    iget-object v0, p0, Lcom/tramini/plugin/a/b/b;->a:Lcom/tramini/plugin/a/b/b$a;

    invoke-virtual {v0}, Lcom/tramini/plugin/a/b/b$a;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    return-object v0
.end method

.method public final declared-synchronized b()Landroid/database/sqlite/SQLiteDatabase;
    .locals 1

    monitor-enter p0

    .line 31
    :try_start_0
    iget-object v0, p0, Lcom/tramini/plugin/a/b/b;->a:Lcom/tramini/plugin/a/b/b$a;

    invoke-virtual {v0}, Lcom/tramini/plugin/a/b/b$a;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0

    :catch_0
    const/4 v0, 0x0

    .line 35
    :goto_0
    monitor-exit p0

    return-object v0
.end method

.method protected abstract c()Ljava/lang/String;
.end method

.method protected abstract d()I
.end method

.method protected abstract e()V
.end method

.method protected abstract f()V
.end method

.method protected abstract g()V
.end method
