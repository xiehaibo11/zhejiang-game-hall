.class final Lcom/tkay/network/gdt/GDTTYBannerAdapter$3$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/api/MediationInitCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/gdt/GDTTYBannerAdapter$3;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/gdt/GDTTYBannerAdapter$3;


# direct methods
.method constructor <init>(Lcom/tkay/network/gdt/GDTTYBannerAdapter$3;)V
    .locals 0

    .line 200
    iput-object p1, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter$3$1;->a:Lcom/tkay/network/gdt/GDTTYBannerAdapter$3;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFail(Ljava/lang/String;)V
    .locals 2

    .line 208
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter$3$1;->a:Lcom/tkay/network/gdt/GDTTYBannerAdapter$3;

    iget-object v0, v0, Lcom/tkay/network/gdt/GDTTYBannerAdapter$3;->c:Lcom/tkay/network/gdt/GDTTYBannerAdapter;

    const-string v1, ""

    invoke-virtual {v0, v1, p1}, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onSuccess()V
    .locals 3

    .line 203
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter$3$1;->a:Lcom/tkay/network/gdt/GDTTYBannerAdapter$3;

    iget-object v0, v0, Lcom/tkay/network/gdt/GDTTYBannerAdapter$3;->c:Lcom/tkay/network/gdt/GDTTYBannerAdapter;

    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter$3$1;->a:Lcom/tkay/network/gdt/GDTTYBannerAdapter$3;

    iget-object v1, v1, Lcom/tkay/network/gdt/GDTTYBannerAdapter$3;->a:Landroid/content/Context;

    check-cast v1, Landroid/app/Activity;

    iget-object v2, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter$3$1;->a:Lcom/tkay/network/gdt/GDTTYBannerAdapter$3;

    iget-object v2, v2, Lcom/tkay/network/gdt/GDTTYBannerAdapter$3;->b:Ljava/util/Map;

    invoke-static {v0, v1, v2}, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->a(Lcom/tkay/network/gdt/GDTTYBannerAdapter;Landroid/app/Activity;Ljava/util/Map;)V

    return-void
.end method
