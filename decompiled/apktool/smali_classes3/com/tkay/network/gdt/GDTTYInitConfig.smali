.class public Lcom/tkay/network/gdt/GDTTYInitConfig;
.super Lcom/tkay/core/api/TYInitConfig;


# direct methods
.method public constructor <init>(Ljava/lang/String;)V
    .locals 2

    .line 15
    invoke-direct {p0}, Lcom/tkay/core/api/TYInitConfig;-><init>()V

    .line 16
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInitConfig;->paramMap:Ljava/util/Map;

    const-string v1, "app_id"

    invoke-interface {v0, v1, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 18
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/network/gdt/GDTTYInitConfig;->initMediation:Lcom/tkay/core/api/TYInitMediation;

    return-void
.end method
