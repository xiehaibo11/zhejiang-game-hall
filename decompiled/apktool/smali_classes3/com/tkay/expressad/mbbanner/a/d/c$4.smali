.class final Lcom/tkay/expressad/mbbanner/a/d/c$4;
.super Lcom/tkay/expressad/foundation/g/g/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/mbbanner/a/d/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/mbbanner/a/d/c;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/mbbanner/a/d/c;)V
    .locals 0

    .line 110
    iput-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c$4;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    invoke-direct {p0}, Lcom/tkay/expressad/foundation/g/g/a;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 2

    .line 113
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/c$4;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    const-string v1, "banner render failed because render is timeout"

    invoke-static {v0, v1}, Lcom/tkay/expressad/mbbanner/a/d/c;->a(Lcom/tkay/expressad/mbbanner/a/d/c;Ljava/lang/String;)V

    return-void
.end method

.method public final b()V
    .locals 0

    return-void
.end method

.method public final c()V
    .locals 0

    return-void
.end method
