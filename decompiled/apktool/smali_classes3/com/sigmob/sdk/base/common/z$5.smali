.class Lcom/sigmob/sdk/base/common/z$5;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/common/z;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Landroid/content/pm/PackageInfo;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Lcom/sigmob/sdk/base/models/BaseAdUnit;

.field final synthetic d:Landroid/content/pm/PackageInfo;


# direct methods
.method constructor <init>(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Landroid/content/pm/PackageInfo;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/z$5;->a:Ljava/lang/String;

    iput-object p2, p0, Lcom/sigmob/sdk/base/common/z$5;->b:Ljava/lang/String;

    iput-object p3, p0, Lcom/sigmob/sdk/base/common/z$5;->c:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iput-object p4, p0, Lcom/sigmob/sdk/base/common/z$5;->d:Landroid/content/pm/PackageInfo;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 4

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/z$5;->a:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/z$5;->b:Ljava/lang/String;

    iget-object v2, p0, Lcom/sigmob/sdk/base/common/z$5;->c:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    new-instance v3, Lcom/sigmob/sdk/base/common/z$5$1;

    invoke-direct {v3, p0}, Lcom/sigmob/sdk/base/common/z$5$1;-><init>(Lcom/sigmob/sdk/base/common/z$5;)V

    invoke-static {v0, v1, v2, v3}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    return-void
.end method
