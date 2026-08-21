.class final Lcom/tkay/china/a/b$2$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/china/api/OaidSDKCallbackListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/china/a/b$2;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/china/a/b$2;


# direct methods
.method constructor <init>(Lcom/tkay/china/a/b$2;)V
    .locals 0

    .line 179
    iput-object p1, p0, Lcom/tkay/china/a/b$2$1;->a:Lcom/tkay/china/a/b$2;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final OnSupport(ZLcom/bun/miitmdid/interfaces/IdSupplier;)V
    .locals 0

    .line 182
    iget-object p1, p0, Lcom/tkay/china/a/b$2$1;->a:Lcom/tkay/china/a/b$2;

    iget-object p1, p1, Lcom/tkay/china/a/b$2;->b:Lcom/tkay/china/a/a;

    invoke-static {p2, p1}, Lcom/tkay/china/a/b;->a(Lcom/bun/miitmdid/interfaces/IdSupplier;Lcom/tkay/china/a/a;)V

    return-void
.end method

.method public final onSupport(Lcom/bun/miitmdid/interfaces/IdSupplier;)V
    .locals 1

    .line 187
    iget-object v0, p0, Lcom/tkay/china/a/b$2$1;->a:Lcom/tkay/china/a/b$2;

    iget-object v0, v0, Lcom/tkay/china/a/b$2;->b:Lcom/tkay/china/a/a;

    invoke-static {p1, v0}, Lcom/tkay/china/a/b;->a(Lcom/bun/miitmdid/interfaces/IdSupplier;Lcom/tkay/china/a/a;)V

    return-void
.end method
