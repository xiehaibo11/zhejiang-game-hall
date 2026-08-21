.class final Lcom/tramini/plugin/a/b/b$a;
.super Landroid/database/sqlite/SQLiteOpenHelper;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tramini/plugin/a/b/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "a"
.end annotation


# instance fields
.field final synthetic a:Lcom/tramini/plugin/a/b/b;


# direct methods
.method public constructor <init>(Lcom/tramini/plugin/a/b/b;Landroid/content/Context;Ljava/lang/String;)V
    .locals 1

    .line 50
    iput-object p1, p0, Lcom/tramini/plugin/a/b/b$a;->a:Lcom/tramini/plugin/a/b/b;

    const/4 p1, 0x0

    const/4 v0, 0x2

    .line 51
    invoke-direct {p0, p2, p3, p1, v0}, Landroid/database/sqlite/SQLiteOpenHelper;-><init>(Landroid/content/Context;Ljava/lang/String;Landroid/database/sqlite/SQLiteDatabase$CursorFactory;I)V

    return-void
.end method


# virtual methods
.method public final onCreate(Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 0

    return-void
.end method

.method public final onDowngrade(Landroid/database/sqlite/SQLiteDatabase;II)V
    .locals 0

    return-void
.end method

.method public final onUpgrade(Landroid/database/sqlite/SQLiteDatabase;II)V
    .locals 0

    return-void
.end method
