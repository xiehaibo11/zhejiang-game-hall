.class public Lcom/huawei/hms/availableupdate/g0$b;
.super Ljava/lang/Object;
.source "SilentUpdateWizard.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/huawei/hms/availableupdate/g0;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = "b"
.end annotation


# instance fields
.field public final synthetic a:Lcom/huawei/hms/availableupdate/g0;


# direct methods
.method public constructor <init>(Lcom/huawei/hms/availableupdate/g0;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/huawei/hms/availableupdate/g0$b;->a:Lcom/huawei/hms/availableupdate/g0;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public synthetic constructor <init>(Lcom/huawei/hms/availableupdate/g0;Lcom/huawei/hms/availableupdate/g0$a;)V
    .locals 0

    .line 2
    invoke-direct {p0, p1}, Lcom/huawei/hms/availableupdate/g0$b;-><init>(Lcom/huawei/hms/availableupdate/g0;)V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 1
    iget-object v0, p0, Lcom/huawei/hms/availableupdate/g0$b;->a:Lcom/huawei/hms/availableupdate/g0;

    const/16 v1, 0xe

    invoke-static {v0, v1}, Lcom/huawei/hms/availableupdate/g0;->a(Lcom/huawei/hms/availableupdate/g0;I)V

    return-void
.end method
