.class public abstract Lcom/tramini/plugin/a/b/a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "<T:",
        "Ljava/lang/Object;",
        ">",
        "Ljava/lang/Object;"
    }
.end annotation


# instance fields
.field private a:Lcom/tramini/plugin/a/b/b;


# direct methods
.method private constructor <init>(Lcom/tramini/plugin/a/b/b;)V
    .locals 0

    .line 16
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 17
    iput-object p1, p0, Lcom/tramini/plugin/a/b/a;->a:Lcom/tramini/plugin/a/b/b;

    return-void
.end method

.method private d()Landroid/database/sqlite/SQLiteDatabase;
    .locals 1

    .line 27
    iget-object v0, p0, Lcom/tramini/plugin/a/b/a;->a:Lcom/tramini/plugin/a/b/b;

    invoke-virtual {v0}, Lcom/tramini/plugin/a/b/b;->a()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    return-object v0
.end method

.method private e()Landroid/database/sqlite/SQLiteDatabase;
    .locals 1

    .line 31
    iget-object v0, p0, Lcom/tramini/plugin/a/b/a;->a:Lcom/tramini/plugin/a/b/b;

    invoke-virtual {v0}, Lcom/tramini/plugin/a/b/b;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    return-object v0
.end method


# virtual methods
.method public abstract a()J
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()J"
        }
    .end annotation
.end method

.method public abstract b()J
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()J"
        }
    .end annotation
.end method

.method protected abstract c()Z
.end method
