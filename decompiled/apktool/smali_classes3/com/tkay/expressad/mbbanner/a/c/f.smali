.class public Lcom/tkay/expressad/mbbanner/a/c/f;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/videocommon/b/g$b;


# static fields
.field private static final a:Ljava/lang/String;


# instance fields
.field private b:Lcom/tkay/expressad/mbbanner/a/d/b;

.field private c:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 10
    const-class v0, Lcom/tkay/expressad/mbbanner/a/c/f;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/expressad/mbbanner/a/c/f;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Lcom/tkay/expressad/mbbanner/a/d/b;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 16
    iput-object p1, p0, Lcom/tkay/expressad/mbbanner/a/c/f;->b:Lcom/tkay/expressad/mbbanner/a/d/b;

    .line 17
    iput-object p2, p0, Lcom/tkay/expressad/mbbanner/a/c/f;->c:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;)V
    .locals 4

    .line 23
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/c/f;->b:Lcom/tkay/expressad/mbbanner/a/d/b;

    if-eqz v0, :cond_0

    .line 24
    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/c/f;->c:Ljava/lang/String;

    const/4 v2, 0x3

    const/4 v3, 0x1

    invoke-virtual {v0, v1, v2, p1, v3}, Lcom/tkay/expressad/mbbanner/a/d/b;->a(Ljava/lang/String;ILjava/lang/String;Z)V

    :cond_0
    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 31
    iget-object p2, p0, Lcom/tkay/expressad/mbbanner/a/c/f;->b:Lcom/tkay/expressad/mbbanner/a/d/b;

    if-eqz p2, :cond_0

    .line 32
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/c/f;->c:Ljava/lang/String;

    const/4 v1, 0x3

    const/4 v2, 0x0

    invoke-virtual {p2, v0, v1, p1, v2}, Lcom/tkay/expressad/mbbanner/a/d/b;->a(Ljava/lang/String;ILjava/lang/String;Z)V

    :cond_0
    return-void
.end method
