.class public final Lcom/tkay/core/b/c/a;
.super Ljava/lang/Object;


# instance fields
.field a:Lcom/tkay/core/api/TYBaseAdAdapter;

.field b:Lcom/tkay/core/api/BaseAd;


# direct methods
.method public constructor <init>(Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/api/BaseAd;)V
    .locals 0

    .line 11
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 12
    iput-object p1, p0, Lcom/tkay/core/b/c/a;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    .line 13
    iput-object p2, p0, Lcom/tkay/core/b/c/a;->b:Lcom/tkay/core/api/BaseAd;

    return-void
.end method


# virtual methods
.method public final a()Lcom/tkay/core/api/TYBaseAdAdapter;
    .locals 1

    .line 17
    iget-object v0, p0, Lcom/tkay/core/b/c/a;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    return-object v0
.end method

.method public final b()Lcom/tkay/core/api/BaseAd;
    .locals 1

    .line 21
    iget-object v0, p0, Lcom/tkay/core/b/c/a;->b:Lcom/tkay/core/api/BaseAd;

    return-object v0
.end method
