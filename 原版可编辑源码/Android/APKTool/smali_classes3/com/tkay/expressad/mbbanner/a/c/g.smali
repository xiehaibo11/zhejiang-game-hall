.class public Lcom/tkay/expressad/mbbanner/a/c/g;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/foundation/g/d/c;


# static fields
.field private static final a:Ljava/lang/String;


# instance fields
.field private b:Lcom/tkay/expressad/mbbanner/a/d/b;

.field private c:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 12
    const-class v0, Lcom/tkay/expressad/mbbanner/a/c/g;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/expressad/mbbanner/a/c/g;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Lcom/tkay/expressad/mbbanner/a/d/b;Ljava/lang/String;)V
    .locals 0

    .line 17
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 19
    iput-object p1, p0, Lcom/tkay/expressad/mbbanner/a/c/g;->b:Lcom/tkay/expressad/mbbanner/a/d/b;

    .line 21
    iput-object p2, p0, Lcom/tkay/expressad/mbbanner/a/c/g;->c:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public final a(Landroid/graphics/Bitmap;Ljava/lang/String;)V
    .locals 2

    .line 27
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/c/g;->b:Lcom/tkay/expressad/mbbanner/a/d/b;

    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/c/g;->c:Ljava/lang/String;

    const/4 v1, 0x1

    invoke-virtual {p1, v0, v1, p2, v1}, Lcom/tkay/expressad/mbbanner/a/d/b;->a(Ljava/lang/String;ILjava/lang/String;Z)V

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 34
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/c/g;->b:Lcom/tkay/expressad/mbbanner/a/d/b;

    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/c/g;->c:Ljava/lang/String;

    const/4 v1, 0x1

    const/4 v2, 0x0

    invoke-virtual {p1, v0, v1, p2, v2}, Lcom/tkay/expressad/mbbanner/a/d/b;->a(Ljava/lang/String;ILjava/lang/String;Z)V

    return-void
.end method
