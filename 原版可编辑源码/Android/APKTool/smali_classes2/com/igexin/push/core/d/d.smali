.class public Lcom/igexin/push/core/d/d;
.super Lcom/igexin/push/core/d/e;


# static fields
.field private static final a:Lcom/igexin/push/core/d/d;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Lcom/igexin/push/core/d/d;

    invoke-direct {v0}, Lcom/igexin/push/core/d/d;-><init>()V

    sput-object v0, Lcom/igexin/push/core/d/d;->a:Lcom/igexin/push/core/d/d;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/igexin/push/core/d/e;-><init>()V

    return-void
.end method

.method public static a()Lcom/igexin/push/core/d/d;
    .locals 1

    sget-object v0, Lcom/igexin/push/core/d/d;->a:Lcom/igexin/push/core/d/d;

    return-object v0
.end method


# virtual methods
.method public bridge synthetic a(Landroid/content/Context;)Ljava/lang/String;
    .locals 0

    invoke-super {p0, p1}, Lcom/igexin/push/core/d/e;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public bridge synthetic a(Landroid/content/Context;J)V
    .locals 0

    invoke-super {p0, p1, p2, p3}, Lcom/igexin/push/core/d/e;->a(Landroid/content/Context;J)V

    return-void
.end method

.method public bridge synthetic a(Landroid/content/Context;Ljava/lang/String;)V
    .locals 0

    invoke-super {p0, p1, p2}, Lcom/igexin/push/core/d/e;->a(Landroid/content/Context;Ljava/lang/String;)V

    return-void
.end method

.method public bridge synthetic b(Landroid/content/Context;)Ljava/lang/String;
    .locals 0

    invoke-super {p0, p1}, Lcom/igexin/push/core/d/e;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public bridge synthetic b(Landroid/content/Context;Ljava/lang/String;)V
    .locals 0

    invoke-super {p0, p1, p2}, Lcom/igexin/push/core/d/e;->b(Landroid/content/Context;Ljava/lang/String;)V

    return-void
.end method

.method public bridge synthetic c(Landroid/content/Context;)J
    .locals 2

    invoke-super {p0, p1}, Lcom/igexin/push/core/d/e;->c(Landroid/content/Context;)J

    move-result-wide v0

    return-wide v0
.end method
