.class public final Lcom/tkay/expressad/foundation/c/a;
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
.field protected a:Lcom/tkay/expressad/foundation/c/b;


# direct methods
.method private constructor <init>(Lcom/tkay/expressad/foundation/c/b;)V
    .locals 1

    .line 9
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 7
    iput-object v0, p0, Lcom/tkay/expressad/foundation/c/a;->a:Lcom/tkay/expressad/foundation/c/b;

    .line 10
    iput-object p1, p0, Lcom/tkay/expressad/foundation/c/a;->a:Lcom/tkay/expressad/foundation/c/b;

    return-void
.end method

.method private a()Landroid/database/sqlite/SQLiteDatabase;
    .locals 1

    .line 14
    iget-object v0, p0, Lcom/tkay/expressad/foundation/c/a;->a:Lcom/tkay/expressad/foundation/c/b;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/c/b;->a()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    return-object v0
.end method

.method private b()Landroid/database/sqlite/SQLiteDatabase;
    .locals 1

    .line 18
    iget-object v0, p0, Lcom/tkay/expressad/foundation/c/a;->a:Lcom/tkay/expressad/foundation/c/b;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/c/b;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    return-object v0
.end method
