.class final Lcom/kwad/sdk/utils/InstalledAppInfoManager$1;
.super Lcom/kwad/sdk/utils/aw;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/utils/InstalledAppInfoManager;->a(Landroid/content/Context;Lcom/kwad/sdk/g/a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic Po:Lcom/kwad/sdk/g/a;

.field final synthetic jz:Landroid/content/Context;


# direct methods
.method constructor <init>(Landroid/content/Context;Lcom/kwad/sdk/g/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/utils/InstalledAppInfoManager$1;->jz:Landroid/content/Context;

    iput-object p2, p0, Lcom/kwad/sdk/utils/InstalledAppInfoManager$1;->Po:Lcom/kwad/sdk/g/a;

    invoke-direct {p0}, Lcom/kwad/sdk/utils/aw;-><init>()V

    return-void
.end method


# virtual methods
.method public final doTask()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/utils/InstalledAppInfoManager$1;->jz:Landroid/content/Context;

    invoke-static {v0}, Lcom/kwad/sdk/utils/InstalledAppInfoManager;->bV(Landroid/content/Context;)Ljava/util/Map;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/utils/InstalledAppInfoManager;->f(Ljava/util/Map;)Lorg/json/JSONArray;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/sdk/utils/InstalledAppInfoManager$1;->Po:Lcom/kwad/sdk/g/a;

    invoke-interface {v1, v0}, Lcom/kwad/sdk/g/a;->accept(Ljava/lang/Object;)V

    return-void
.end method
