.class public interface abstract annotation Lcom/ss/android/downloadlib/addownload/model/OrderDownloadItem$OrderCheckStatus;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/annotation/Annotation;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/downloadlib/addownload/model/OrderDownloadItem;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2609
    name = "OrderCheckStatus"
.end annotation

.annotation runtime Ljava/lang/annotation/Retention;
    value = .enum Ljava/lang/annotation/RetentionPolicy;->SOURCE:Ljava/lang/annotation/RetentionPolicy;
.end annotation


# static fields
.field public static final DELETE_LATE_ORDER:I = 0x5

.field public static final INSTALLED:I = 0x2

.field public static final NORMAL:I = 0x1

.field public static final NO_WIFI_PARAM:I = 0x4

.field public static final REPEAT_DOWNLOAD:I = 0x3
