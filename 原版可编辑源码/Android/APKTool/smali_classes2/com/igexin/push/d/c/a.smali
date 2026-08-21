.class public Lcom/igexin/push/d/c/a;
.super Ljava/lang/Object;


# instance fields
.field public a:I

.field public b:B

.field public c:B

.field public d:B

.field public e:[B

.field public f:I

.field public g:B


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a([B)V
    .locals 0

    if-nez p1, :cond_0

    const/4 p1, 0x0

    goto :goto_0

    :cond_0
    iput-object p1, p0, Lcom/igexin/push/d/c/a;->e:[B

    array-length p1, p1

    :goto_0
    iput p1, p0, Lcom/igexin/push/d/c/a;->a:I

    return-void
.end method
